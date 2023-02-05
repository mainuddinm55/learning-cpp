#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    int nums[] = {4,5,6,3,9,20,10,12,11,8};
    sort(begin(nums),end(nums));
    for(int i : nums )
    {
        cout << i << "\t";
    }
    cout << endl << begin(nums) << endl << end(nums) << endl;

    bool isFound = binary_search(begin(nums),end(nums),16);
    cout << "Element found: " << isFound << endl;
    cout << *max_element(begin(nums),end(nums)) << endl;
    cout << *min_element(begin(nums),end(nums)) << endl;

    return 0;
}
