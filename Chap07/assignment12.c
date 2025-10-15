//assignment12 10월15일 정재범

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void pa07_12() {
	int i, select, cnt;
	int arr[10] = { 0 };

	while (arr[9] == 0) {
		printf("현재 좌석: [");
		for (i = 0; i < 10; i++) {
			if (arr[i] == 0) {
				printf(" O");
			}
			else {
				printf(" X");
			}
		}
		printf(" ]\n예매할 좌석수? ");
		scanf("%d", &select);
		for (i = 0; i < 10; i++) {
			if (arr[i] == 0 && select > 0) {
				arr[i] = 1;
				printf("%d ", i + 1);
				select--;
			}
		}
		printf("번 좌석을 예매했습니다.\n");
	}

