// C Program to sort an array using qsort() function in C
#include <stdio.h>
#include <stdlib.h>

// If a should be placed before b, compare function should
// return positive value, if it should be placed after b,
// it should return negative value. Returns 0 otherwise
int compare(const void* a, const void* b)
{
    return (*(int*)a - *(int*)b);
}
int main() {
    int arr[] = { 4, 2, 5, 3, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
      // Sorting arr using inbuilt quicksort method
    qsort(arr, n, sizeof(int), compare);
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}