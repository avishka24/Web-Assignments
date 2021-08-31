#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int size;
    cin >> size;
    int nums[size*2];
    for(int i=0; i<size*2; i++)
    {
        cin >> nums[i];
    }
    for (int l =0; l< size; l++)
    {
        cout << nums[l] << " " << nums[l+(size)] << " ";
    }
    return 0;

}