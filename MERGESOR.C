#include<stdio.h>
#include<conio.h>
void merge(int a[], int l, int m, int r)
{
 int i,j,k;
 int n1=m-l+1;
 int n2=r-m;
 int la[10];
 int ra[10];

 for(i=0;i<n1;i++)
	la[i]=a[l+i];
 for(j=0;j<n2;j++)
	ra[j] = a[m+1+j];

 for(i=0,j=0,k=1; i<n1&&j<n2; k++ )
 {
	if(la[i]<ra[j])
	{	a[k] = la[i];
		i++;
	}
	else
	{	a[k] = ra[j];
		j++;
	}
 }
 while(i<n1)
 {	a[k] = la[i];
	i++;
	k++;
 }

 while(j<n2)
 {	a[k] = ra[j];
	j++;
	k++;
 }

}
void mergesort(int a[], int l, int r)
{

	if(l<r)
	{
	 int m = l+(r-1)/2;
	 mergesort(a,l,m);
	 mergesort(a,m+1,r);
	 merge(a,l,m,r);
	}
}

void main()
{
  int a[] = {5,3,7,6,2,8,9,1},l,r,m,i;
  clrscr();
  mergesort(a,0,7);
  printf("sorted array: \n");
  for(i=0;i<7;i++)
		printf("%d ",a[i]);
  getch();
}