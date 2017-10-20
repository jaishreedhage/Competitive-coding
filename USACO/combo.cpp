/*
ID: jaishre1
PROG: barn1
LANG: C++               
*/

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

int main(){
	ofstream fout("combo.out");
	ifstream fin("combo.in");
	int N,farmer[3],master[3];
	fin>>N;
	for(i=0;i<2;i++)
		fin>>farmer[i];
	for(i=0;i<2;i++)
		fin>>master[i];
	if(farmer[0]==master[0] && farmer[1]==master[1] && farmer[2]==master[2] )
		fout<<pow(5,3);
	else{
		total = 2*pow(5,3);
		if(farmer[0]+2 - master[0] <=2 && farmer[1]+2-master[1]<=2 && farmer[2]+2-master[2]<=2)
			total-=pow(3,3);
		else if((farmer[0]+2 - master[0] <=2 && farmer[1]+2-master[1]<=2) || (farmer[0]+2 - master[0] <=2 && farmer[2]+2-master[2]<=2) || (farmer[2]+2 - master[2] <=2 && farmer[1]+2-master[1]<=2))
			total-=pow(3,2);
		if(farmer[0]-2 - master[0] <=2 && farmer[1]-2-master[1]<=2 && farmer[2]-2-master[2]<=2)
			total-=pow(3,3);
		else if((farmer[0]-2 - master[0] <=2 && farmer[1]-2-master[1]<=2) || (farmer[0]-2 - master[0] <=2 && farmer[2]-2-master[2]<=2) || (farmer[2]-2 - master[2] <=2 && farmer[1]-2-master[1]<=2))
			total-=pow(3,2);
		
	}
	for(i=0;<i2;i++)
	return 0;
}