#include<stdio.h>
void plusMinus(int arr[],int n){
	int positive_count=0;
	int negative_count=0;
	int zero_count=0;
	
	for(int i=0;i<n;i++){
		if(arr[i]>0)
			positive_count++;
		else if(arr[i]==0)
			zero_count++;
		else
			negative_count++;
	}
	float positive_proportion=(float) positive_count/n;
	float negative_proportion=(float) negative_count/n;
	float zero_proportion=(float) zero_count/n;

	printf("%.6f\n",positive_proportion);
	printf("%.6f\n",negative_proportion);
	printf("%.6f\n",zero_proportion);

	
}



int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
	scanf("%d",&arr[i]);
	}
	plusMinus(arr,n);
	return 0;
}
