#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, avg;
    int a[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    avg = sum / n;

    printf("Average of array elements = %.2f", avg);

    return 0;
}
