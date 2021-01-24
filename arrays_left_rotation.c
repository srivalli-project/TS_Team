#include<stdio.h>
int main()
{
     int j,n,temp,arr[10],i,r;
   //  printf("enter size and left shift \n");
     scanf("%d %d",&n,&r);
    // printf("enter elements\n");
     for(i=0;i<n;i++)
     scanf("%d",&arr[i]);
  //   printf("how left are nedded\n");
    // scanf("%d",&r);
     for(i=0;i<r;i++)
     {
         temp = arr[0];
         for(j=0;j<n;j++)
         {
           arr[j] = arr[j+1];

         }
         arr[n-1] = temp;
     }
   //  printf("finall array \n");
     for(i=0;i<n;i++)
     {
        printf("%d ",arr[i]);

     }



}
