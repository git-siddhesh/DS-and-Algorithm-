#include<iostream>
using namespace std;
void merge(int arr[],int l,int r,int m)
{
	int n1=(m-l+1),i,j,k;			//find the length of first array
	int n2=(r-m);		//find the length of second array
	int a1[n1],a2[n2];
	for(i=0;i<n1;i++)
		a1[i]=arr[l+i];	//copying the left side element to array 1
	for(j=0;j<n2;j++)	
		a2[j]=arr[m+1+j];	//copying the right side element to array 2
	for(i=0,j=0,k=1;i<n1&&j<n2;i++,j++)
	{
		if(a1[i]>a2[j])
			arr[k]=a2[j];	//Inserting in the old parent array in sorted way
		else
			arr[k]=a1[i];
			k++;
	}
	while(i<n1)
	{
		arr[k]=a1[i];		//Inserting the remaining element of array1
		i++;k++;
	}
	while(j<n2)
	{
		arr[k]=a2[j];		//Inserting the remaining element of arrar2
		j++;k++;
	}	
}

void mergesort(int arr[],int l,int r)
{
	if(l<r)
	{
		int m=l+(r-1)/2;
		mergesort(arr,l,m);		//function call for recursion for the left side
		mergesort(arr,m+1,r);   //function call for recursion for the right sides
		merge(arr,l,r,m);
	}
}
/*void prnt(int arr[],int k)
{
	for (int i=0;i<k;i++)
		cout<<" "<<arr[i];
}*/
int main()
{
	int n,arr[20],l=0;
	cout<<"Enter the size of array";
	cin>>n;
	cout<<"Enter the element of array\n";
	for(int i=0;i<n;i++)
		cin>>arr[i];
	mergesort(arr,l,n);	//call merge sort function
//	prnt(arr,n);		//call prnt function
	for (int i=0;i<3;i++)
		cout<<" "<<arr[i];
	return (0);
}
