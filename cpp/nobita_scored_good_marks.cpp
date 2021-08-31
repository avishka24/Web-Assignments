#include <bits/stdc++.h>
using namespace std;


int main(){
    int tc;
    cin >> tc;
    while(tc--)
    {
        int candies, friends;
        cin >> candies >> friends;
        int remainder = candies%friends;
        cout << min(remainder, (friends-remainder)) << "\n";
    }

return 0;}
