#include <stdio.h>
#define inf 99999

int main(){
	int n,i,j,l,k,q;
	printf("Enter the size of sequence :");
	scanf("%d",&n);
	int p[n];
	printf("Enter the elements :");
	for(i=0;i<n;i++)
		scanf("%d",&p[i]);
	
	int m[n+1][n+1],s[n+1][n+1];
	for(i=0;i<=n;i++){
		for(j=0;j<=n;j++){
			m[i][j]=-1;
			s[i][j]=-1;
		}
	}
	for(i=0;i<=n;i++){
		m[i][i]=0;
		s[i][i]=0;
	}
	for(l=2;l<=n;l++){
		for(i=1;i<=n-l+1;i++){
			j=i+l-1;
			m[i][j]=inf;
			for(k=i;k<j;k++){
				q = m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
				if(q<m[i][j]){
					m[i][j]=q;
					s[i][j]=k;
				}
			}	
		}
	}
	for(i=1;i<n;i++){
		for(j=0;j<=n;j++){
			if (s[i][j]!=-1){
				printf("%d ",s[i][j]);
			}else{
				printf("  ");
			}
		}
		printf("\n");
	}
	
	return 0;
}
