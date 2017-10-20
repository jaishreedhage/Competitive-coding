vector<string> Solution::fizzBuzz(int A) {
    vector <string> ans;
    for(int i=1;i<=A;i++){
        if(i%3!=0 && i%5!=0){
            string s = to_string(i);
            ans.push_back(s);
        }
        if(i%3==0){
            ans.push_back("Fizz");
        }
        if(i%5==0)
            ans.push_back("Buzz");
    }
    return ans;
}

//when questions wherein ppl ask divisible by x and divisible by y...dont forget the case where divisible by (x*y)
