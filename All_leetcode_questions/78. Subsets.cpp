#include <iostream>
#include <vector>
using namespace std;

class Solution {
private:
    void solve(vector<vector<int>>&ans,vector <int> output,vector<int>nums,int index)
    {
        if(index >=nums.size())
        {
            ans.push_back(output);
            return ;
        }
        //exclude
        solve(ans,output,nums,index + 1);
        output.push_back(nums[index]);
        solve(ans,output,nums,index + 1);
    }

public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector <int> output;
        int index = 0;
        vector<vector<int>> ans;
        solve(ans,output,nums,index);
        return ans;
    }
};