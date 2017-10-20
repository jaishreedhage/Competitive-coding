vector<string> Solution::fullJustify(vector<string> &A, int B) {
    vector<string> v;
    string s;
    for(int i=0;i<A.size();i++){
        s = "";
        int k = 0,j;
        int w = 0;
        for(j=i;j<A.size();j++){
            if(k+w+A[j].length()<=B){
                k += A[j].length();
                w++;
            }
            else
                break;
        }
        if(k>0)
            w--;
        int sp1,sp2,l;
        if(w>0 && j!=A.size()){
            sp1 = (B-k)/w;
            sp2 = (B-k)%w;
            for(l=i;l<j-1;l++){
                s+=A[l];
                for(int m=0;m<sp1;m++)
                    s.push_back(' ');
                if(sp2>0){
                    s.push_back(' ');
                    sp2--;
                }
            }
        }
        else if(w>0 && j==A.size()){
            for(l=i;l<j-1;l++){
                s+=A[l];
                s.push_back(' ');
            }
        }
        else
            l=i;
        s+=A[l];
        if(w==0 || j==A.size()){
            if(B-(k+w)>0){
                for(l=0;l<B-(k+w);l++)
                    s.push_back(' ');
            }
        }
        v.push_back(s);
        i = j-1;
    }
    return v;
}
//simulation qsn
