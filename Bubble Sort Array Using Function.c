#include <stdio.h>

// Function to perform Bubble Sort
void bubbleSort(int arr[], int n) 
{
    for (int i = 0; i < n - 1; i++) 
	{
        for (int j = 0; j < n - i - 1; j++) 
		{
            if (arr[j] > arr[j + 1]) 
			{
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to display an array
void printArray(int arr[], int n) 
{
    for (int i = 0; i < n; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() 
{
    int n;
    // Input: Number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    // Input: Array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
    }
    // Sorting the array using Bubble Sort
    bubbleSort(arr, n);
    // Displaying the sorted array
    printf("Sorted array: ");
    printArray(arr, n);
    return 0;
}