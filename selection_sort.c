#include<stdio.h>

void SelectionSort(int A[], int n);

int main() {
    int A[30], i, n;
    
    printf("Enter how many numbers: ");
    scanf("%d", &n);
    
    printf("Enter the elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    
    SelectionSort(A, n);
    
    printf("Array after Sorting: ");
    for(i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    
    return 0;
}

void SelectionSort(int A[], int n) {
    int i, j, temp;
    
    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(A[i] > A[j]) {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
}
