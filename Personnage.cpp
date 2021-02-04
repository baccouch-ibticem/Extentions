#include "Personnage.h"
#include <iostream>
using namespace std;

Personnnage:: Personnnage(){
    x=1;
    y=2;
}
Personnnage:: Personnnage(int x, int y){
    x=5;
    y=10;
}
void Personnnage:: Affiche(int x){
    cout << x <<endl;
}
int main(){
    int x = 10;
    char c = 'a';
    int castc;
    castc = int(c);
    int h = 0x10;
    int z = 0;
    int *y = &x;
    Personnnage A;
    A.Affiche(x);
    cout << "cast" << castc <<endl;
    cout << "HEX" << h <<endl;
    cout << "ET" << (x && z) <<endl;
    cout << "OU" << (x || z) <<endl;
    cout << "MOD" << (x % h) <<endl;
}