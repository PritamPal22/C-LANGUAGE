#include<stdio.h>

//MERGED SORT
void Conquer(int A[], int low, int mid, int high) {
    int i = low, j = mid+1, k = 0;
    int B[high-low+1];
    while(i <= mid && j <= high) {
        if(A[i] < A[j])
            B[k++] = A[i++];
        else
            B[k++] = A[j++];
    }
    while(i <= mid)
        B[k++] = A[i++];
    while(j <= high)
        B[k++] = A[j++];
    for(i = low, k = 0; i <= high; i++,k++)
        A[i] = B[k];
}

void Divide(int A[], int low, int high) {
    if(low < high) {
        int mid = (low + high) / 2;
        Divide(A, low, mid);
        Divide(A, mid+1, high);
        Conquer(A, low, mid, high);
    }
}

void PrintArray(int n, int A[]) {
    for(int i = 0; i < n; i++)
        printf("%d ", A[i]);
    printf("\n");
}

int GCD(int val1, int val2) {
    int temp;
    while(val2 != 0) {
        temp = val1 % val2;
        val1 = val2;
        val2 = temp;
    }
    return val1;
}

int GCDofArray(int n, int A[]) {
    int result = A[0];
    for(int i=1; i<n; i++) {
        result = GCD(result, A[i]);
        if(result == 1)
            return 1;
        }
    return result;
}

int main() {
    int n;
    printf("Enter the Array size: ");
    scanf("%d",&n);
    int A[n];
    printf("Enter array elements:\n");
    for(int i=0;i<n;i++) 
        scanf("%d",&A[i]);

    Divide(A,0,n-1);
    printf("Sorted Array is:\n");
    PrintArray(n,A);

    int gcd_result = GCDofArray(n,A);
    printf("GCD of the array elements is: %d\n",gcd_result);
    return 0;
}