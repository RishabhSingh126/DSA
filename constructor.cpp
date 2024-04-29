#include<iostream>
using namespace std;
class student
{
    string name;
    public:
    int age;
    bool gender;

    student()                              // Default constructor
    {
        cout<<"Default Constructor"<<endl;
    }

    student(string s, int a, bool g)       // Constructor
    {
        cout<<"Parameterized constructor"<<endl;
        name=s;
        age=a;
        gender=g;
    }

    student(student &a)
    {
        cout<<"Copy constructor"<<endl;
        name=a.name;
        age=a.age;
        gender=a.gender;
    }
    bool operator == (student &a)
    {
        if(name==a.name && age==a.age && gender==a.gender)
        {
            return true;
        }
        return false;
    }
    ~student()
    {
        cout<<"Distructor called"<<endl;
    }

    void setName(string s)
    {
        name=s;
    }
    void getName(string s)
    {
        cout<<name<<endl;
    }
    void printInfo()
    {
        cout<<"Name= ";
        cout<<name<<endl;
        cout<<"Age= ";
        cout<<age<<endl;
        cout<<"Gender= ";
        cout<<gender<<endl;
    }
};
int main()
{
    student a("Urvi",20,1);
    a.printInfo();
    student b;
    student c=a;
    if(a==a)
    {
        cout<<"Same"<<endl;
    }
    else
    {
        cout<<"Not Same"<<endl;
    }
    return 0;
}