/*
ID: jaishre1
PROG: dualpal
LANG: C++               
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

char temp[]={'0','1','2','3','4','5','6','7','8','9'};

string valueInBase(int n,int base){
	string value="";
	while(n>0){
		value = temp[n%base] + value;
		n=n/base;
	}
	return value;
}

int palindrome(int n,int base){
	string value = valueInBase(n,base);
	for(int i=0;i<value.length()/2;i++){
		if(value[i]!=value[value.length()-1-i])
			return 0;
	}
	return 1;
}

int check(int n){
	int count=0;
	for(int i=2;i<=10;i++){
		if(palindrome(n,i)){
			count++;
			if(count==2)
				return 1;
		}
	}
	return 0;
}

int main()
{
	ofstream fout("dualpal.out");
	ifstream fin("dualpal.in");
	int N,S;
	fin>>N>>S;
	for(int i=S+1; ;i++){
		if(check(i)){
			N--;
			fout<<i<<endl;
			if(N==0)
				break;
		}
	}
	
	return 0;
}
