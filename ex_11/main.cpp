#include <iostream>

using namespace std;

/***************************************************
Viết chương trình in ra màn hình tam giác cân rỗng *
có độ cao h. Ví dụ: Nhập h = 4					   * 					
*												   *
* *                                                * 
*   *                                              *
* * * *											   * 
**************************************************** 
*/

int main() {
	int side;
	cout << "Enter side of the isosceles triangle: ";
	cin >> side;

	for (int i = 1; i <= side; i++) {
		for (int p = 1; p <= i; p++) {
			if ((p == 1) || (p == i) || (i == side)) {
				cout << "* ";
			}
			else {
				cout << "  ";
			}
		}
		cout << '\n';
	}
	
	return 0;
}