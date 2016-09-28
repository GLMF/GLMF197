#include <iomanip>
#include <iostream>
#include <fenv.h>
#include <stdlib.h>  

using namespace std;

void changement_mode_arrondi(){
  int v = rand()%4;
  if (v == 0) fesetround(FE_DOWNWARD);
  if (v == 1) fesetround(FE_UPWARD);
  if (v == 2) fesetround(FE_TONEAREST);
  if (v == 3) fesetround(FE_TOWARDZERO);
}  

int main(){
	//srand (time(NULL));
	float x=0.1;
	float res = 0.0;
	
	for (int nbEssai=0; nbEssai<100; nbEssai++){
	  res = 0.0;
	  for (int i=0;i<1000;i++){
	    changement_mode_arrondi();
	      res+=x;
	      x=0.1;
	  }
	  cout<<setprecision(10)<<res<<endl;
	}
		
	return 0;
}
