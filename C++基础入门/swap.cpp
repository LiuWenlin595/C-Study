#include "swap.h"

void swap(int a, int b) {
	cout << a << " " << b << endl;
	int tmp = a;
	a = b;
	b = tmp;
	cout << a << " " << b << endl;
}