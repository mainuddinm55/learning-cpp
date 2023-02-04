#include<iostream>

using namespace std;

class Animal
{
private:
    string name;

public:
    void setName(string s)
    {
        name = s;
    }
public:
    string getName()
    {
        return name;
    }
public:
    void eat()
    {
        cout << "Animal eating" << endl;
    }
};

class Dog: public Animal
{
public:
    Dog()
    {

    }

    void eat()
    {
        cout << "Dog eating" << endl;
    }
};

int main()
{
    Dog dog;
    dog.setName("Tom");
    dog.eat();
    return 0;
}
