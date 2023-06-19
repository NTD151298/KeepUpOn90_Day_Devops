#include <iostream>
using namespace std;

int main() // Mục tiêu đó là kiểm tra số a nhập có > < = 0 không với n lần thử
{
    cout << "Hello world\n"; // In ra Hello world

    int n;                 // gán n lần thử là một interger
    cout << "\nNhap n = "; // in nhập n
    cin >> n;              // đầu vào n
    if (n < 0)             // kiểm tra nếu n < 0 thì n âm thành n dương
    {
        n = -n; // n âm -> n dương
    }

    for (int i = 0; i < n; i++)
    {                          // vòng lặp  giá trị a
        int a = 0;             // gán giá trị a là interger không có value
        cout << "\nNhap a = "; // in ra
        cin >> a;              // đầu vào tại vị trí a
        if (a > 0)
        {
            cout << "a = " << a << " > 0. con lai ";
            cout << n - i - 1 << " lan"; // in ra giá trị a lớn hơn 0
        }
        else if (a == 0)
        {
            cout << "a = " << a << " = 0. con lai ";
            cout << n - i - 1 << " lan"; // in ra giá trị a bằng 0
        }
        else
        {
            cout << "a = " << a << " < 0. con lai ";
            cout << n - i - 1 << " lan"; // in ra giá trị a nhỏ hơn 0
        }
    }
    return 0;
}