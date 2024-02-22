#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int sum_of_digits(n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main() {
	
    int n,result;
    scanf("%d", &n);
    result=sum_of_digits(n);
    printf("%d",result);
    return 0;
}
