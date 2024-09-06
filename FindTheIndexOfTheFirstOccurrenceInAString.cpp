#include<iostream>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.size() < needle.size()){
            return -1;
        }
        for(int i = 0; i < haystack.size(); i++){
            if(haystack.substr(i, needle.size()) == needle){
                return i;
            }
        }
        return -1;
    }
};

int main(){
    Solution obj;
    //string haystack = "leetcode", needle = "leeto";
    string haystack = "sadbutsad", needle = "sad";
    cout<< obj.strStr(haystack, needle);
    return 0;
}