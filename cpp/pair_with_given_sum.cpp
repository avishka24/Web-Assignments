#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int size,sum;
    cin >> size;
    int nums[size];
    for(int i=0; i<size; i++)
    {
        cin >> nums[i];
    }
	cin >> sum;
	sort(nums, nums+size);
    for (int i =0; i< size-1; i++)
    {
        for(int j = i+1;  j< size; j++)
		{
			if(nums[i]+nums[j] == sum)
			{
				cout << nums[i] << " " << nums[j] << endl;
			}
		}
    }
    return 0;

}