#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int temp = 0, i, j, n, a[100]; // Khai báo các biến temp, i, j, n, a để sử dụng trong chương trình
    cin >> n;                      // Nhập số phần tử của mảng từ người dùng

    for (i = 0; i < n; i++) // Vòng lặp để in ra màn hình các giá trị của mảng ban đầu
    {
        cin >> a[i]; // Nhập giá trị từng phần tử của mảng từ người dùng
    }

    cout << "\n";
    cout << "Input list: \n";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " "; // In ra màn hình các giá trị của mảng ban đầu
    }

    for (i = n; i > 0; i--) // Vòng lặp để sắp xếp mảng theo thứ tự tăng dần
    {
        for (j = 1; j < i; j++) // Vòng lặp để duyệt qua từng phần tử của mảng và so sánh
        {
            if (a[j] - a[j - 1] < 0) // Kiểm tra nếu giá trị phần tử hiện tại nhỏ hơn giá trị phần tử trước đó
            {
                temp = a[j - 1]; // Hoán đổi vị trí của hai phần tử để sắp xếp
                a[j - 1] = a[j];
                a[j] = temp;
            }
        }
    }

    cout << "\n\n";
    cout << "Output Bubble sort: \n";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " "; // In ra màn hình các giá trị của mảng đã được sắp xếp
    }

    cout << "\n\n";
    return 0;
}
