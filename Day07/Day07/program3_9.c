#include<stdio.h>

void main() {
	char str[31]; //문자 31개를 저장할 수 있는 문자열 str변수
	printf("입력:");
	//scanf("%s", str);//문자열을 입력받아 저장할때는 주소필요x(이름자체가 주소값)
	gets(str);
	puts(str);

}