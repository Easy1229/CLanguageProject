#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	//Test(); 
	//Test01();
	//Test02();
	Test04();
	return 0;
}
int Test(){
	int nums[]={1,2,3,4,5,6,7,8,9,0};
	char string[]="fsfsdkjfhskfsfsdf";
	int length=strlen(string);
	printf("%d\n",length);
	return 0;
}
int Test01(){
	int i,j;
	int average;
	int sum;
	int v[3];
	int score[5][3]={{80,75,92},{61,65,71},
		{59,63,70},{85,87,90},{76,77,85}};
		
	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
		sum+=score[j][i];
		}
		v[i]=sum/5;
		sum=0;
	} 
	average=(v[0]+v[1]+v[2])/3;
	printf("Math: %d\nC Languag: %d\nEnglish: %d\n", v[0], v[1], v[2]);
	printf("Total: %d\n", average);
	return 0;
}
int Test02(){
	int max;
	int nums[5];
	printf("Please input a number !");
	int j;
	for(j=0;j<5;j++){
		scanf("%d",&nums[j]);
	} 
	
	for(j=0;j<5;j++){
		printf("%d ",nums[j]);
	} 
	int length=sizeof(nums)/sizeof(nums[0]);
	int i;
	max=nums[0];
	for(i=0;i<length;i++){
		if(nums[i]>max){
			max=nums[i];
		}
	}
	printf("%d\n",max);
	return 0;
}
int Test03(){
	int nums[5];
    int i;
   
    //从控制台读取用户输入
    for(i=0; i<5; i++){
        scanf("%d", &nums[i]);  //注意取地址符 &，不要遗忘哦
    }
   
    //依次输出数组元素
    for(i=0; i<5; i++){
        printf("%d ", nums[i]);
    }
    return 0;
}
int Test04(){
	char str[30];
	char c;
	int i;
	for(c=65,i=0;c<=90;c++,i++){
		str[i]=c;
	}
	printf("%s\n",str);
	return 0;
}

