#include <stdio.h>
#include <iomanip>
#include <iostream>

using namespace std;

#include <cadna.h>

int main(){
	cadna_init(-1);

	float_st x;
	cout<<"Entrez la valeur de x"<<endl;
	cin>>x;
	float_st res = 0.0;
  	for (int i=0;i<1000;i++){
		res+=x;
	}
	cout<<"Somme des x (1000 fois) :"<<res<<endl;
	
	cadna_end();
	
	return 0;
}
