#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int tc;
    cin >> tc;
    while(tc--)
    {
    long long int size;
    cin >> size;
    long long int nums[size];
    for(long long int i=0; i<size; i++)
    {
        cin >> nums[i];
    }
    for (long long int i =0; i< size-2; i++)
    {
        int temp = nums[i];
        nums[i] = nums[i+2];
        nums[i+2] = temp;
    }
    for(long long int i=0; i<size; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

}
    return 0;

}
