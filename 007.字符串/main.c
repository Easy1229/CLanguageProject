#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	Test();
	Test01();
	Test02();
	Test03();
	Test04();
	return 0;
}
int Test(){
	char str[26];
	char c;
	int i;
	for(c=65,i=0;c<91;i++,c++){
		str[i]=c;
	} 
	printf("%s\n",str);
}
int Test01(){
	char str[] = "http://c.biancheng.net";
    printf("%s\n", str);
    printf("%s\n", "http://c.biancheng.net");
    puts(str); 
    puts("http://c.biancheng.net");
}
int Test02(){
	char str1[]="www.bing.com";
	char str2[]="www";
	strcat(str1,str2);
	puts(str1);
}
int Test03(){
	char str1[50] = "¡¶CÓïÑÔ±ä¹ÖÊŞ¡·";
    char str2[50] = "http://c.biancheng.net/cpp/u/jiaocheng/";
    strcpy(str1, str2);
    printf("str1: %s\n", str1);	
}
int Test04(){
	char a[] = "aBcDeF";
    char b[] = "AbCdEf";
    char c[] = "aacdef";
    char d[] = "aBcDeF";
    printf("a VS b: %d\n", strcmp(a, b));
    printf("a VS c: %d\n", strcmp(a, c));
    printf("a VS d: %d\n", strcmp(a, d));
}
