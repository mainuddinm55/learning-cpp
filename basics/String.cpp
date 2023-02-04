#include<iostream>

using namespace std;

int main ()
{
    string name = "Md Mainuddin";
    cout<< "My name is : "<<name << endl;
    cout << name + " Pathan " << endl;
    cout << name.size() << endl;

    name.append(" Pathan");
    cout<< name << endl;
    cout<<"length of name: " <<  name.length() << endl;

    /*
    string input;
    cout << "Enter single name: "<<endl;
    cin >> input;
    cout<< "Given name: " << input<<endl;
    */
    string fullName;
    cout<< "Enter full name: ";
    getline(cin,fullName);
    cout << "Full name is: "<<fullName << endl;

    return 0;
}
