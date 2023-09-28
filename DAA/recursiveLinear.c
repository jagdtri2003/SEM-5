#include <stdio.h>

int linearSearch(int arr[],int ele,int n,int idx){
	if(idx<n){
		if(arr[idx]==ele){
			return idx;
		}
		return linearSearch(arr,ele,n,idx+1);		
		
	}
	return -1;	
}

int main(){
	
	int n,ele,idx;
	printf("Enter the number the of elements in the array :");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the element to be searched : " );
	scanf("%d",&ele);
	idx=linearSearch(arr,ele,n,0);
	if(idx!=-1){
		printf("%d is found at index %d\n",ele,idx);
	}else{
		printf("Element Not Found !!\n");
	}

	return 0;	
}
