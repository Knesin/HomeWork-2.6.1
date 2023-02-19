#include <iostream>
#include "my_math.h"

int my_add(const int& a, const int& b) {
	return a + b;
}

int my_sub(const int& a, const int& b) {
	return a - b;
}
int my_mult(const int& a, const int& b) {
	return a * b;
}
double my_div(const int& a, const int& b) {
	return static_cast<double>(a)/ b;
}
int my_pow(const int& a, const int& b) {
	int tmp = a;
	for (int i = 1; i < b; i++) {
		tmp *= a;
	}
	return tmp;
}
