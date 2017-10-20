static bool compareNum(string a, string b) {
           return a + b > b + a;
       }
string Solution::largestNumber(const vector<int> &num) {
   // Do not write main() function.
   // Do not read input, instead use the arguments to the function.
   // Do not print the output, instead return values as specified
   // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
   string result;
   vector<string> str;
   for (int i = 0; i < num.size(); i++) {
       str.push_back(to_string(num[i]));
   }
   sort(str.begin(), str.end(), compareNum);
   for (int i = 0; i < str.size(); i++) {
       result += str[i];
   }

   int pos = 0;
   while (result[pos] == '0' && pos + 1 < result.size()) pos++;
   return result.substr(pos);
}

//case when 0 might be in the beginning of array should be consider.
//Use of a custom comparison sort is learnt in this qsn.
