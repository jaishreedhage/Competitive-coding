vector<int> Solution::prevSmaller(vector<int> &A) {
    vector<int> min_ele;
    stack <int> s;
    if(A.size()<=0)
        return min_ele;
    min_ele.push_back(-1);
    s.push(A[0]);
    for(int i=1;i<A.size();i++){
        if(s.top()<A[i]){
            min_ele.push_back(s.top());
            s.push(A[i]);
        }
        else{
            while(!s.empty()){
                if(s.top()>=A[i])
                    s.pop();
                else
                    break;
            }
            if(s.empty())
                min_ele.push_back(-1);
            else
                min_ele.push_back(s.top());
            s.push(A[i]);
        }
    }
    return min_ele;
}

//VERY IMPORTANT QSN.
//I had done a very similar technique, but mine wasnt giving the nearest smaller, mine was first smaller element from start
