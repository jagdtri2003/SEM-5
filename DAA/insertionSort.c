#include <stdio.h>

void insertionSort(int arr[],int n);

int main(){
	int n;
	printf("Enter the number the of elements in the array :");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	insertionSort(arr,n);
	printf("Sorted Array:\n");
	for(int j=0;j<n;j++){
		printf("%d ",arr[j]);
	}		
	
}

void insertionSort(int arr[],int n){

	for(int i=1;i<n;i++){
		int key=arr[i];
		int j=i-1;
		while(key<arr[j] && j>=0){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;		
	}
}
