#include<bits/stdc++.h>
using namespace std;
int primefactor[1000001];
void sieve()
{
	int maxN=100000;
	for(int i=1;i<=maxN;i++)
	{
		primefactor[i]=-1;
	}
	for(int i=2;i<=maxN;i++)
	{
		if(primefactor[i]==-1)
		{
			for(int j=i;j<=maxN;j+=i)
			{
				if(primefactor[j]==-1)
					primefactor[j]=i;
			}
		}
	}
}
 int main(int argc, char const *argv[])
{
	sieve();
	int t;
	cout<<"Enter number of testcase\n";
	cin>>t;
	while(t--)
	{
		int n;
		cout<<"enter no .of which u want lowest prime\n";
		cin>>n;
		cout<<primefactor[n]<<endl;
	}
	return 0;
}
