// problem link
// https://www.codechef.com/problems/S10E?tab=statement


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    vector<int> arr(n);
	    int min;
	    
	    for(int i = 0; i <n;i++){
	        cin >> arr[i];
	    }
	    min = arr[0];
	    int count = 1,s = 0;
	    
	    for(int i = 0; i < 5;i++){
	        if(arr[i] < min){
	            count++;
	            min = arr[i];
	        }
	    }
	    
	    
	    for(int i = 5;i < n;i++){
	        min = arr[s];
	        for(int j = s;j <=i;j++){
	            if(min  arr[j]){
	                min = arr[j];
	            }
	        }
	        if(min == arr[i]){
	            count++;
	        }
	        s++;
	    }
	    
	    cout << count << endl;
	    
	    
	}
	return 0;
}
