string Solution::intToRoman(int A) {

    string s;
    while(A>0){
        if(A/1000 > 0){
            for(int i = 1;i<=A/1000;i++)
                s.push_back('M');
            A = A%1000;
        }
        else if(A/900 > 0){
            s.push_back('C');
            s.push_back('M');
            A = A%900;
        }
        else if(A/500 > 0){
            for(int i = 1;i<=A/500;i++)
                s.push_back('D');
            A = A%500;
        }
        else if(A/400 > 0){
            s.push_back('C');
            s.push_back('D');
            A = A%400;
        }
        else if(A/100 > 0){
            for(int i = 1;i<=A/100;i++)
                s.push_back('C');
            A = A%100;
        }
        else if(A/90 > 0){
            s.push_back('X');
            s.push_back('C');
            A = A%90;
        }
        else if(A/50 > 0){
            for(int i = 1;i<=A/50;i++)
                s.push_back('L');
            A = A%50;
        }
        else if(A/40 > 0){
            s.push_back('X');
            s.push_back('L');
            A = A%40;
        }
        else if(A/10 > 0){
            for(int i = 1;i<=A/10;i++)
                s.push_back('X');
            A = A%10;
        }
        else if(A/9 > 0){
            s.push_back('I');
            s.push_back('X');
            A = A%9;
        }
        else if(A/5 > 0){
            for(int i = 1;i<=A/5;i++)
                s.push_back('V');
            A = A%5;
        }
        else if(A/4 > 0){
            s.push_back('I');
            s.push_back('V');
            A = A%4;
        }
        else{
            s.push_back('I');
            A = A - 1;
        }
        // cout<<A<<endl;
    }
    return s;
}

//easy question, but actual solution is much shorter
string intToRoman(int num) {
        // 1000, 2000, 3000
        string M[] = {"", "M", "MM", "MMM"};
        // 100, 200, 300, .. 900
        string C[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
        // 10, 20, ... 90
        string X[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
        // 1, 2, ... 9
        string I[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
        return M[num/1000] + C[(num%1000)/100] + X[(num%100)/10] + I[num%10];
    }
