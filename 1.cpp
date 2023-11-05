#include<bits/stdc++.h>
using namespace std;
int main()
{
	int g;
	int test; 
	cin>>g;
	while(g--)
	{
		int a[100000]={1},i,up,c,s,n,j;
		long long int x,ret,k;
		cin>>n>>x;
		c=1;
		for(i=1;i<=n;i++)
		{
			up=0;
			for(j=0;j<c;j++)
			{
				s=a[j]*i+up;
				a[j]=s%10;
				up=s/10;
			}
			while(up)
			{
				a[c++]=up%10;
				up/=10;
			}
		}
		k=ret=0;
//		len=strlen(a);
		for(k=c-1;k>=0;k--)
		{
			ret=(ret*10+a[k])%x;
		}
		cout<<ret<<endl;
//		x2=x;x1=0;
//		while(x2)
//		{
//			x2/=10;
//			x1++;
//		}
		
				
	}
	
	
	return 0;
}

