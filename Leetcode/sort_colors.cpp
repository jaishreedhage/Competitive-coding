class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l=0,r=nums.size()-1;
        for(int i=0;i<nums.size();i++){
            while( nums[l]==0)
                l++;
            while(nums[r]==1 || nums[r]==2 )
                r--;
            if(l<r){
                swap(nums[l],nums[r]);
                i = l;
            }
            else
                break;
        }
        r = nums.size()-1;
        for(int i=l;i<nums.size();i++){
            while(nums[l]==1)
                l++;
            while(nums[r]==2)
                r--;
            if(l<r){
                swap(nums[l],nums[r]);
                i=l;
            }
        }
    }
};

//the complexity of my code is O(n) only i guess
