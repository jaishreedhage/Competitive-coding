/*
ID: jaishre1
PROG: namenum
LANG: C++               
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
	ofstream fout("namenum.out");
	ifstream fin("namenum.in");
	ifstream dict("dict.txt");
	string N,input,output,check;
	int count=0;
	fin>>N;
	while(dict>>input){
		if(input.length()!=N.length())
			continue;
		check="";
		for(int i=0;i<input.length();i++){
			if(input[i]=='A' || input[i]=='B' || input[i]=='C' )
				check+="2";
			if(input[i]=='D' || input[i]=='E' || input[i]=='F' )
				check+="3";
			if(input[i]=='G' || input[i]=='H' || input[i]=='I' )
				check+="4";
			if(input[i]=='J' || input[i]=='K' || input[i]=='L' )
				check+="5";
			if(input[i]=='M' || input[i]=='N' || input[i]=='O' )
				check+="6";
			if(input[i]=='R' || input[i]=='S' || input[i]=='P' )
				check+="7";
			if(input[i]=='U' || input[i]=='V' || input[i]=='T' )
				check+="8";
			if(input[i]=='X' || input[i]=='Y' || input[i]=='W' )
				check+="9";
		}
		if(check==N){
			count++;
			fout<<input<<endl;
		}
	}
	if(count==0)
		fout<<"NONE"<<endl;
}