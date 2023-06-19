// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Devops
{
public:
    string name, jenkins, docker, python, linux_stage;
    int stage_jenkins, number_image, good_at_python;

    void Talk_about_job()
    {
        cout << "\nHello my name is " << name << "\nI am an Devoper, my jenskins skill is " << jenkins << "\nI also know about Docker, my Docker is " << docker << "\nI has learned Python and verry " << python << " at it\nI " << linux_stage << " with my linux skill.\n";
    }

    void Get_feed_back()
    {
        cout << "\nI have a feed back from my supervior here he judge:\nMr." << name << " Here is our final socre for you\n\tJenkins score: " << stage_jenkins << " point\n\tYou have: " << number_image << " images on your docker\n\tPython score: " << good_at_python << " point\n\tBasic Linnux understand, accepted!";
        if (stage_jenkins == 10 and good_at_python == 10)
        {
            cout << "\nSupervistor score: Overqualified!\n";
        }
        else if (stage_jenkins > 8 and good_at_python > 5)
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

    Devops(string name1, string jenkins1, string docker1, string python1,
           string linux_stage1, int stage_jenkins1, int number_image1, int good_at_python1)
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
    std::cout << "Hello world!\n";
    int a = 10, b = 20, c;
    c = a + b;
    cout << "c = " << c << endl;
    cout << endl;
    Devops Duong = Devops("Duong", "Not got enough", "Petty good", "Normal stuff", "Can do file stuff", 9, 11, 8);
    Duong.Talk_about_job();
    Duong.Get_feed_back();

    cout << endl;

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
}