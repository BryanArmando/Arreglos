
#include <iostream>
using namespace std;
void pares(int a);
int main() {
  int b;
  cout<<"Ingrese el tamaño del arreglo: ";
  cin>>b;
  pares(b);
return 0;
}

void pares (int a){
  int n[100];
  for (int i=1;i<=a;i++){
    n[i]=2*(rand()%50);
    cout<<"n["<<i<<"]"<<".- "<<n[i]<<endl;
  }
}
