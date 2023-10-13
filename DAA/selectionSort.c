#include <stdio.h>

void selectionSort(int arr[],int n);


int main(){
	int n;
	printf("Enter the number the of elements in the array :");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	selectionSort(arr,n);
	printf("Sorted Array:\n");
	for(int j=0;j<n;j++){
		printf("%d ",arr[j]);
	}		
	
}


void selectionSort(int arr[],int n){

	for(int i=0;i<n;i++){
		int idx=i;
		for(int j=i+1;j<n;j++){
			if(arr[idx]>arr[j])
				idx=j;
		}
		if(idx!=i){
			int temp=arr[idx];
			arr[idx]=arr[i];
			arr[i]=temp;
		}
	}
}
