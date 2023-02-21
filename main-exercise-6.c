#include <stdio.h> 
  
// Function to swap two numbers 
void swap(int *x, int *y) 
{ 
    int temp = *x; 
    *x = *y; 
    *y = temp; 
} 
  
// Function to sort an array using insertion sort 
void insertionSort(int arr[], int n) 
{ 
   int i, key, j; 
   for (i = 1; i < n; i++) 
   { 
       key = arr[i]; 
       j = i-1; 
    //[5,1,4,3,6]
    //[1,5,4,3,6]
    //[1,4,5,3,6]
    //[1,4,3,5,6]
    //[1,4,3,5,6]
    //key = arr[i] =>5
       /* Move elements of arr[0..i-1], that are 
          greater than key, to one position ahead 
          of their current position */
       while (j >= 0 && arr[j] > key) 
       { 
           arr[j+1] = arr[j]; 
           j = j-1; 
       } 
       arr[j+1] = key; 
   } 
} 
  
// Function to print an array 
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
} 
  
// Driver program to test insertion sort 
int main() 
{ 
    int arr[] = {5,1,4,3,6}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
  
    insertionSort(arr, n); 
    printArray(arr, n); 
  
    return 0; 
}