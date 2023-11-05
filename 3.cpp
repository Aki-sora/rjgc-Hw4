#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a[100010];
	int n,cnt=0;
	scanf("%s",&a);
	for(n=0;a[n]!='\0';n++)
	{
	}
	for(int i=0;i<n;i++)
	{
		if(i<=n-2)
		{
			if(a[i]=='s'&&a[i+1]=='n')
			cnt++;
		}
		if(i<=n-6)
		{
			if(a[i]=='y'&&a[i+1]=='x'&&a[i+2]=='d'&&a[i+3]=='l'&&a[i+4]=='n'&&a[i+5]=='b')
			cnt++;
		}
	}
	cout<<cnt<<endl;
	return 0;
}
//snsfafayxdlnb
