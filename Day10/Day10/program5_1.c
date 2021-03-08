#include <stdio.h>

void main() {
	int a;

	printf("정수 입력:");
	scanf("%d", &a);
	if (a % 2 == 0) {
		printf("%d는 짝수입니다.", a); //다음명령 1줄일때는 {} 로 범위표시x
	}
	else {
		printf("%d는 홀수입니다.", a);
	}
}