#include <stdio.h>
#include <stdlib.h>

int main(){
	int a=3;
	int b=2;
	float c=2.0f; 
	printf("a+b=%d\n",a+b);
	printf("a-b=%d\n",a-b);
	printf("a*b=%d\n",a*b);
	printf("a/c=%f\n",a/c);
	printf("a%%b=%d\n",a%b);
	Test(6666);
	return 0;
} 
int Test(int num){
	printf(num);
	return num;
}
