#include<iostream>

main()
{
	int i,A[100],key;
	for(i=0;i<100;i++)
	cin>>A[i];
	cin>>key;
	for(i=0;i<100;i++)
	if(key=A[i])
	break;
	if(i==100)
	cout<<'not found';
	else
	cout<<'found key in'<<i;
}