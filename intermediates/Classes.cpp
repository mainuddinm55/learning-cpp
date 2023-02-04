#include<iostream>

using namespace std;

class Car
{
public:
    string name;
    int engine;

public :
    Car(){}
public:
    Car(string a,int b)
    {
        name = a;
        engine = b;
    }

    void drive()
    {
        printName();
        cout << " Car is running" << endl;
    }
private:
    void printName()
    {
        cout<<name;
    }

public:
    int getEngine();
};
int Car::getEngine()
{
    return engine;
}
int main()
{
    Car car;
    car.name = "BMW";
    car.engine = 400;
    car.drive();
    cout << car.getEngine() << endl;

    Car car2("Corola",500);
    car2.drive();
    cout << car.getEngine() << endl;

    return 0;
}
