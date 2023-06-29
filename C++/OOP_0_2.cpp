// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Devops // Lớp Devops đại diện cho một nhân viên DevOps với các thuộc tính và phương thức liên quan.

{ 
public:
    string name, jenkins, docker, python, linux_stage; // Khởi tạo tên của nhân viên,  mức độ kỹ năng jenkins, docker, python, linux của nhân viên đó được miêu ta sau đó như tốt hay kém
    int stage_jenkins, number_image, good_at_python;   // Khởi tạo số điểm được chấm của nhân viên đó về jenkin số image tạo từ docker và điểm số python của nhân viên đó 
    void Talk_about_job() // Phương thức nói để nhân viên đó nói về công việc và khả năng của anh ta vê các công cụ
    {
        cout << "\nHello my name is " << name << "\nI am an Devoper, my jenskins skill is " << jenkins << "\nI also know about Docker, my Docker is " << docker << "\nI has learned Python and verry " << python << " at it\nI " << linux_stage << " with my linux skill.\n";
    }

    void Get_feed_back() // Phương thức này là khi nhân viên đó được feed back bởi cấp trên nói về nhận xét của người đó với nhân viên và điểm số của anh ta và nhận xét chấp nhận vào công ty của người cấp trên đó
    {
        cout << "\nI have a feed back from my supervior here he judge:\nMr." << name << " Here is our final socre for you\n\tJenkins score: " << stage_jenkins << " point\n\tYou have: " << number_image << " images on your docker\n\tPython score: " << good_at_python << " point\n\tBasic Linnux understand, accepted!";
        if (stage_jenkins == 10 and good_at_python == 10)
        {
            cout << "\nSupervistor score: Overqualified!\n";
        }
        else if (stage_jenkins > 8 and good_at_python > 
        {
            cout << "\nSupervistor score: 9 point, Devops freser!\n";
        }
        else if (stage_jenkins > 6 and good_at_python > 5)
        {
            cout << "\nSupervistor score: 7 point, Devops intern!\n";
        }
        else if (stage_jenkins <= 6 or good_at_python <= 5)
        {
            cout << "\nSupervistor score: 5 point, Unaccepted!\n";
        }
        else
            cout << "\nWe are figure it out for you soon.\n";
        if (number_image > 10)
        {
            cout << "You are good at dockerize stuff.\n";
        }
        else
            cout << "Have you ever touch docker ?\n";
    }

    Devops(string name1, string jenkins1, string docker1, string python1, string linux_stage1, int stage_jenkins1, int number_image1, int good_at_python1) // Khởi tạo để có thể lưu thông tin của đối tượng khi sử dụng phương thức nhanh hơn
    {
        name = name1;
        jenkins = jenkins1;
        docker = docker1;
        python = python1;
        linux_stage = linux_stage1;
        stage_jenkins = stage_jenkins1;
        number_image = number_image1;
        good_at_python = good_at_python1;
    }
};
int main()
{

    Devops Duong = Devops("Duong", "Not got enough", "Petty good", "Normal stuff", "Can do file stuff", 9, 11, 8);
    // Tạo một đối tượng Devops với tên là "Duong" và các thông tin liên quan khác được truyền vào constructor.

    Duong.Talk_about_job();
    // Gọi phương thức Talk_about_job() của đối tượng Duong để in ra thông tin về công việc.

    Duong.Get_feed_back();
    // Gọi phương thức Get_feed_back() của đối tượng Duong để in ra phản hồi từ giám đốc.

    cout << endl;

    // Tương tự như trên, tạo và làm việc với các đối tượng Devops khác.
    Devops Bao = Devops("Bao", "Bad at it", "Normal", "Good", "Does not knows", 3, 4, 2);
    Bao.Talk_about_job();
    Bao.Get_feed_back();

    cout << endl;

    Devops Nghia = Devops("Nghia", "Normal with it", "Basic stuff", "Good", "Know alot", 6, 11, 6);
    Nghia.Talk_about_job();
    Nghia.Get_feed_back();

    cout << endl;

    Devops Sinh = Devops("Sinh", "Extreme well", "Great at it", "Good", "Professional", 10, 100, 10);
    Sinh.Talk_about_job();
    Sinh.Get_feed_back();

    return 0;
    // Trả về giá trị 0 để kết thúc chương trình.
}
