#include<iostream>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        bool notUnique = false;
        for(int i = 0; i < s.size(); i++){
            notUnique = false;
            for(int j = 0; j< s.size(); j++){
                if(s[i] == s[j] && i != j){
                    notUnique = true;
                    break;
                }
            }
            if(!notUnique){
                return i;
            }
        }
        return -1;
    }
};

int main(){
    Solution obj;
    string s = "leetcode";
//    string s = "loveleetcode";
//    string s = "aabb";
    cout << obj.firstUniqChar(s);

    return 0;
}