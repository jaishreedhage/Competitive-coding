string Solution::simplifyPath(string A) {
    vector<string> v;
    string s="";
    A.push_back('/');
    for(int i=0;i<A.length();i++){
        if(A[i]=='/'){
            if(s.length()<=0)    continue;
            else if(s==".."){
                if(v.size()>0)
                    v.pop_back();
            }
            else if(s=="."){
                //dont do anything
            }
            else
                v.push_back(s);
            s.clear();
        }
        else{
            s.push_back(A[i]);
        }
    }
    if(v.size()<=0)
        return "/";
    s = "";
    for(int i=0;i<v.size();i++)
        s+="/"+v[i];
    return s;
}

//IMP QSN
