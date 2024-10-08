#include <stdio.h>

// Challenge 4 : Tri Rapide :


int partition(int arr[], int low, int high) {
    int pivot = arr[high];  
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;  
}

void quick_sort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quick_sort(arr, low, pi - 1);

        quick_sort(arr, pi + 1, high);
    }
}

int main() {
    int arr[] = {9, 7, 3, 5, 6, 2, 1};  
    
    int n = sizeof(arr) / sizeof(arr[0]);  
    printf("-----------------\n");

    printf("%d \n", partition(arr, 0, n-1));
    
    printf("-----------------\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    quick_sort(arr, 0, n - 1);


    printf("-----------------\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
