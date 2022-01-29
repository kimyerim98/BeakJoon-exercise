//2750
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int arr[1000] = { 0, };
	int n=0;
	scanf_s("%d", &n);
	for (int i = 0;i <= n;i++) {
		scanf_s("%d", &arr[i]);
	}
	int temp;
	for (int i = 0;i < n; i++) {
		for (int j = 0;j < n-1;j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		printf(" %d\n ", arr[i]);
	}
}