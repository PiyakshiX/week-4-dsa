#include <stdio.h>

int main() {
    int arr[100], n, i, maxIndex = 0, minIndex = 0, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Find indexes of max and min
    for (i = 1; i < n; i++) {
        if (arr[i] > arr[maxIndex])
            maxIndex = i;
        if (arr[i] < arr[minIndex])
            minIndex = i;
    }

    // Swap
    temp = arr[maxIndex];
    arr[maxIndex] = arr[minIndex];
    arr[minIndex] = temp;

    printf("Array after swapping largest and smallest:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
