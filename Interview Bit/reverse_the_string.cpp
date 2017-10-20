void Solution::reverseWords(string &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int pos = 0;
    int i=0,j=0;
    string word="";
    while(i<A.length()){
        while(A[i]==' ')
            i++;
        j=i;
        while(A[j]!=' ' && j<A.length())
            j++;
        string temp = A.substr(i,j-i);
        reverse(temp.begin(),temp.end());
        word += temp;
        word += " ";
        i=j;
    }
    reverse(word.begin(),word.end());
    i=0;
    while(word[i]==' ')
        i++;
    A = word.substr(i);
}

//easy qsn, idk why i took so much time to solve it
