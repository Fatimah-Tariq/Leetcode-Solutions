#include<iostream>
using namespace std;

class Solution {
public:
    int titleToNumber(string columnTitle) {
        int num = 0;
        
        for(int i = 0; i< columnTitle.size(); i++){
            num = (num * 26 + (int(columnTitle[i]) - 64));         
        }
        return num;
    }
};


int main(){
    Solution obj;
    string columnTitle = "ZY";
    cout << obj.titleToNumber(columnTitle);
    return 0;
}
