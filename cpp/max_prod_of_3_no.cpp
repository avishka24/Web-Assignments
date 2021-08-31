#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int size;
    cin >> size;
    int arr[size];
    for(int i=0; i<size; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr+size);
    
    cout << max(arr[size-1]*arr[size-2]*arr[size-3], arr[0]*arr[1]*arr[size-1]) << endl;

    // if ((arr[size-1] >0 && arr[size-2]>0 && arr[size-3] >0) ||
    //    (arr[size-1] <0 && arr[size-2]<0 && arr[size-3] <0))
    // {
    //     cout << arr[size-1]*arr[size-2]*arr[size-3] << "\n";
    //     return 0;
    // }
    // else{
    //     cout << "0" << endl;
    //     return 0;
    // }

    // else{
    // int i=1;
    // while(i<=2)
    // {
    //     int previous_biggest = arr[size-(i+1)]*arr[size-(i+2)]*arr[size-(i+3)];
    //     if(previous_biggest>product)
    //     {
    //         product = previous_biggest;
    //         i++;
    //     }
    //     else
    //     {
    //         break;
    //     }
    // }
    // cout << product << "\n";
    // }
    return 0;

}