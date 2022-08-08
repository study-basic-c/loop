#include <iostream>

using namespace std;

/*
**************************************************
Viết chương trình in ra màn hình hình chữ nhật đặc 
kích thước m × n.Ví dụ : Nhập m = 5; n = 4
* * * *
* * * *
* * * *
* * * *
* * * * 
************************************************** 
*/

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