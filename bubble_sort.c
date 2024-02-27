#include<stdio.h>

void BubbleSort(int A[], int n);
void main()
{
    int A[30], i, n;
    printf("\nEnter how much number: ");
    scanf("%d", &n);
    printf("\nEnter the Elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d\t", &A[i]);
    }
    BubbleSort(A, n);
    printf("\nArray After Sorting: ")
}