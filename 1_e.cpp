#include<bits/stdc++.h>
#include<string>
using namespace std;
void clps(string b,int n,int* lps)
{
	lps[0]=0;
	int k=0,i=1;
	while(i<n)
	{
		if(b[i]==b[k])
		{
			k++;
			lps[i]=k;
			i++;
		}
		else
		{
			if(k!=0)
			{
				k=lps[k-1];
			}
			else
			{
				lps[i]=0;
				i++;
			}
		}
	}
}
void kmp(string a,string b)
{
	int m=a.length();
	int n=b.length();
	int lps[n];
	clps(b,n,lps);
	int i=0,j=0;
	vector<int>vec;
	while(i<m)
	{
		if(b[j]==a[i])
		{
			i++;
			j++;
		}
		if(j==n)
		{
			vec.push_back(i-j);
			j=lps[j-1];
		}
		else if(i<m && b[j]!=a[i])
		{
			if(j!=0)
				j=lps[j-1];
			else
				i=i+1;
		}
	}
	if(vec.size()==0)
		cout<<"not present";
	else
	{
		cout<<"Indices of the words are"<<endl;
		for(int i=0;i<vec.size();i++)
		{
			cout<<vec[i]<<" ";
		}
	}
}

int main()
{
	string a,b;
	cout<<"Enter the sentence"<<endl;
	getline(cin,a);
	cout<<"Enter the word to be searched"<<endl;
	getline(cin,b);
	kmp(a,b);
}
