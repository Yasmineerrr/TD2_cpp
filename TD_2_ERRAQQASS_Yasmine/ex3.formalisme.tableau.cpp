#include<iostream>
using namespace std;

int main(){

int tableau[10];

for (int i= 0;i<10;i++){
    cout<<"entrer un nombre=";
    cin>>tableau[i];
}

int plusPetit= tableau[0];
int plusGrand= tableau[0];


for (int i = 0; i < 10; i++) {
        if (tableau[i] < plusPetit) {
            plusPetit = tableau[i];
        }
        if (tableau[i] > plusGrand) {
            plusGrand = tableau[i];
        }
    }

    cout<<"Le plus petit nombre est:"<<plusPetit<<endl;
    cout<<"Le plus grand nombre est:"<<plusGrand<<endl;


return 0;
}





