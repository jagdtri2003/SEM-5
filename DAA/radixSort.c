#include <stdio.h>

void radixSort(int arr[],int n){
	int max=-99999,digit=0,i,divisor=1,bin[10][5],count[10],rem;
	for(i=0;i<n;i++)
		max=max>arr[i]?max:arr[i];
	while(max){
		digit++;
		max/=10;
	}
	while(digit){
		for(i=0;i<10;i++)
			count[i]=0;
		for(i=0;i<n;i++){
			rem=(arr[i]/divisor)%10;
			bin[rem][count[rem]++]=arr[i];
		}
		int m=0;
		for(i=0;i<10;i++){
			if(count[i]>0){
				for(int j=0;j<count[i];j++){
					arr[m++]=bin[i][j];
				}
			}
		}
		digit--;
		divisor*=10;					
	}
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
}

int main(){
	int arr[]={321,420,10,0,89,44,11};
	radixSort(arr,7);
	return 0;
}
