#include <stdio.h>

void bubbleSort(int arr[],int n);

void helper(int arr[],int idx,int n);

int main(){
	int n;
	printf("Enter the number the of elements in the array :");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	//bubbleSort(arr,n);
	for(int i=0;i<n-1;i++){
		helper(arr,0,n);
	}
	printf("Sorted Array:\n");
	for(int j=0;j<n;j++){
		printf("%d ,",arr[j]);
	}		
	
}

//Iterative Approach !!
void bubbleSort(int arr[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
		
	}
}

//Recursive Approach !!
void helper(int arr[],int idx,int n){
	if(idx+1>=n)
		return;
	if(arr[idx]>arr[idx+1]){
		int temp=arr[idx];
		arr[idx]=arr[idx+1];
		arr[idx+1]=temp;
	}
	helper(arr,idx+1,n);
}
