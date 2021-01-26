#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }


    /* Write the logic to reverse the array. */
    for(i=0;i<num/2;i++)
    {
        int temp =arr[i];
        arr[i] = arr[num-1-i];
        arr[num-1-i]= temp;
    }
    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}


/*

Results:

input :
6
16 13 7 2 1 12 

output:

reverse of array : 12 1 2 7 13 16 

*/

