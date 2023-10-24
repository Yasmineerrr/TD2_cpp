#include<iostream>
using namespace std;
int main(){
int tableau[10];
int *pt= tableau;

for(int i=0;i<10;i++){
cout<<"entrez un nombre:";
cin>>*pt;
*pt++;
}
pt=tableau;
int plusgrand=*pt;
int pluspetit=*pt;

for(int i=0;i<10;i++){
  pt++;
  if(*pt<pluspetit){
    pluspetit=*pt;
  }
    if(*pt>plusgrand){
        plusgrand=*pt;
    }
}
    cout<<"Le plus petit nombre est:"<<pluspetit<<endl;
    cout<<"Le plus grand nombre est:"<<plusgrand<<endl;


return 0;
}
