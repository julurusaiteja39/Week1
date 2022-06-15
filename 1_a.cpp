#include<bits/stdc++.h>
using namespace std;
int main()
{
	double n;
	cout<<"Enter number of elements"<<endl;
	//n=10;
	cin>>n;
	double sum=0,k=1;
	for(int i=1;i<n;i++)
	{
		
		k=k*i;
		sum+=(i/k);
	}
	
	cout<<"Required sum is:"<<sum;
}
