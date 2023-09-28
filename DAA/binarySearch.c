#include <stdio.h>

int binarySearch(int arr[],int ele,int lb,int ub){
	if(lb<=ub){	
		int mid = (lb+ub)/2;
		if(arr[mid]==ele){
			return mid;
		}else if(arr[mid]>ele){
			return binarySearch(arr,ele,lb,mid-1);
		}else{
			return binarySearch(arr,ele,mid+1,ub);
		}
	}
	else{
		return -1;
	}
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
	idx=binarySearch(arr,ele,0,n);
	if(idx!=-1){
		printf("%d is found at index %d\n",ele,idx);
	}else{
		printf("Element Not Found !!\n");
	}

	return 0;	
}
