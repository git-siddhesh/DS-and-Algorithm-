//Insertion sort 
#include<iostream>
using namespace std;

int main()
{
	int a[7],i,j,key;
	cout<<"Enter the array";
	for(i=0;i<7;i++)
		cin>>a[i];
	for(i=1;i<7;i++)
	{
		key=a[i];
		j=i-1;
		while(j>=0&& a[j]>key)
		{
			a[j+1]=a[j];
			j--;
		}
		  a[j+1]=key;
	}
	for(i=0;i<7;i++)
		cout<<a[i];
 return(0);
}

