#include<iostream.h>
main()
{
	int n;
	cin>>n;
	counter=0;
	for(i=2;i<n;i++)
	if(n%i==0)
	counter++;
	if(counter)
	cout<<'nf';
	else
	cout<<'f';
}