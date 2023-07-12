#include<stdio.h>

int main(){
	int si;
	scanf("%d",&si);
	int i,j,len=si*2,k=0;
	int arr[len][len-1];
	int lim=si,lim2=len;
	int a=0,b=0,c=len,d=len-1;
	for(i=0;i<lim;i++){
		for(j=a;j<c;j++){
			arr[a][j]=si;
		}
		a++;
		for(j=a;j<d;j++){
			arr[j][len-1]=si;
		}
		c--;
		if(b<d){
			for(j=b;j<c;j++){
			arr[len-1][j]=si;
		  }
		  d--;	
		}
		if(a<c){
			for(j=b;j<d;j++){
			arr[b+1][j]=si;
		  }
          b++;			
		}

		
		si--;
		len--;
	}
	for(i=0;i<lim2;i++){
		for(j=0;j<lim2;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
}
}
