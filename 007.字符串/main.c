#include <stdio.h>
#include <stdlib.h>

int main() {
	Test();
	Test01();
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
