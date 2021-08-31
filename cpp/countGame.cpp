#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int size, divider;
    cin >> size >> divider;
    int arr[size];
    int sum =0;
    for(int i=0; i<size; i++)
    {
        cin >> arr[i];
        sum += arr[i]/divider;
        if(arr[i]%divider != 0)
        sum++;
    }
    cout << sum << "\n";

    return 0;

}