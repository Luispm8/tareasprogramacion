/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int num1,num2;
    cout<<"Luis Perez "<<endl;
    cout<<"calculadora sencila"<<endl;
    cout<<"ingrese el primer numero"<<endl;
    cin>>num1;
    cout<<"ingrese el segundo numero"<<endl;
    cin>>num2;
    cout<<"que deseas realizar?"<<endl;
    cout<<"(1)suma"<<endl;
    cout<<"(2)resta"<<endl;
    cout<<"(3)multiplicacion"<<endl;
    cout<<"(4)division"<<endl;
    int opcion;
    cin>>opcion;
    
   if(opcion==1)
     cout<<"la suma de los numeros es "<<num1+num2<<endl;
     if(opcion==2)
     cout<<"la suma de los numeros es "<<num1-num2<<endl;
      if(opcion==3)
     cout<<"la multiplicacion de los numeros es "<<num1*num2<<endl; 
     if(opcion==4)
     cout<<"la division numeros es "<<num1/num2<<endl;
     else
     cout<<"intente nuevamente"<<endl;
    return 0;}