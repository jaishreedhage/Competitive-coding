/*
ID: jaishre1
PROG: milk
LANG: C++               
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
	ofstream fout("milk.out");
	ifstream fin("milk.in");
	int N,M,sum=0,cost=0;	
	fin>>N>>M;
	struct MILK{
		int price;
		int qty;
	}milk[M],temp;
	for(int i=0;i<M;i++){
		fin>>milk[i].price>>milk[i].qty;
	}
	for(int i=0;i<M-1;i++)
		for(int j=0;j<M-1-i;j++){
			if(milk[j].price>milk[j+1].price){
				temp=milk[j];
				milk[j]=milk[j+1];
				milk[j+1]=temp;
			}
		}
	for(int i=0;i<M;i++){
		if(milk[i].qty+sum<=N){
			cost+=milk[i].price*milk[i].qty;
			sum+=milk[i].qty;
		}
		else{
			int left = N - sum;
			cost += milk[i].price *left;
			sum+=left;
		}
		if(sum==N)
			break;
	}
	fout<<cost<<endl;
	return 0;
}
