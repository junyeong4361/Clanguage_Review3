#include <stdio.h>

void main() {

	int a = 10, b = 10, c, d;
	c = --a; //������ a=9
	d = a--; //������ d=9, a���� 1���� a=8
	printf("a:%d, b:%d, c:%d, d:%d\n", a, b, c, d);
}