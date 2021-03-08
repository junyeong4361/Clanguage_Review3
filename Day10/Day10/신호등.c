#include <stdio.h>

void main() {
	int sign; //입력받은 신호를 저장할 변수
	printf("신호등프로그램\n");
	printf("신호를 입력하세요(빨간불:1, 초록불:2):");
	scanf("%d", &sign);
	//만약에 입력받은 신호가 빨간불이라면?
	if (sign == 1) {
		printf("정지\n");
	}
	else if (sign == 2) {
		printf("출발\n");
	}
	else {
		printf("잘못입력하셨습니다.\n");
	}
}