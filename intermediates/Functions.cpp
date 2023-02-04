#include<iostream>

using namespace std;

int add(int num1, int num2)
{
    return num1 + num2;
}

int add(int num1, int num2, int num3)
{
    return num1 + num2 + num3;
}

void printMsg(string msg)
{
    cout << msg << endl;
}

void printDetails(string name = "", string id = "")
{
    cout << "Student name: "<<name << ", and ID: " <<id<<endl;
}

int main ()
{

    int num1 = 34, num2 = 44, num3 = 443;;
    int result = add (num1, num2);
    int result2 = add (num1, num2, num3);
    cout << "Output from function two params: " << result << endl;
    cout << "Output from function three params: " << result2 << endl;
    printMsg("Call from print msg function");
    printMsg("Call from print msg function");
    printDetails("MD Mainuddin","2020000010075");
    printDetails();
    return 0;
}
