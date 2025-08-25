#include <stdio.h>

int main() {
    int sales[5][3], i, j, totalSalesman[5] = {0}, totalProduct[3] = {0};

    printf("Enter sales of 5 salesmen for 3 products:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &sales[i][j]);
            totalSalesman[i] += sales[i][j];  // total per salesman
            totalProduct[j] += sales[i][j];   // total per product
        }
    }

    printf("\nTotal sales by each salesman:\n");
    for (i = 0; i < 5; i++)
        printf("Salesman %d: %d\n", i + 1, totalSalesman[i]);

    printf("\nTotal sales of each product:\n");
    for (j = 0; j < 3; j++)
        printf("Product %d: %d\n", j + 1, totalProduct[j]);

    return 0;
}
