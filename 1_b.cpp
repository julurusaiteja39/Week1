#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter number of elements"<<endl;
	cin>>n;
	int cnt=2,a=1,b=1,c;
	//in general fibonocci series starts with 0 so a=0 but according to question series must start with 1
	cout<<"fibonocci series is as follows"<<endl;
	for(int i=0;i<n;i++)
	{
		if(i==0){
			cout<<a<<endl;
			continue;
		}	
		if(i==1){
			cout<<b<<endl;
			continue;
		}
		c=a+b;
		a=b;
		b=c;
		cout<<c<<endl;
	}
}
