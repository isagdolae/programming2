//assignment04 10월15일 정재범

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void pa07_04() {
	int arr[10] = { 12, 34, 56, 78 ,99, 26, 31, 48, 1, 35 };
	int max, min, max_idx, min_idx;
	int i;

	max = arr[0];
	min = arr[0];
	printf("배열: ");
	for (i = 0; i < 10; i++) {
		printf(" %d", arr[i]);
		if (max < arr[i])	max = arr[i], max_idx = i;
		if (min > arr[i])	min = arr[i], min_idx = i;
	}
	printf("\n최대값: 인덱스=%d 값=%d", max_idx, max);
	printf("\n최소값: 인덱스=%d 값=%d", min_idx, min);