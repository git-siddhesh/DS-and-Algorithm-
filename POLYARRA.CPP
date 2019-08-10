#include<stdio.h>
#include<iostream.h>
#include<conio.h>
void main()
{ int a[10][10],b[10][11],c[10][11],n,n2,i,j,k;
  clrscr();
  cout<<"Enter the length of th first expression\n";
  cin>>n;
  cout<<"Enter the first expression \n";
  for( i=0;i<n;i++)
  {
  cin>>a[i][0]>>a[i][1];
  }
  cout<<"Enter the length of the second expression\n";
  cin>>n2;
  cout<<"Enter the second expression \n";
  for( i=0;i<n2;i++)
  {
    cin>>b[i][0]>>b[i][1];
  }
  cout<<"Now the addition of the two expression is  :\n";
    k=0;
   for(i=0,j=0;(i<n&&j<n2);)
  { if(a[i][1]>b[j][1])
    { c[k][1]=a[i][1];
      c[k][0]=a[i][0];
    //  cout<<c[k][0]<<"x^"<<c[k][1];
      k++;i++;
    }
    else if(a[i][1]<b[j][1])
    { c[k][1]=b[i][1];
      c[k][0]=b[i][0];
     // cout<<c[k][0]<<"x^"<<c[k][1];
       k++;j++;
    }
    else if(a[i][1]==b[j][1])
    { c[k][0]=a[i][0]+b[j][0];
      c[k][1]=a[i][1];
    //  cout<<c[k][0]<<"x^"<<c[k][1];
      k++;i++;j++;
    }
  }
  while(i<n)
  { c[k][1]=a[i][1];
      c[k][0]=a[i][0];
      k++;i++;
  }

  while(j<n2)
  { c[k][1]=b[j][1];
      c[k][0]=b[j][0];
      k++;j++;
       cout<<"\n while loop first is running\n";
  }
  for(i=0;i<k;i++)
   { printf("%dx^%d + ",c[i][0],c[i][1]);

   }
  getch();
}
