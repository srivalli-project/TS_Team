#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 1000000
int cmpfunc (const void * arr1, const void * b)
{
   return ( *(int*)arr1 - *(int*)b );
}
int main() 
{
    int n,k;
    int ctr = 0;
    int i;
    int arr1[10];
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    scanf("%d",&arr1[i]); 	
    qsort(arr1, n, sizeof(int), cmpfunc);
    int l = 0;
    int r = 0;
//	printf("The distinct pairs for difference %d are: ",k);    
    while(r < n)
    {
         if(arr1[r] - arr1[l] == k)
         {
		 //printf("[%d, %d] ",arr1[r],arr1[l]);
              ctr++;
              l++;
              r++;
        }
         else if(arr1[r] - arr1[l] > k)
              l++;
         else
              r++;
    }
    printf("%d",ctr);
    return 0;
}
