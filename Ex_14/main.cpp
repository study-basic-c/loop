#include <iostream>

using namespace std;

bool PrNumber(int number) {
	for (int i = 2; i < number; i++) {
		if (number % i == 0) {
			return false;
		}
	}
	
	return true;
}

int main() {
	int n;
	cout << "Enter n: ";
	cin >> n;

	for (int p = 2; p <= n; p++) {
		if (PrNumber(p)) {
			cout << p << ' ';
		}
	}

	return 0;
}