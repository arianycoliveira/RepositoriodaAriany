#include <iostream> 
#include <string>
using namespace std; 

int main() 
{
char seq;
int cont, somaA, somaB;

cont = 1;
somaA = 0;
somaB = 0;

while (cont <= 10){
cin >> seq;
if (seq == 'a'){
    somaA = somaA + 1;}
if (seq == 'b'){
    somaB = somaB + 1;}
cont ++;}
if (somaA < somaB){
    cout << "1" << endl;}
else {
    cout << "0" << endl;}
      return 0;
}
