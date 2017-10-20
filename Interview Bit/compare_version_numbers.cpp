int Solution::compareVersion(string A, string B) {

    stringstream ss(A),sb(B);
    string tok;
    vector<string>l1,l2;
    while(getline(ss,tok,'.')){
        int t=0;
        while(tok[t]==' ') t++;
        while(tok[t]=='0') t++;
        string p=tok.substr(t);
        t=p.length()-1;
        while(tok[t]==' ') t--;
        p=p.substr(0,t+1);
        if(p.length()<=0)
            p="0";
        l1.push_back(p);
    }
    while(getline(sb,tok,'.')){
        int t=0;
        while(tok[t]==' ') t++;
        while(tok[t]=='0') t++;
        string p=tok.substr(t);
        t=p.length()-1;
        while(tok[t]==' ') t--;
        p=p.substr(0,t+1);
        if(p.length()<=0)
            p="0";
        l2.push_back(p);
    }
    int i=0;
    while(i<l1.size() && i<l2.size()){
        if(l1[i].length()>l2[i].length())
            return 1;
        else if(l1[i].length()<l2[i].length())
            return -1;
        else if((l1[i]).compare(l2[i])<0)
            return -1;
        else if((l1[i]).compare(l2[i])>0)
            return 1;
        i++;
    }
    if(i>=l1.size() && i<l2.size() && l2[l2.size()-1].compare("0")!=0)
        return -1;
    else if(i<l1.size() && i>=l2.size() && l1[l1.size()-1].compare("0")!=0)
        return 1;

    return 0;

}

//learnt some very important concept
//how the fuck does compare() work?
//so str.compare(str2)..in this str is called compared string and str1 is called comparing string
//so now, if compared string ka any letter is lesser than comparing string, then you get <0 ; also when compared string is shorter
//vice versa for >0
//so basically "2345".compare("4") gives -1 as 2 is lesser than 4.. it doesnt give fuck as to the length of it if the starting letters are different.


//the other thing i learnt was "splitting a string over a delimiter" -- no separate function as such for a string. check notes for it
