#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool canJump(std::vector<int>& nums) {
        int max_reach = 0; // maximum index that can be reached so far
        for (int i = 0; i < nums.size(); ++i) {
            if (i > max_reach) { // if the current index cannot be reached
                return false;
            }
            max_reach = std::max(max_reach, i + nums[i]); // update the maximum index that can be reached
            if (max_reach >= nums.size() - 1) { // if the last index can be reached
                return true;
            }
        }
        return false; // if the last index cannot be reached
    }
};

int main(){
    Solution obj;
//   vector<int> nums = {2,3,1,1,4};
//    vector<int> nums = {2,0};
//    vector<int> nums = {3,2,1,0,4};
//    vector<int> nums = {0};
//    vector<int> nums = {1,2,3};
//    vector<int> nums = {1,1,1,0};
//    vector<int> nums = {0, 1};
//    vector<int> nums = {1};
//    vector<int> nums = {2,0,0};
//    vector<int> nums = {3,0,8,2,0,0,1};
//    vector<int> nums = {1,1,2,2,0,1,1};
    vector<int> nums = {5,9,3,2,1,0,2,3,3,1,0,0};

    cout<< obj.canJump(nums);
    return 0;
}