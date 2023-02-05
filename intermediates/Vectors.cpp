#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>

using namespace std;

int main()
{
    vector<int> arrs;
    for(auto i = 0; i < 10; i++){
        arrs.push_back(i*i);
    }

    for(int i : arrs){
    cout << i << "\t";
    }
    cout << endl;
    cout << arrs.front() << "\t";
    cout << arrs.back() << "\t";
    cout << arrs.at(4) << "\t";
    cout << endl;
    priority_queue<int> pq;

    for(int i = 2; i < 5; i++)
    {
        pq.push(i*2);
    }
    for(int i = 20; i > 10; i--)
    {
        pq.push(i);
    }
    while(!pq.empty()){
        cout << pq.top() << "\t";
        pq.pop();
    }
    return 0;
}
