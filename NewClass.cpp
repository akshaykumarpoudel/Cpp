#include<iostream>
using namespace std;

class Student
{
    private:
        string name;
        int age;
        int roll_no;
    public:
        void getStudentData()
        {
            cout<<"\nEnter Student name: ";
            cin>>name;
            cout<<"\nEnter Student Age: ";
            cin>>age;
            cout<<"\nEnter STudent roll_no: ";
            cin>>roll_no;
        }
        void putStudentData()
        {
            cout<<"Student Name = "<<name;
            cout<<"\nStudent Age = "<<age;
            cout<<"\nStudent roll_no = "<<roll_no;
        }
};

int main()
{
    Student s;
    s.getStudentData();
    s.putStudentData();
    return 0;
}