#include<iostream>
using namespace std;

bool IlEstMultipleDe2(int nombre){
return nombre %2==0;
}

bool IlEstMultipleDe3(int nombre){
return nombre %3==0;
}

int main(){
int entier;

cout<<"donnez un entier :";
cin>>entier;

if (IlEstMultipleDe2(entier)){
    cout<<"Il est pair"<<endl;
}

if(IlEstMultipleDe3(entier)){
    cout<<"il est multiple de 3"<<endl;
}

if(IlEstMultipleDe2(entier) && IlEstMultipleDe3 (entier)){
    cout<<"il est divisible par 6"<<endl;
}
  return 0;
}

