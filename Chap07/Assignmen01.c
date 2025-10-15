//assignment01 10월15일 정재범

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int equidistant(int term, int common_difference) {
	return term + common_difference;
}


int pa07_01(void) {
	int i, term, common_difference;
	int arr[10];

	printf("첫 번째 항? ");
	scanf("%d", &term);
	printf("공차? ");
	scanf("%d", &common_difference);

	printf("등차수열:");
	arr[0] = term;
	printf(" %d", arr[0]);
	for (i = 1; i < 10; i++) {
		arr[i] = equidistant(arr[i - 1], common_difference);
		printf(" %d", arr[i]);
	}
}