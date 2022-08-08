#include <iostream>

using namespace std;

/**************************************************
Viết chương trình in ra màn hình tam giác vuông cân
đặc có độ cao h. Ví dụ: Nhập h = 4
*
* *
* * *
* * * *
****************************************************
*/

int main() {
	int side;
	cout << "Enter side of the isosceles right triangle: ";
	cin >> side;

	for (int i = 1; i <= side; i++) {
		for (int p = 1; p <= i; p++) {
			cout << "* ";
		}
		cout << '\n';
	}
	return 0;
}