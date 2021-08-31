#include <iostream>
using namespace std;

int main() {
    long long n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long multiplication=1;
    for(int i=0;i<n;i++){
        multiplication=multiplication*arr[i];
    }
    
    for (int i = 0; i < n; i++) {
        cout<<multiplication/arr[i]<<" ";
    }
}