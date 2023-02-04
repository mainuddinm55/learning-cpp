#include<iostream>

using namespace std;

int main()
{
    int num = 20, num2 = 3, num3= 5;

    if(num > num2 && num > num3)
    {
        cout << "Largest number is : "<<num<<endl;
    }
    else if (num2 > num && num2 > num3)
    {
        cout << "Largest number is : "<<num2<<endl;
    }
    else
    {
        cout << "Largest number is : "<<num3<<endl;
    }

    int day = 4;

    switch(day)
    {
    case 1:
        cout<< "Today is : Saturday"<<endl;
        break;
    case 2:
        cout<< "Today is : Sunday"<<endl;
        break;
    case 3:
        cout<< "Today is : Monday"<<endl;
        break;
    case 4:
        cout<< "Today is : Tuesday"<<endl;
        break;
    case 5:
        cout<< "Today is : Wednesday"<<endl;
        break;
    case 6:
        cout<< "Today is : Thursday"<<endl;
        break;
    case 7:
        cout<< "Today is : Friday"<<endl;
        break;
    default:
        cout<< "Today is : N/A"<<endl;
        break;
    }
    return 0;
}
