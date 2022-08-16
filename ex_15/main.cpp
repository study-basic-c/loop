#include <iostream>

using namespace std;

//Viết chương trình nhập vào hai số nguyên dương a và b.
//Tìm ước số chung lớn nhất và bội số chung nhỏ nhất của a và b.
int BCNN(int iA, int iB) {
	int i;
	i = iA;
	while (true) {
		if ((i % iA == 0) && (i % iB == 0)) {
			return i;
		}
		i++;
	}
}

int UCLN(int iA, int iB) {
	int i;
	i = iA;
	while (true) {
		if ((iA % i == 0) && (iB % i == 0)) {
			return i;
		}
		i--;
	}
}

int main() {
	int a;
	int b;
	cout << "Enter a, b: ";
	cin >> a >> b;
	
	cout << "BCNN: " << BCNN(a, b) << endl;
	cout << "UCLN: " << UCLN(a, b);
	
	return 0;
}