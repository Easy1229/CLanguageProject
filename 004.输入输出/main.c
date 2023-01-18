#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int main() {
	
	char c='A';
	printf("%d\n",c);
	printf("%c\n",c); 
	char str[]="www.bing.com";
	printf("%s\n",str);
	//Sleep(5000);
	int a1=20, a2=345, a3=700, a4=22;
    int b1=56720, b2=9999, b3=20098, b4=2;
    int c1=233, c2=205, c3=1, c4=6666;
    int d1=34, d2=0, d3=23, d4=23006783;
    printf("%-9d %-9d %-9d %-9d\n", a1, a2, a3, a4);
    printf("%-9d %-9d %-9d %-9d\n", b1, b2, b3, b4);
    printf("%-9d %-9d %-9d %-9d\n", c1, c2, c3, c4);
    printf("%-9d %-9d %-9d %-9d\n", d1, d2, d3, d4);
    
    char input[30];
    scanf("%s",&input);
    printf("%s\n",input);
    printf("%p\n",input);
    
    
    int a,b=0;
    scanf("%d is bigger than %d", &a, &b);
    printf("a-b=%d\n", a-b);
    
	
	return 0;
}
