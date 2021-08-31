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
	int num1 =0, num2=0;
    for (int l =size-1; l>= 0; l=l-2)
    {
		num1*=10;
        num1 += nums[l];
    }
    for (int l =size-2; l>= 0; l=l-2)
    {
		num2*=10;
        num2 += nums[l];
    }	
	cout << num1 << " " << num2 << endl;
    return 0;

}