//assignment12 10��15�� �����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void pa07_12() {
	int i, select, cnt;
	int arr[10] = { 0 };

	while (arr[9] == 0) {
		printf("���� �¼�: [");
		for (i = 0; i < 10; i++) {
			if (arr[i] == 0) {
				printf(" O");
			}
			else {
				printf(" X");
			}
		}
		printf(" ]\n������ �¼���? ");
		scanf("%d", &select);
		for (i = 0; i < 10; i++) {
			if (arr[i] == 0 && select > 0) {
				arr[i] = 1;
				printf("%d ", i + 1);
				select--;
			}
		}
		printf("�� �¼��� �����߽��ϴ�.\n");
	}

