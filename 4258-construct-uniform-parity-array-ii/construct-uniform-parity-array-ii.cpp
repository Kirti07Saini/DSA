class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int minel=*min_element(nums1.begin(),nums1.end());
        if(minel%2==1){//odd
            return true;
        }
        for(int num:nums1){
            if(num%2==1){
                return false;
            }
        }
        return true;//all even 
    }
};