#include <stdio.h>

void miniMaxSum(int arr[5]) {
    int total = 0;
    int min = arr[0], max = arr[0];

    for (int i = 0; i < 5; i++) {
        total += arr[i]; //finding total sum of array

        if (arr[i] < min)
            min = arr[i];//finding min value of the array

        if (arr[i] > max)
            max = arr[i];// finding the max value of the array
    }

    int minSum = total - max; //finding the min sum of the array
    int maxSum = total - min;//finding the max sum of the array

    printf("%lld %lld\n", minSum, maxSum);
}

int main() {
    int arr[5];
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    miniMaxSum(arr);
    return 0;
}
