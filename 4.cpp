#include<bits/stdc++.h>
using namespace std;
void fl(int g)
{
	int a,b,c,d;
	a=g%10;g/=10;
	b=g%10;g/=10;
	c=g%10;g/=10;
	d=g;
	cout<<d<<" "<<c<<" "<<b<<" "<<a<<" ";
}
int main()
{
	int x;
	int test; 
	cin>>x;
	fl(x);
	return 0;
}

