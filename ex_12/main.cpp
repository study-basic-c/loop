#include <iostream>

using namespace std;

/*************************************************
Viết chương trình in ra màn hình tam giác cân đặc 
có độ cao h. Ví dụ: Nhập h = 4
      *
    * * *
  * * * * *
* * * * * * *
**************************************************
*/

int main() {
    int height;
    cout << "Enter height of the isosceles triangle: ";
    cin >> height;

    int side;
    side = height * 2 - 1;
    
    for (int i = 1; i <= height; i++) {
        for (int p = 1; p <= side; p++) {
            if ((p <= height - i) || (height + i <= p)) {
                cout << "  ";
            }
            else {
                cout << "* ";
            }
        }
        cout << '\n';
    }
    
    return 0;
}