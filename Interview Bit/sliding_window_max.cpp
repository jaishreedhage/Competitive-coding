vector<int> Solution::slidingMaximum(const vector<int> &A, int B) {

    vector <int> v;
    deque<int> q;
    int k=-1;
    for(int i=0;i<A.size();i++){
        if(q.size()<=0)
            q.push_back(A[i]);
        else {
            if(q.back()>=A[i])
                q.push_back(A[i]);
            else{
                while(q.size()>0 && q.back()<A[i])
                    q.pop_back();
                q.push_back(A[i]);
            }
        }
        if((i+1)>=B){
            v.push_back(q.front());
            if(q.front()==A[i-B+1])
                q.pop_front();
        }
    }
    return v;

}

//VERY IMPORTANT QSN!
