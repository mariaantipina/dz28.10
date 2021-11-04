#include <iostream>
#include <random>
#include <ctime>
#include <stdlib.h>
using namespace std;
void ar1(int a[], const int size) {
	int x;
	cin >> a[0] >> x;
	for (int i = 1; i < size; i++) {
		a[i] = a[i - 1] + x;

	}
}
void print_array1(int a[], const int size) {
	for (int i = 0; i < size - 1; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}
int random_number(int n) {
	return rand() % n + 1;
}
void print_array(int array[], int size) {
	for (int i = 0; i < size; i++) {
		cout << array[i] << " ";
	}
}
void Scan_array3(int array[], int size) {
	for (int i = 0; i < size; i++) array[i] = rand() % 1001 + 1000;
}

void Print_array3(int array[], int size) {
	int c = 0;
	for (int i = 0; i < size; i++) {
		if ((array[i] / 10) % 2 == 0) { c++; };
		cout << array[i] << " ";
	}
	cout << c;
}
void random_array(int array[], int size) {
	for (int i = 0; i < size; i++) {
		array[i] = random_number(10);
		int tmp = array[0];
	}
}


int main() {
	setlocale(LC_ALL, "Rus");
	int const n = 10;
	int a[n];
	ar1(a, n);
	cout << "guihgdbdg";
	cout << " 1 задание:" << endl;
	print_array1(a, n);
	int array[n];
	srand(time(0));
	cout << endl << " 2 задание:" << endl;
	Scan_array3(array, n);
	Print_array3(array, n);
	cout << endl << " 3 задание:";
	random_array(a, n);
	print_array(a, n);
	return 0;
}