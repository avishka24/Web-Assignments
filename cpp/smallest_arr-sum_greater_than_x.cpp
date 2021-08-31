#include<iostream>
#include <climits>
using namespace std;
int main(){
		int n,x;
		cin>>n>>x;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
          int current=0, min=n+1, start = 0, end = 0;
         while (end < n) {
        while (current <= x && end < n)
        {
            current += arr[end++];
        }
        while (current>x&&start<n) {
            if (end-start<min)
                min=end-start;
            current -= arr[start++];
        }
    }
		cout<<min<<endl;
	return 0;
}