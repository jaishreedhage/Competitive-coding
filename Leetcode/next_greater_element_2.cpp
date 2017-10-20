class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> st;
        int len = nums.size();
        if(len<=0)
            return nums;
        vector<int>v(len);
        v[len-1] = -1;
        st.push(nums[len-1]);
        for(int i=len-2;i>=0;i--){
            if(nums[i]<st.top()){
                v[i] = st.top();
            }
            else{
                while(st.size()>0 && nums[i]>=st.top())
                    st.pop();
                if(st.size()>0)
                    v[i] = st.top();
                else
                    v[i] = -1;
            }
            st.push(nums[i]);
        }
        for(int i=len-1;i>=0;i--){
            if(nums[i]<st.top()){
                v[i] = st.top();
            }
            else{
                while(st.size()>0 && nums[i]>=st.top())
                    st.pop();
                if(st.size()>0)
                    v[i] = st.top();
                else
                    v[i] = -1;
            }
            st.push(nums[i]);
        }
        return v;
    }
};

//just had to do 2 pass of the same algo
