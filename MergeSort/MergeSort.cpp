#include <iostream>

#include "mergesort.h"

int main() {

	int a1[7] = { 9,8,6,3,10,11,31 };

	int* ptr = mergeSort(a1, 7);

	for (int i = 0; i < 7; i++) {
		std::cout << ptr[i] << std::endl;
	}
	int a = 0;
	std::cin >> a;

	return 0;
}