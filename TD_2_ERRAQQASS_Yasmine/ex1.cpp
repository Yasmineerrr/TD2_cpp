#include<iostream>
using namespace std;

int NombresAppels=0;
void AfficherNombreAppels(){
NombresAppels++;
 cout<<"appel num�ro"<< NombresAppels<<endl;

}
int main(){

AfficherNombreAppels();
AfficherNombreAppels();
AfficherNombreAppels();

return 0;
}


