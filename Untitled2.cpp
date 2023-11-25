#include<iostream>
main()
{
	int i,A[100],B[100],key,j=0;
	for(i=0;i<100;i++)
	cin>>A[i];
	cin>>key;
	for(i=0;i<100;i++)
	if(key=A[i])
	B[j++]=i;
	if(j==0)
	cout<<'not found';
	else
	for(i=0;i<j;i++)
	cout<<'found key in'<<B[i];
}	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
