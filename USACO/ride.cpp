/*
ID: jaishre1
PROG: ride
LANG: C++               
*/
#include <cstdio>
#include <cstring>

using namespace std;

int main(){
	char cometName[6],groupName[6],in;
	int cometProd = 1 , groupProd = 1;
		
	freopen("ride.in","r",stdin);
	freopen("ride.out","w",stdout);
	
	while(scanf("%c",&in)){
		if(in!='\n')
			cometProd *= (int)in - 64 ;
		else
			break;
	}
	while(scanf("%c",&in)){
		if(in!='\n')
			groupProd *= (int)in - 64 ;
		else
			break;
	}
	
	if(cometProd % 47 == groupProd % 47)
		printf("GO\n");
	else
		printf("STAY\n");
}