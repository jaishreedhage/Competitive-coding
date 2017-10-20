class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<2)
            return nums.size();
        int k=-1;
        for(int i=0;i<nums.size();i++){
            int j=i;
            while(j<nums.size() && nums[j]==nums[i])    j++;
            nums[++k] = nums[i];
            j--;
            i = j;
        }
        if(k<nums.size()-1){
            nums.erase(nums.begin()+k+1,nums.end());
        }
        return nums.size();
    }
};

//easy qsn.
