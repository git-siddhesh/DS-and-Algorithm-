//Sorting- (Selection sort)
#include<stdio.h>
#include<conio.h>
void main()
{ int a[20];
  int i,j,p,temp,n;
  clrscr();
  printf("Enter the no of nodes");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  for(i=0;i<n;i++ )
  {p=i;
    for(j=i+1;j<n;j++)
    { if(a[p]>a[j] )
      { temp=a[p];
	a[p]=a[j];
	a[j]=temp;
      }
    }
     if(p!=i)
     { temp=a[p];
       a[p]=a[i];
       a[i]=temp;
     }

  }
  for(i=0;i<n;i++)
  printf("%d",a[i]);
  getch();
}