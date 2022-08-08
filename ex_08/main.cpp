#include <iostream>

using namespace std;

int main() {
	int vertical;
	int horizontal;
	cout << "Enter 2 side of the rectangle: ";
	cin >> vertical >> horizontal;

	for (int i = 1; i <= vertical; i++) {
		for (int p = 1; p <= horizontal; p++) {
			cout << "* ";
		}
		cout << '\n';
	}
}