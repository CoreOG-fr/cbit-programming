#include <stdio.h>

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minidx = i;
        for (int j = i + 1; j < n; j++) {
            
            if (arr[j] < arr[minidx])
                minidx = j;
        }
        if (minidx != i) {
            int temp = arr[i];
            arr[i] = arr[minidx];
            arr[minidx] = temp;
        }
    }
}

int main() {
    int n;
    printf("enter no. of elements ");
    scanf("%d", &n);

    int arr[n];
    printf("enter elements to sort", n);

    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);

    }
    selectionSort(arr, n);

    printf("after sorting ");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
