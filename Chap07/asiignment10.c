//assignment10 10월15일 정재범

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void pa07_06() {
	int i;
	float arr[10] = { 1.3, 4.1, 3.3, 7.4, 6.5, 4.9, 8.1, 4.6, 5.1, 2.3 };
	printf("¹è¿­:");
	for (i = 0; i < 10; i++) {
		printf(" %.1f", arr[i]);
	}
	printf("\n¿ª¼ø:");
	for (i = 9; i >= 0; i--) {
		printf(" %.1f", arr[i]);
	}
}