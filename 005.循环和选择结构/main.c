#include <stdio.h>
#include <stdlib.h>

int main() {
	Test5();
	return 0;
}

int Test(){
	printf("�������������!\n");
	int age;
	
	scanf("%d",&age);
	
	if(age>=18){
		printf("SUCCESSFUL!");
	}else{
		printf("FAIL!");
	}
	return 0;
} 
int Test1(){
	int a,b,max;
	printf("��������������!\n");
	scanf("%d %d",&a,&b);
	max=a;
	if(a<b){
		max=b;
	}
	printf("������Ϊ%d\n",max);
	return 0;
}
int Test2(int num){
	printf("Please input a number !\n");
	scanf("%d",&num);
	switch(num){
		case 1:
			printf("1");
			break;
		case 2:
			printf("2");
			break;
		case 3:
			printf("3");
			break;
		case 4:
			printf("4");
			break;
		default:
			printf("Erron\n");
			break;	
	}
	return 0;
}
int Test3(){
	int n=0;
	printf("Please input num !\n");
	while(getchar()!='\n'){
		n++;
	}
	printf("%d\n",n);
	return 0;
}
int Test4(){
	int i,j;
	for(i=1;i<10;i++){
		for(j=1;j<=i;j++){
			printf("%d*%d=%-4d",j,i,i*j);
			if(i==j){
				printf("\n");
			}
		}
	}
	return 0;
}
int Test5(){
	while(1){
        malloc(1024);
    }
    return 0;
}
