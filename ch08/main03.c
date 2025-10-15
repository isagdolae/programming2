//문제: 배열

#include <stdio.h>

int main()
{
	int array[10] = { 44, 32, 65, 23, 45, 76, 77, 89, 23, 45 };
	int* P = array;

	printf("배열: ");
	for (int i = 0; i < 10; i++) {
		printf("%d ", *(P + i));
	}
	printf("\n");
	return 0;
}

	
