#include <stdio.h>

int binarySearch(int arr[], int n, int key) {
    int l = 0, h = n - 1;


    while (l <= h) {

        int mid = (l + h) / 2;
      
        if (arr[mid] == key)
            return mid;
            
        else if (arr[mid] < key)
            l = mid + 1;
        else
            h = mid - 1;


    }

    return -1;
}

int main() {
    int n, key;
    printf("enter no. elements must be sorted before itself");

    scanf("%d", &n);

    int arr[n];
    printf("enter elements in sorted order ", n);

    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("enter element to search ");
    
    scanf("%d", &key);

    int pos = binarySearch(arr, n, key);
    if (pos != -1)
        printf("%d found at%d\n", key, pos + 1, pos);
    else
        printf("%d not found\n", key);
    return 0;
}
