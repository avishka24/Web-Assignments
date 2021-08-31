#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int nums[n], index[n], output[n];
    for(int i=0; i<n; i++){
        cin>>nums[i];
        output[i] = 0;
    }
    for(int i=0; i<n; i++){
        cin>>index[i];
    }
    for(int i=0; i<n; i++){
        int j = nums[i];
        int k = index[i];
        int x = i-1;
        while(x >= k){
            output[x+1] = output[x];
            x--;
        }
        output[x+1] = j;
    }
    for(int i=0; i<n; i++){
        cout<<output[i]<<" ";
    }
    return 0;
}