#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, *revarr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    revarr = (int*) malloc(num * sizeof(int));
    for(i = num-1; i >= 0; i--)
        revarr[num-1-i]=arr[i];

    for(i = 0; i < num; i++)
        printf("%d ", *(revarr + i));
    return 0;
}
