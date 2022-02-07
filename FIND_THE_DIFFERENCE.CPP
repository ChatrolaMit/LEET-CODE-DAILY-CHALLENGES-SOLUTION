#include<bits/stdc++.h>
#include<string>
#include<vector>
using namespace std;
  
class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int>arr(26 ,0);
        int s_n = s.size();
        int t_n = t.size();
        for(int i = 0 ; i<t_n ; i++){
            arr[t[i]-'a']++ ;
            
        }
        for(int i = 0 ; i<s_n ; i++){
            arr[s[i]-'a']-- ;
            
        }
        char c;
        for(int i = 0 ; i < 26  ;i++){
            if(arr[i]!=0){
                c = char(i+97);
            }
        }
        return c;
    }
};