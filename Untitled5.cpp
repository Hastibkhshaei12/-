#include<iostream.h>
main()
{
	int a,b,temp,first,j;
	cin>>a>>b;
	if(a>b)
	{
	a=a+b;
	b=a-b;
	a=a-b;

	}
if(a%2==0)
first=a+2;
else
first=a+1;