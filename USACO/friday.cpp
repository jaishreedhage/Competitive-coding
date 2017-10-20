/*
ID: jaishre1
PROG: friday
LANG: C++               
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
	ofstream fout("friday.out");
	ifstream fin("friday.in");
	int N , days[8], year=1900, month ,i,j;
	int y = 3; //initially 1st is on monday
	fin >> N;
	for(i=1;i<8;i++)
		days[i]=0;
	for(i=1,j=1;i<=N*12;i++,j++){
		if(j==13){
			j=1;
			year++;
		}
		month = j%13;
		if(month == 1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12){
			if(y-2 == 0)
				days[7]++;
			else if(y-2==-1)
				days[6]++;
			else
				days[y-2]++;
			if(y+3>7)
				y=y+3-7;
			else
				y=y+3;
		}			
		else if(month==4 || month==6 || month==9 || month==11){
			if(y-2 == 0)
				days[7]++;
			else if(y-2==-1)
				days[6]++;
			else
				days[y-2]++;
			if(y+2>7)
				y=y+2-7;
			else
				y=y+2;
		}			
		else{
			if(year%400 == 0){             //leap century year
				if(y-2 == 0)
					days[7]++;
				else if(y-2==-1)
					days[6]++;
				else
					days[y-2]++;
				if(y+1>7)
					y=y+1-7;
				else
					y=y+1;
			}   

			else if(year%4==0 && year%100!=0){  //leap year
				if(y-2 == 0)
					days[7]++;
				else if(y-2==-1)
					days[6]++;
				else
					days[y-2]++;
				if(y+1>7)
					y=y+1-7;
				else 
					y=y+1;
			}
			else{                //not a leap year
				if(y-2 == 0)
					days[7]++;
				else if(y-2==-1)
					days[6]++;
				else
					days[y-2]++;
				//y remains as y
			}
		}
	}
	for(i=1;i<7;i++)
		fout<<days[i]<<" ";
	fout<<days[i]<<endl;
	return 0;
}