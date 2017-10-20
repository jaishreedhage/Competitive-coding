int Solution::power(string A) {

    string temp;
    int carry = 0,t,flag=0;
    while(A.length()>1){
        flag=0;
        for(int i=0;i<A.length();i++){
            if(carry==0 && (A[i]-'0')<2 && i+1<A.length()){
                string subs = A.substr(i,2);
                t = carry + stoi(subs);
                if(flag!=0){
                    temp.push_back(0+'0');
                }
                else
                    flag=1;
                temp.push_back((t/2) + '0');
                carry = t%2;
                i++;
            }
            else if((A[i]+'0'+carry)<2){
                return 0;
            }
            else {
                flag = 1;
                string subs ="";
                subs.push_back(carry+'0');
                subs.push_back(A[i]);
                temp.push_back((stoi(subs) / 2)+'0');

                carry = stoi(subs) %2;
            }
        }
        if (carry != 0)
            return 0;

        A = temp;
        temp.clear();
    }
    if(A.length()==1){
        if(A[0]=='2')
            return 1;
        if(((A[0]-'0')%2) != 0  || A[0]=='0')
            return 0;
        while((A[0]-'0') > 2){
            carry = (A[0]-'0') % 2 ;
            A[0] = ((A[0]-'0') / 2) + '0';
            // cout<<A<<endl;
        }

        if(((A[0]-'0')%2) == 0 )
            return 1;
        else
            return 0;
    }

}

//qsn is good. involves lot of thinking.
//although my soln worked, i got TLE because of the division process. They have handled the division so nicely, and can be extended to division by any number easily.

//on using the better code for division
int Solution::power(string A) {

    string temp;
    int carry = 0,t,val=0,base=10;
    while(A.length()>1){
        for(int i=0;i<A.length();i++){
            t = A[i]-'0' + carry*base;
            val = t/2;
            carry = t%2;
            temp += val +'0';
        }
        while(temp.size()>0 && temp[0]-'0' == 0)
            temp.erase(temp.begin());
        if (carry != 0)
            return 0;

        A = temp;
        temp.clear();
    }
    if(A.length()==1){
        if(A[0]=='2' || A[0]=='4' || A[0]=='8')
            return 1;

        else
            return 0;
    }

}
