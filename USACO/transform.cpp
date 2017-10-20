/*
ID: jaishre1
PROG: transform
LANG: C++               
*/

#include <iostream>
#include <fstream>

using namespace std;

int compare(int N,char input[][10],char output[][10]){
	for(int i=0;i<N;i++)
		for(int j=0;j<N;j++)
			if(input[i][j]!=output[i][j])
				return -1;
	return 1;
}

int ninetyDegTurn(int N,char input[][10],char output[][10]){
	char temp[10][10];
	for(int i=0;i<N;i++)
		for(int j=0;j<N;j++)
			temp[i][j] = input[N-1-j][i];
	return compare(N,output,temp);
}

int oneEightyDegTurn(int N,char input[][10],char output[][10]){
	char temp[10][10];
	for(int i=0;i<N;i++)
		for(int j=0;j<N;j++)
			temp[i][j] = input[N-1-j][i];
	return ninetyDegTurn(N,temp,output);
}

int twoSeventyDegTurn(int N,char input[][10],char output[][10]){
	char temp[10][10];
	for(int i=0;i<N;i++)
		for(int j=0;j<N;j++)
			temp[i][j] = input[N-1-j][i];
	return oneEightyDegTurn(N,temp,output);
}

int reflection(int N,char input[][10],char output[][10]){
	char temp[10][10];
	for(int i=0;i<N;i++)
		for(int j=0;j<N;j++)
			temp[i][j] = input[i][N-1-j];
	if(compare(N,output,temp)<0){
		if(ninetyDegTurn(N,temp,output)>0 || oneEightyDegTurn(N,temp,output)>0 || twoSeventyDegTurn(N,temp,output)>0)
			return 5;
	}
	else if(compare(N,output,temp)>0)
		return 4;
	return -1;
}

int check(int N,char input[][10],char output[][10]){
	int c;
	
	c = ninetyDegTurn(N,input,output);
	if(c>0)
		return 1;
	c = oneEightyDegTurn(N,input,output);
	if(c>0)
		return 2;
	c = twoSeventyDegTurn(N,input,output);	
	if(c>0)
		return 3;
	c = reflection(N,input,output);
	if(c>0)
		return c;
	c = compare(N,input,output);
	if(c>0)
		return 6;
	return 7;

}

int main(){
	ofstream fout("transform.out");
	ifstream fin("transform.in");
	int N,i,j;
	fin>>N;
	char input[10][10],output[10][10];
	for(i=0;i<N;i++)
		for(j=0;j<N;j++)
			fin>>input[i][j];
	for(i=0;i<N;i++)
		for(j=0;j<N;j++)
			fin>>output[i][j];
	fout<<check(N,input,output)<<endl;
}