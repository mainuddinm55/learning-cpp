#include<iostream>

using namespace std;

int main()
{
    int num = 10;
    while(num > 0)
    {
        cout<<num << "\t";
        num--;
    }
    cout<<endl;

    do
    {
        cout<<num << "\t";
        num ++;

    }
    while(num < 10);
    cout<<endl;
    for(int i = 0 ; i < 10; i++)
    {
        cout<<i<<"\t";
    }
    cout<<endl;
    int nums[] = {10,20,30,50,5,70};
    for(int i:nums)
    {
        cout<<i << "\t";
    }
    return 0;
}
