#include<stdio.h>
int greatest(int a,int b,int c ,int d)
{
   int first  =(a>b)?a:b;
   int second =(c>d)?c:d; 
   return (first>second)?first:second;
    

}
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    
    printf("%d",greatest(a,b,c,d));
    return 0;
}
