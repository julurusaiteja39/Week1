#include<bits/stdc++.h>
using namespace std;
void sol(int n,string ar[])
{
	if(n==0)
	{
		return;
	}
	int k=n%10;
	n=n/10;
	sol(n,ar);
	cout<<ar[k]<<" ";
}
int main()
{
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	string ar[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
	sol(n,ar);
}
