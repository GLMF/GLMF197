#include <iostream>
#include <fenv.h>
using namespace std;

int main(){
  fesetround(FE_TONEAREST);
  
  float a, b, c;
  cout<<"Valeur de a : "<<endl;
  cin>>a;
  cout<<"Valeur de b : "<<endl;
  cin>>b;
  cout<<"Valeur de c : "<<endl;
  cin>>c;
  
  float delta = b*b - 4*a*c;
  cout<<endl<<"delta : "<<delta<<endl;
  
  return 0;
}