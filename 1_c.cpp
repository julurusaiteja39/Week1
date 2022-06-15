#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void inp(vector<vector<int> > &ar,int n)
{
	cout<<"Enter the elements to your matrix"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			cin>>ar[i][j];
	}
}
void disp(vector<vector<int> > &ar,int n)
{
	cout<<"Your matrix is:"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			cout<<ar[i][j]<<" ";
		cout<<endl;
	}
	cout<<endl;
}
void mul(vector<vector<int> > &ar,int n)
{
	cout<<"Enter the number by which you want to multiply your matrix"<<endl;
	int m;
	cin>>m;//number by which you want to multiply
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			ar[i][j]*=m;
		}
	}
	cout<<"Your matrix after multiplication"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<ar[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main()
{
    
	cout<<"1.Input a matrix"<<endl;
	cout<<"2.Display a matrix"<<endl;
	cout<<"3.Multiply a matrix with given number"<<endl;
	cout<<"4.Exit"<<endl;
	int n;
	cout<<"Enter the size of your matrix"<<endl;
	cin>>n;
	vector < vector < int > >ar (n, vector < int >(n, 0));
	int k=0;
	while(k!=4)
	{
		cout<<"choose a option"<<endl;
		cin>>k;
		switch(k)
		{
			case 1:
				inp(ar,n);
				break;
			case 2:
				disp(ar,n);
				break;
			case 3:
				mul(ar,n);
				break;
			case 4:
				break;	
		}
	}
}
