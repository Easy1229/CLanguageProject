#include <stdio.h>
#include <stdlib.h>

int main() {
	int num[]={44,25,92,425,1,2852,253,72,851};
	int length=sizeof(num)/sizeof(num[0]);
	int i,j,temp;
	for(i=0;i<length;i++){
		for(j=i+1;j<length;j++){
			if(num[i]>num[j]){
				temp=num[i];
				num[i]=num[j];
				num[j]=temp;
			}
		}
	} 
	for(i=0;i<length;i++){
		printf("%d\n",num[i]);
	}
	return 0;
}
