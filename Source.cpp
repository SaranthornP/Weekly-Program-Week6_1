#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

bool Sortcheck(int arr[], int n) {
	if (arr[0] >= arr[1]) {
		for (int i = 1; i < n; i++) {
			if (arr[i - 1] < arr[i])
				return false;
		}
		return true;
	}
	else if (arr[0] <= arr[1]) {
		for (int i = 1; i < n; i++) {
			if (arr[i - 1] > arr[i])
				return false;
		}
		return true;
	}
}

int main() {
	int i = 0;
	int a[500];
	while (a[i - 1] != 999) {
		printf("Number : ");
		scanf("%d", &a[i++]);
	}
	if (Sortcheck(a, i - 1))
		printf("Is sort : YES");
	else
		printf("Is sort : NO");
	return 0;
}