#include <stdio.h>

void main() {
	int a;

	printf("���� �Է�:");
	scanf("%d", &a);
	if (a % 2 == 0) {
		printf("%d�� ¦���Դϴ�.", a); //������� 1���϶��� {} �� ����ǥ��x
	}
	else {
		printf("%d�� Ȧ���Դϴ�.", a);
	}
}