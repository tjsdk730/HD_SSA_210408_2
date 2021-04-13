#include<stdio.h>
void main() {

	for (int a = 0; a < 5; a++) {
		for (int b = 0; b < 5 - a; b++) {
			printf(" ");
		}
		for (int c = 0; c <= a; c++) {
			printf("*");
		}       printf("\n");
	}               fgetc(stdin);

}