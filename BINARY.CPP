#include<stdio.h>
#include<conio.h>
  void sort(int a[7])
  {
  	int i,j,temp;
  	for(i=0;i<7;i++)
  	{
  		if(a[j]>a[i])
  		{
  			temp=a[i];
  			a[i]=a[j];
  			a[j]=temp;
			}
		}
	}
	int main()
  { int s[7],c,f=0,l=6,m;
    printf("eNTER the array\n");
    for(int i=0;i<7;i++)
    scanf("%d",&s[i]);
    sort(a);
    printf("Enter the no to be search\n");
    scanf("%d",&c);
    while(f<=l)
    { m=(f+l)/2;
      if(s[m]<c)
      f=m+1;
      else if(s[m]>c)
      l=m-1;
      else if(s[m]=c)
      { printf("The no is found at %d",m);
	break;
      }
    }
    return(0);
  }
