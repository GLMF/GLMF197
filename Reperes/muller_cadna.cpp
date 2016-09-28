#include <stdio.h>
#include <iomanip>
#include <iostream>

using namespace std;

#include <cadna.h>

int main(){
  
  cadna_init(-1);
  
  double_st u[30];
  u[0] = 2;
  u[1] = -4;
  
  for(int i=2;i<30;i++){
    u[i] = 111. - 1130./u[i-1] + 3000./(u[i-1]*u[i-2]);
    cout<<"u["<<i<<"]"<<u[i]<<endl;
  }
  cadna_end();
  return 0;
}
