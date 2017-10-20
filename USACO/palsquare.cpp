/*
ID: jaishre1
PROG: palsquare
LANG: C++               
*/

#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
#include <sstream>

using namespace std;

char temp[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I','J'};

string valueInBase(int i,int base){
	int l=-1;
	string value;
	while(i>0){
		value = temp[i%base] + value;
		i=i/base;
	}
	return value;
}

int palindrome(int i,int base){
	string n = valueInBase(i,base);

	for(int j=0;j<n.length()/2;j++){
		if(n[j]!=n[n.length()-1-j])
			return 0;
	}
	return 1;
}

int main(){
	ofstream fout("palsquare.out");
	ifstream fin("palsquare.in");
	int base;
	fin>>base;
	for(int i=1;i<=300;i++){
		if(palindrome(i*i,base))
			fout<<valueInBase(i,base) <<" "<< valueInBase(i*i,base)<<endl;
	}
	return 0;
}