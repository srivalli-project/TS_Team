#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    long int a[n];
    for(int i=0;i<n;i++)
    scanf("%ld",&a[i]);
    long max;
    max=a[0];
    for(int i=0;i<n;i++)
    {
        if(max<a[i])
        max=a[i];
    }
    long c=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==max)
        c++;
    }
    printf("%ld",c);
    return 0;
}

/*
Results:

input:
4 
3 2 1 3 

output:

2 


*/
