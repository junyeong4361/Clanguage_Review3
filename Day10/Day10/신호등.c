#include <stdio.h>

void main() {
	int sign; //�Է¹��� ��ȣ�� ������ ����
	printf("��ȣ�����α׷�\n");
	printf("��ȣ�� �Է��ϼ���(������:1, �ʷϺ�:2):");
	scanf("%d", &sign);
	//���࿡ �Է¹��� ��ȣ�� �������̶��?
	if (sign == 1) {
		printf("����\n");
	}
	else if (sign == 2) {
		printf("���\n");
	}
	else {
		printf("�߸��Է��ϼ̽��ϴ�.\n");
	}
}