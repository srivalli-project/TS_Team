#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    char str[1000];
    int digits[10]={0};
    scanf("%s",str); 
    for(int i=0;i<strlen(str);i++)
    {
        //checking with ASCII decimal representation
         if(str[i]>=48 && str[i]<=57)
         digits[str[i]-48]++;
    } 
    // print digits array elements 
    for(int i=0;i<10;i++)
    {
        printf("%d ",digits[i]);
    }
    return 0;
}


/*

results:

input:

a11472o5t6

output:

0 2 1 0 1 1 1 1 0 0 

*/

