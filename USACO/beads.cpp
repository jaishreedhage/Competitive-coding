/*
ID: jaishre1
PROG: beads
LANG: C++               
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
	ofstream fout("beads.out");
	ifstream fin("beads.in");
	int N, length1,length2,maxlen=0,sum;
	int i,j,k;
	char startbead;
	bool change,check;
	fin>>N;
	char bead[N];
	fin>>bead;
	for(i=0;i<N;i++){
		sum=0;
		change=true;
		check=false;
		length1=0; length2=0; startbead=' ';
		for(j=i; ;j++){
			if(j>=N){
				j=j-N;				
			}
			if(check==true)
				if(j==i)
					break;
			if(bead[i]!='w'){
				startbead = bead[i];
				change=false;
			}
			else{
				if(change==true && bead[j]!='w'){
					startbead = bead[j];
					change=false;
				}
			}
			if(bead[j]==startbead || bead[j]=='w')
				length1++;
			else 
				break;
			check=true;
		}
		change=true; startbead=' ';
		for(j=i-1; ;j--){
			k=i-1;
			if(k<0)
				k=k+N;
			if(j<0){
				j=j+N;				
			}
			if(bead[k]!='w'){
				startbead = bead[k];
				change=false;
			}
			else{
				if(change==true && bead[j]!='w'){
					startbead = bead[j];
					change=false;
				}
			}
			if(bead[j]==startbead || bead[j]=='w'){
				length2++;
			}
			else 
				break;
			if(j-1==i-1)
				break;
			
		}
		sum=length1+length2;
		if(sum>N)
			sum=N;
		if(sum>maxlen)
			maxlen=sum;
	}
	fout<<maxlen<<endl;
	return 0;
}