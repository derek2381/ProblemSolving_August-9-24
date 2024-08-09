// problem link
// https://codeforces.com/problemset/problem/1716/A

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){

            int n;
            cin >> n;
            
            if(n == 1){
                cout << 2 << endl;
            }else if(n%3 == 1 || n%3 == 2){
                cout << (n/3)+1 << endl;
            }else{
                cout << n/3 << endl;
            }
    }
}