#include "stdafx.h"
#include <iostream>
#include <sstream>

using namespace std;

bool read_numbers(int * array) {
	char param;
	string stroka;
	getline(cin, stroka);
	istringstream stream(stroka);
	for (unsigned int i = 0; i < 10; i++) {
		if (!(stream >> array[i])) {
			return false;
		}
	}
	if (stream >> param) {
		return false;
	}
	return true;
}
int schetchik(int * array) {
	int sum = 0;
	for (unsigned i = 0; i < 10; i++) {
		for (unsigned j = i; j < 10; j++){
			if (array[i] > array[j]) {
				sum++;
			}
		}
	}
	return sum;
}
int main()
{
	int array[10];
	if (!(read_numbers(array))) {
		cout << "An error has occurred while reading numbers" << endl;
		return 0;
	}
	cout << schetchik(array) << endl;
    return 0;
}
