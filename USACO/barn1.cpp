/*
ID: jaishre1
PROG: barn1
LANG: C++               
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void sorting(int ar[],int n){
	int i,j,temp;
	for(i=0;i<n-1;i++)
		for(j=0;j<n-1-i;j++)
			if(ar[j]>ar[j+1]){
				temp=ar[j];
				ar[j]=ar[j+1];
				ar[j+1]=temp;
			}
}

int main(){
	ofstream fout("barn1.out");
	ifstream fin("barn1.in");
	int stalls,boards,cows,pos,sum,tem;
	fin>>boards>>stalls>>cows;
	int stallOccupied[cows],i,j;
	struct COWS{
		int temp;
		int position;
	}stallDifference[cows-1],t;

	if(boards<cows){

		for(i=0;i<cows;i++){
			fin>>stallOccupied[i];
		}
		
		for(i=0;i<cows-1;i++)
			for(j=0;j<cows-1-i;j++)
				if(stallOccupied[j]>stallOccupied[j+1]){
					tem=stallOccupied[j];
					stallOccupied[j]=stallOccupied[j+1];
					stallOccupied[j+1]=tem;
				}

		// sorting(stallOccupied,cows);

		
		for(i=1;i<cows;i++){
			stallDifference[i-1].temp = stallOccupied[i]-stallOccupied[i-1]-1;
			stallDifference[i-1].position=i-1;
		}
			
		for(i=0;i<cows-2;i++)
			for(j=0;j<cows-2-i;j++)
				if(stallDifference[j].temp<stallDifference[j+1].temp){
					t=stallDifference[j];
					stallDifference[j]=stallDifference[j+1];
					stallDifference[j+1]=t;
				}

		
		for(i=0;i<boards-2;i++){
			for(j=0;j<boards-2-i;j++)
				if(stallDifference[j].position>stallDifference[j+1].position){
					t=stallDifference[j];
					stallDifference[j]=stallDifference[j+1];
					stallDifference[j+1]=t;
				}
		}

		
		pos=0,sum=0;
		for(i=0;i<boards-1;i++){
			sum+=stallOccupied[stallDifference[i].position]-stallOccupied[pos]+1;
			pos=stallDifference[i].position+1;
		}

		if(pos<cows)
			sum += stallOccupied[cows-1]-stallOccupied[pos]+1;
		fout<<sum<<endl;
	}
	else
		fout<<cows<<endl;
	
	return 0;
}