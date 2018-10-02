//Selection Sort implementation in CPP

#include <stdio.h> 
  
void swap(int *x, int *y) 
{ 
    int tmp = *x; 
    *x = *y; 
    *y = tmp; 
} 
  
void selection_Sort(int arr[], int n) 
{ 
    int i, j, small; 
    for (i = 0; i < n-1; i++) 
    { 
        small = i; 
        for (j = i+1; j < n; j++) 
          if (arr[j] < arr[small]) 
            small = j; 
        swap(&arr[small], &arr[i]); 
    } 
} 

void print_Array(int arr[], int n) 
{ 
    int i; 
    for (i=0; i < n; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
} 

int main() 
{ 
    int arr[] = {46, 15, 18, 82, 74}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    selection_Sort(arr, n); 
    printf("Sorted array: \n"); 
    print_Array(arr, n); 
    return 0; 
} 
