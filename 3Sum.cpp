#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<set>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> v;
        for(int i = 0; i < nums.size(); i++){
            for(int j = i + 1; j < nums.size() - 1; j++){
                if(nums[i] + nums[j] + nums[j+1] == 0){
                    vector<int> v1;
                    v1.push_back(nums[i]);
                    v1.push_back(nums[j]);
                    v1.push_back(nums[j + 1]);
                    v.push_back(v1);
                }
            }
        }
        sort(v.begin(), v.end());
        v.erase(unique(v.begin(), v.end()), v.end());
    return v;
    }

//    vector<vector<int> > threeSum(vector<int> &num) {
//         set<vector<int> >rs;
//         sort(num.begin(), num.end());
//         int i, j, k;
//         int n = num.size();
//         for (i = 0; i < n - 2; i++) {
//             j = i+1;
//             k = n-1;
//             while (j < k) {
//                 int sum = num[i] + num[j] + num[k];
//                 if (sum == 0) {
//                     vector<int> tmp(3);
//                     tmp[0] = num[i];
//                     tmp[1] = num[j];
//                     tmp[2] = num[k];
//                     rs.insert(tmp);
//                     j++;
//                     k--;
//                 } else if (sum > 0) {
//                     k--;
//                 } else if (sum < 0) {
//                     j++;
//                 }
//             }
//         }
//         vector<vector <int> >result (rs.begin(), rs.end());
//         return result;
//     }
};



int main(){
    Solution obj;
//    vector<int> nums {-1,0,1,2,-1,-4};
    vector<int> nums {0,1,1};
    vector<vector<int>> v;
    v = obj.threeSum(nums);
    for(int i = 0; i< v.size(); i++){
        for(int j = 0; j< 3; j++){
            cout<< v[i][j] << " "; 
        }
        cout<< endl;
    }
    return 0;
}