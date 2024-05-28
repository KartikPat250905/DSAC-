#include<vector>
#include <iostream>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0;
        int j = 0;
        int k = 0;
        vector <int> v(nums1);
        while(i<m && j <n)
        {
            if(v[i] > nums2[j])
            {
                nums1[k] = nums2[j];
                k++;
                j++;
            }
            else
            {
                nums1[k] = v[i];
                k++;
                i++;
            }
        }
        while(i < m)
        {
            nums1[k++] = v[i++];
        }
        while(j < n)
        {
            nums1[k++] = nums2[j++];
        }
    }
};