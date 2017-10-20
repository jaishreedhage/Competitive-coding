#include <iostream>
#include <cstring>
#include <string>
#include <vector>

using namespace std;

vector <string> abc;

char arr[][5] = {"qqq","qq","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
char str[10000000];

void printAll(string digits,int l){
    if(l==digits.length()){
        str[l]='\0';
        string s(str);
        abc.push_back(s);
    }
    else{
	    int len = strlen(arr[(digits[l])-48]);
	    for(int j = 0; j<len;j++){
	        str[l]=arr[digits[l]-48][j];
	        printAll(digits,l+1);
	    }
	}
}

vector<string> letterCombinations(string digits) {
    printAll(digits,0);
    return abc;
}



int main(){
	cout<<"Enter a string"<<endl;
	string digits;
	cin>>digits;
	// string s = "2";
	// int a = atoi(s.c_str());
	// cout<<a<<endl;
	char arr[][5] = {"qqq","qq","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
	vector <string> ab = letterCombinations(digits);
	for(int i=0;i<ab.size();i++)
		cout<<ab[i]<<" ";
	return 0;
}