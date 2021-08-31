#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int size;
    cin >> size;
    int nums[size];
    for(int i=0; i<size; i++)
    {
        cin >> nums[i];
    }
    sort(nums, nums+size);
    for (int l =0; l< size; l++)
    {
        cout << nums[l] << " ";
    }
    return 0;

}