string Solution::convertToTitle(int A) {

    string s;
    while(A>0){
        int rem = A%26;
        if (rem == 0 ){
            rem = 26;
            A = A-1;
        }
        s.push_back((char)(rem+64));
        A = A/26;
    }
    reverse(s.begin(),s.end());
    return s;
}

//remember the case where mod gives 0!!!
//alternate easy solution instead of this would be

// string Solution::convertToTitle(int A) {
//     string s;
//     while(A>0){
//         s.push_back( (char) ((A-1)%26)+65 );
//         A = (A-1)/26;
//     }
//     reverse(s.begin(),s.end());
//     return s;
// }
