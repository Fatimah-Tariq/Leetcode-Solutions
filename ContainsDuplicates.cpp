#include<iostream>
#include<vector>
#include<map>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> checkDuplicate = {};
        for(int i : nums){
            if(checkDuplicate.find(i) == checkDuplicate.end()){
                checkDuplicate[i] = 1;
            }
            else{
                checkDuplicate[i] += 1;
                return true;
            }
        }
        return false;
    }
};

int main(){
    Solution obj;
    vector<int> nums = {2,2,3,1};
    cout<<obj.containsDuplicate(nums);
    return 0;
}