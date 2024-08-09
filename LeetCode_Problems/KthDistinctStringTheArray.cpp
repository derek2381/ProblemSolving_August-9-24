// problem link
// https://leetcode.com/problems/kth-distinct-string-in-an-array/description/


class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        string str = "";

        map<string, int> mp;
        for(string i : arr){
            mp[i]++;
        }

        int count = 0;
        for(string i : arr){
            if(mp[i] == 1){
                count++;
            }

            if(count == k){
                str = i;
                break;
            }
        }

        return str;
    }
};