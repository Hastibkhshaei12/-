#include<iostream.h>
main()
{
	for(i=0;i<100;i++)
	cin>>A[i];
	for(j=0;j<99;j++)
	for(i=0;i<99;i++)
	if(A[i]<A[i+1])
	{
		temp=A[i];
		A[i]=A[i+1];
		A[i+1]=temp;
	}
	for(i=0;i<100;i++)
	cout<<A[i];
}