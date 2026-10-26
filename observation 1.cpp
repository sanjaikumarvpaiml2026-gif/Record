#include <iostream>
#include <string>
using namespace std;
class student
{
    private:
    int rollno;
    string name;
    public:
    student(int r,string n)
    {
        rollno=r;
        name=n;
        cout<<"Student object created"<<endl;
    }
    void display()
    {
        cout<<"Rollno:"<<rollno<<endl;
        cout<<"Name:"<<name<<endl;
    }
    ~student()
    {
         cout<<"Student object destroyed"<<endl;
    }

    

};

int main() {
    student s(101,"ARUN");
    s.display();
    return 0;
}