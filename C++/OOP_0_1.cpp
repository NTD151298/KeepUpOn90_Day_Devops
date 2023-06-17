#include <iostream>
using namespace std;

class Man
{
public:
    string name;              // Tên của người đàn ông
    int age;                  // Tuổi của người đàn ông
    string job;               // Nghề nghiệp của người đàn ông
    void talk_about_ur_self() // Phương thức để nói về bản thân
    {
        cout << "My name is " << name << ", i am " << age << " and my job is " << job << ", thank you !\n";
    }
};

class Math
{
public:
    int a, b, c; // Các biến a, b, c dùng trong phép tính
    void sum()   // Phương thức tính tổng
    {
        c = a + b;                                     // Tính tổng a + b và gán kết quả vào c
        cout << a << " + " << b << " = " << c << endl; // In ra màn hình phép tính và kết quả
    }
};

int main()
{
    cout << "Hello new oop\n"; // In ra màn hình chuỗi "Hello new oop"

    Man man1;
    man1.age = 24;             // Gán giá trị 24 cho thuộc tính "age" của đối tượng man1
    man1.job = "Devops";       // Gán giá trị "Devops" cho thuộc tính "job" của đối tượng man1
    man1.name = "Duong";       // Gán giá trị "Duong" cho thuộc tính "name" của đối tượng man1
    man1.talk_about_ur_self(); // Gọi phương thức "talk_about_ur_self" của đối tượng man1 để nói về bản thân

    Man man2;
    man2.age = 25;             // Gán giá trị 25 cho thuộc tính "age" của đối tượng man2
    man2.job = "Tester";       // Gán giá trị "Tester" cho thuộc tính "job" của đối tượng man2
    man2.name = "Hoang";       // Gán giá trị "Hoang" cho thuộc tính "name" của đối tượng man2
    man2.talk_about_ur_self(); // Gọi phương thức "talk_about_ur_self" của đối tượng man2 để nói về bản thân

    Math Sum_of_2_perdon_age;
    Sum_of_2_perdon_age.a = man1.age; // Gán giá trị thuộc tính "age" của đối tượng man1 cho biến "a" của đối tượng Sum_of_2_perdon_age
    Sum_of_2_perdon_age.b = man2.age; // Gán giá trị thuộc tính "age" của đối tượng man2 cho biến "b" của đối tượng Sum_of_2_perdon_age
    cout << "Sum age of " << man1.name << " with age " << man1.age << " + " << man2.name << " with age " << man2.age << " is: ";
    Sum_of_2_perdon_age.sum(); // Gọi phương thức "sum" của đối tượng Sum_of_2_perdon_age để tính tổng

    Math Random_Sum;
    Random_Sum.a = 10; // Gán giá trị 10 cho biến "a" của đối tượng Random_Sum
    Random_Sum.b = 20; // Gán giá trị 20 cho biến "b" của đối tượng Random_Sum
    Random_Sum.sum();  // Gọi phương thức "sum" của đối tượng Random_Sum để tính tổng

    Math Random_Sum_2;
    Random_Sum_2.a = 10 + 20; // Gán giá trị 10 + 20 (30) cho biến "a" của đối tượng Random_Sum_2
    for (int i = 0; i < 10; i++)
    {
        Random_Sum_2.b = Random_Sum_2.a + Random_Sum_2.b; // Gán giá trị tổng của biến "a" và biến "b" cho biến "b" của đối tượng Random_Sum_2
    }
    Random_Sum_2.sum(); // Gọi phương thức "sum" của đối tượng Random_Sum_2 để tính tổng

    return 0;
}