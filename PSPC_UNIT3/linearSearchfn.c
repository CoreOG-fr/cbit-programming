#include <stdio.h>

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {

        if (arr[i] == key)
            return i;
            
    }
    return -1;
}

int main() {


    int n, key;
    printf("enter no. of elements ");
    scanf("%d", &n);

    int arr[n];

    printf("enter elements to sort", n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("enter element to search ");
    scanf("%d", &key);

    int pos = linearSearch(arr, n, key);
    if (pos != -1)
        printf("%d found at %d \n", key, pos +1, pos);
    else
        printf("element not found", key);
    return 0;
}
