#include <stdio.h>

int main() {
    int i, j, m, n, sum = 0;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);
    int a[m][n];
    printf("Enter matrix elements:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Sum of left diagonal elements: ");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (i == j) {
                sum = sum + a[i][j];
            }
        }
    }
   printf("%d\n", sum);
   return 0;
}
