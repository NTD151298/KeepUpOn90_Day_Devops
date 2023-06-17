#include <iostream>
using namespace std;

// Một cái class để làm gì ?
// Để cho chúng ta tập như là mà mục đích chính của nó
// Tạo class Dog và đối tượng có thể ăn theo giá trị và thực hiện hoạt động của Dog

class Dog // Tạo lớp (class) Dog
{
public:
    string name; // Biến thành viên (member variable) để lưu trữ tên của con chó
    int age;     // Biến thành viên để lưu trữ tuổi của con chó

    void bark() // Phương thức (member function) để con chó kêu
    {
        cout << "Wolf, wolf, my name is " << name << " and i " << age << " year old";
    }

    Dog(string name1, int age1) // Constructor để khởi tạo đối tượng Dog với tên và tuổi
    {
        name = name1;
        age = age1;
    }
};

int main()
{
    Dog dog_1 = Dog("Rek_1", 19); // Tạo một đối tượng Dog có tên là "Rek_1" và tuổi là 19
    dog_1.bark();                 // Gọi phương thức bark() của đối tượng dog_1 để con chó kêu

    cout << "\n";

    Dog dog_2 = Dog("MailiU", 8); // Tạo một đối tượng Dog có tên là "MailiU" và tuổi là 8
    dog_2.bark();                 // Gọi phương thức bark() của đối tượng dog_2 để con chó kêu

    cout << "\n";

    Dog dog_3 = Dog("Boffu", 5); // Tạo một đối tượng Dog có tên là "Boffu" và tuổi là 5
    dog_3.bark();                // Gọi phương thức bark() của đối tượng dog_3 để con chó kêu

    cout << "\nHello world\n";
    cout << "Cai gi do de\n";
    string a = "Cai gi do";
    string b = "Lam di lam lai";
    return 0;
}
