#include<iostream>
#include <string>

using namespace std;

struct Student{
    string name;
    string dept;
    string id;
};
int main()
{
    Student std1 = {
        "Md Mainuddin",
        "CSE",
        "2020000010075"
    };
    cout << "Name is: " << std1.name << endl;
    cout << "Dept is: " << std1.dept << endl;
    cout << "ID is: " << std1.id << endl;

    int name = 10;
    int* add = &name;
    cout << "Memory address is: " << &std1 << endl;
    cout << "Memory address is: " << add << endl;
    return 0;
}
