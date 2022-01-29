//2752
#include<stdio.h>

int main()
{
	int array[3] = { 0,};
	for (int i = 0;i < 3;i++) {
		scanf_s("%d", &array[i]);
	}
	int temp=0;
	
	for (int i = 0;i < 3; i++) {
		for (int j = 0;j < 2;j++) {
			if (array[j] > array[j + 1]) {
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < 3; i++)
	{
		printf(" %d ", array[i]);
	}
}
