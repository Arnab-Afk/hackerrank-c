#include <stdio.h>

int main() {
    int n;


    scanf("%d", &n);

    for (int i = 1; i <= 2 * n - 1; i++) {
        for (int j = 1; j <= 2 * n - 1; j++) {
            int minDistanceRow = (i <= 2 * n - i) ? i - 1 : 2 * n - i - 1;
            int minDistanceCol = (j <= 2 * n - j) ? j - 1 : 2 * n - j - 1;
            int minDistance = (minDistanceRow < minDistanceCol) ? minDistanceRow : minDistanceCol;

            printf("%d ", n - minDistance);
        }
        printf("\n");
    }

    return 0;
}
