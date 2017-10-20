int Solution::largestRectangleArea(vector<int> &A) {
    stack<int>st;
    int area = 0, max_area = 0, i=0, val;
    while(i<A.size()){
        if(st.empty() || A[st.top()]<=A[i])
            st.push(i++);
        else{
            while(st.size()>0 && A[st.top()]>A[i]){
                val = st.top();
                st.pop();
                area = A[val] * (st.empty()? i : i-st.top()-1);
                if(area>max_area)
                    max_area = area;
            }
        }
    }
    while(st.size()>0){
        val = st.top();
        st.pop();
        // cout<<val<<" "<<i<<endl;
        area = A[val] * (st.empty()? i : i-st.top()-1);
        if(area>max_area)
            max_area = area;
    }
    return max_area;
}

//IMP STACK QSN
