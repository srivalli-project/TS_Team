#include<stdio.h>
int main()
{
    int i,j,temp,a[50],n,count=0;
  //  printf("enter how many elements\n");
    scanf("%d",&n);
  //  printf("enter %d elements\n",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
           if(a[j]>a[j+1])
           {
               
               temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;
               count++;
           }
           
        }
       
     }
     printf("Array is sorted in %d swaps.\n",count);
     printf("First Element:%d\n",a[0]);
     printf("Last Element:%d\n",a[n-1]);
     return 0;
}
