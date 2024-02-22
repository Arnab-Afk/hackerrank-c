#include <stdio.h>

void progress1(int n1, int n2) {
    char num[10][10]={"one","two","three","four","five","six","seven","eight","nine"};
    if (n2>9) {
        for (int i = n1; i < 10; i++) {
            printf("%s\n", num[i-1]);
        }
    }
    else {
        for (int i = n1; i <= n2; i++) {
            printf("%s\n", num[i-1]);
        } 
    }
}
void progress2(int n) {
    char num[10][10]={"one","two","three","four","five","six","seven","eight","nine"};
    for(int i=10;i<=n;i++)
    {
        if(i%2==0)
            printf("even\n");
        else 
            printf("odd\n");
    }
}

int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
      // Complete the code.
    
    if (a<10) progress1(a, b);
    if (b>9) progress2(b);
    
    return 0;
}
