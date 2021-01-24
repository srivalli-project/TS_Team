#include<stdio.h>

int main()
{
    int matrix[6][6];
    int i,j;
    for(i=0;i<6;i++)
    {
       for(j=0;j<6;j++)
       {
          scanf("%d",&matrix[i][j]);
       }
    }

    int maxi_sum=-3000;
    int k=0;
    
   for(int i=0;i<4;i++)
   {
       int sum =0;
       for(j=k;j<k+3;j++)
       {
          sum+=matrix[i][j];
          if(j==k)sum+=matrix[i+1][k+1];
          sum+=matrix[i+2][j];
       }
       k = (k<3)? k+1:0;
       if(sum > maxi_sum)
       {
           maxi_sum=sum;
       }
       if(k!=0)
       i--;   
   }
   printf("%d ",maxi_sum);
   return 0;

}
