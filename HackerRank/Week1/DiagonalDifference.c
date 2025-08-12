#include<stdio.h>
#include<stdlib.h>
int diagonalDifference(int n, int arr[n][n]){
    int leftDiagonalSum=0, rightDiagonalSum=0;
    for (int i=0;i<n;i++){
        leftDiagonalSum += arr[i][i];
        rightDiagonalSum += arr[i][n-i-1];
    }
    return abs(leftDiagonalSum-rightDiagonalSum);
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
            }
    }
    printf("%d",diagonalDifference(n,arr));
    return 0;
}