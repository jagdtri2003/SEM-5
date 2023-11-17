#include <stdio.h>

void countingSort(int arr[],int n,int k){
	int count[k+1],i,b[n];
	for(i=0;i<=k;i++)
		count[i]=0;
	for(i=0;i<n;i++)
		count[arr[i]]++;
	for(i=1;i<=k;i++)	
		count[i]+=count[i-1];
	for(i=n-1;i>=0;i--)
		b[--count[arr[i]]]=arr[i];
	printf("Sorted Array := ");
	for(i=0;i<n;i++)
		printf("%d ",b[i]);
}

int main(){
	int n,k;
	printf("Enter the size of array :");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the value of k :");
	scanf("%d",&k);	
	printf("Enter the elements of array :-\n");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	countingSort(arr,n,k);
	return 0;
}
