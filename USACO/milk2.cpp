/*
ID: jaishre1
PROG: milk2
LANG: C++               
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	
	ofstream fout("milk2.out");
	ifstream fin("milk2.in");
	int N,b,i,j,k=-1,l=-1;
	long int t1[2]={0,0},t2[2]={0,0};
	fin>>N;
	struct MILK{
		int m1,m2;
	}milk[N],temp;
	for(i=0;i<N;i++){
		fin>>milk[i].m1>>milk[i].m2;
	}

	for(i=0;i<N-1;i++)
		for(j=0;j<N-1-i;j++)
			if(milk[j].m1>milk[j+1].m1){
				temp=milk[j];
				milk[j]=milk[j+1];
				milk[j+1]=temp;
			}
		
	t1[++k] = milk[0].m2-milk[0].m1;
	t2[++l] = 0;
	b=milk[0].m2;
	for(i=1;i<N;i++){
		if(milk[i].m1<=b && milk[i].m2>b ){
			t1[k] += milk[i].m1-b+(milk[i].m2-milk[i].m1);
			b=milk[i].m2;
		}
		else if(milk[i].m1<=b && milk[i].m2<=b){
			//do nothing
		}
		else{
			if(k==1 && t1[k]>t1[k-1]){
				t1[k-1]=t1[k];
				t1[k] = milk[i].m2-milk[i].m1;
			}
			else if(k<1)
				t1[++k] = milk[i].m2-milk[i].m1;
			else if(k==1 && t1[k]<t1[k-1])
				t1[k] = milk[i].m2-milk[i].m1;				
			if(milk[i].m1-b>t2[l])
				t2[l]=milk[i].m1-b;
			b=milk[i].m2;
		}
	}
	if(t1[k]<t1[k-1])
		k=k-1;
	fout<<t1[k]<<" "<<t2[l]<<endl;
	return 0;
}