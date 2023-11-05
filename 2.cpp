#include<bits/stdc++.h>
int a[101];
int n;
using namespace std;
void px()
{
	int t;
	for(int i=1;i<n;i++)
	{
		for(int k=0;k<n-i;k++)
		{
			if(a[k]>a[k+1])
			{
//				swap(a[k],a[k+1]);
				t=a[k];a[k]=a[k+1];a[k+1]=t;
			}
			
		}
	}
}
int main()
{
	
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	px();
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
		if(i==n-1)
		cout<<endl;else
		cout<<" ";
	}
	return 0;
}

