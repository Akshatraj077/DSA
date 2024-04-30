#include <stdio.h>
#define max 100

int sort(int arr[], int low, int high) {
    int i, j, pivot, temp;
    pivot = arr[low];
    i = low;
    j = high;
    while (i < j) {
        while (arr[i] <= pivot && i < high) {
            i++;
        }
        while (arr[j] > pivot && j > low) {
            j--;
        }
        if (i < j) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return j;
}

void quicksort(int arr[], int low, int high) {
    int partition;
    if (low < high) {
        partition = sort(arr, low, high);
        quicksort(arr, low, partition - 1);
        quicksort(arr, partition + 1, high);
    }
}

int main() {
    int arr[max], n, i;
    printf("Enter the number of elements\n");
    scanf("%d", &n);
    printf("Enter the elements\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("The unsorted array is\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    quicksort(arr, 0, n - 1);
    printf("\nThe sorted array is\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}