int Solution::atoi(const string &A) {

    int ans = 0,flag = 0,flag2 = 1;
    for(int i=0;i<A.length();i++){
        if(flag == 0 && A[i] == '+'){
            flag = 1;
        }
        else if(flag == 0 && A[i] == '-'){
            flag = 1;
            flag2 = -1;
        }
        else if(flag == 0 && A[i] == ' '){
            continue;
        }
        else if(flag == 0 && (int)A[i]>=48 && (int)A[i]<=57){
            flag = 1;
            ans = ans*10 + (A[i] - '0');
        }
        else if(flag == 0 && !((int)A[i]>=48 && (int)A[i]<=57)){
            return 0;
        }
        else if(flag == 1 && !((int)A[i]>=48 && (int)A[i]<=57)){
            return ans*flag2;;
        }
        else if(flag == 1 && (int)A[i]>=48 && (int)A[i]<=57){
            if((ans*flag2)>INT_MAX/10)
                return INT_MAX;
            else if((ans*flag2)<INT_MIN/10)
                return INT_MIN;
            else if((flag2*ans)==INT_MAX/10){
                if( (A[i] - '0' > 7 ))
                    return INT_MAX;
            }
            else if((flag2*ans)==INT_MIN/10){
                if( (A[i] - '0' > 8 ) )
                    return INT_MIN;
            }
            ans = ans*10 + (A[i] - '0');
        }
    }

    return ans*flag2;
}

//good qsn, the cases that i forgot were, +7 and -7
//handled that easily
//the tough and a thinker part of the qsn was handle integer overflows by returning INT_MIN and INT_MAX
