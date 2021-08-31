#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int size, newsize =0, last_input = -99, waste;
    cin >> size;
    int nums[size];
    for(int i=0; i<size; i++)
    {
        cin >> waste;
		if(waste != last_input)
		{
			nums[newsize++] = waste;
			last_input = waste;
		}
    }
	cout << newsize << endl;
    for (int l =0; l< newsize; l++)
    {
        cout << nums[l] << " ";
    }
    return 0;

}