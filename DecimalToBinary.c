#include<stdio.h>
#include<math.h>

void DecimalToBinary(int N) {
    long long int Binary = 0;
    int R;
    int count = 0;
    while(N > 0) {
        R = N % 2;
        Binary += R * pow(10,count);
        N = N / 2;
        count++;
    }
    printf("The Binary number of the Decimal number is: %lld\n",Binary);
}

int main() {
    int N;
    printf("Enter the number N: ");
    scanf("%d",&N);
    DecimalToBinary(N);
    return 0;
}