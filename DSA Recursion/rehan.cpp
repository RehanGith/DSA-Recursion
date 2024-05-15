#include <iostream>
#include <cmath>
using namespace std;

int count_digits(int n) {
	if (abs(n) < 10)
		return 1;
	else {
		return 1 + count_digits(n / 10);
	}
}

int sum(int n) {
	if (n <= 1)
		return n;
	else
		return n + sum(n - 1);
}

int main() {
	cout << count_digits(123) << endl;
}