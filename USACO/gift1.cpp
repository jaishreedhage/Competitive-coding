/*
ID: jaishre1
PROG: gift1
LANG: C++               
*/

#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

struct GIFTS{
	char name[14];
	int money,n,total;
}gifts[10];

int main(){
	int NP,share,i,j,k,l,m;
	char names[14],temp[14];
	ofstream fout("gift1.out");
	ifstream fin("gift1.in");
	fin >> NP;
	for(i=0;i<NP;i++){
		fin >> gifts[i].name;
	}
	for(i=0;i<NP;i++){
		fin>>names;
		for(j=0;j<NP;j++){
			if(!strcmp(gifts[j].name,names)){
				fin>>gifts[j].money >>gifts[j].n;
				if( gifts[j].money==0 || gifts[j].n==0 )
					break;
				share = gifts[j].money/gifts[j].n;
				gifts[j].total += (-share * gifts[j].n);
				for(l=0;l<gifts[j].n;l++){
					fin>>temp;
					for(m=0;m<NP;m++){
						if(!strcmp(gifts[m].name,temp))
							gifts[m].total +=share;
					}
				}
			}	
		}
	}
	for(i=0;i<NP;i++){
		fout << gifts[i].name <<" "<< gifts[i].total <<endl;
	}
}