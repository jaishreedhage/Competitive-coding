int Solution::romanToInt(string A) {

    int s = 0;
    for(int i=0;i<A.length();i++){
        if(A[i] == 'I'){
            if(i+1<A.length() && A[i+1] == 'V'){
                s += 4;
                i ++ ;
            }
            else if(i+1<A.length() && A[i+1] == 'X'){
                s += 9;
                i++;
            }
            else
                s += 1;
        }
        else if(A[i] == 'V'){
            s += 5;
        }
        else if(A[i] == 'X'){

            if(i+1<A.length() && A[i+1] == 'C'){
                s += 90;
                i ++ ;
            }
            else if(i+1<A.length() && A[i+1] == 'L'){
                s += 40;
                i++;
            }
            else
                s += 10;
        }
        else if(A[i] == 'C'){
            if(i+1<A.length() && A[i+1] == 'D'){
                s += 400;
                i ++ ;
            }
            else if(i+1<A.length() && A[i+1] == 'M'){
                s += 900;
                i++;
            }
            else
                s+= 100;
        }
        else if(A[i]=='L')
            s += 50;
        else if(A[i]=='M')
            s += 1000;
        else if(A[i]=='D')
            s += 500;
    }
    return s;
}

//easy question, just have to know the roman number convention
