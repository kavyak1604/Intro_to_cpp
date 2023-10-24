#include <iostream>
using namespace std;
main()
{
    cout<<endl;
    cout<<"BITWISE OPERATOR"<<endl;
    cout<<(4<<2)<<endl;
    cout<<(4<<3)<<endl;
    cout<<(4<<4)<<endl;
    cout<<(12>>1)<<endl;
    cout<<(12>>2)<<endl;
    cout<<(12>>3)<<endl<<endl<<endl;

    std::cout<<"ARITHMETIC OPERATORS";
    int var1=8;
    int var2=9;
    cout << "var1+var2 = "<<(var1 + var2) << endl; //addition operator
    cout << "var1-var2 = "<< (var1 - var2) << endl;   //sub
    cout << "var1*var2 =" << (var1 * var2 ) << endl ;//multiplication
    cout << "var1/var2=" << (float)(var1 / var2)<<endl;     //division
    cout << "var1%var2=" << (var1%var2)<<endl<<endl<<endl ;//modulus

    cout<<"RELATIONAL OPERATORS"<<endl;

    if ((var1>var2))
        cout<<("var1 is greater")<<endl;
        
    if(var1<var2)
        cout<< ("var2 is greater")<<endl;
        
    if(var1==var2)
        cout<<("both are equal")<<endl;

    if ((var1>=var2))
        cout<<("var1 is greater Or equal to var 2")<<endl;

    if ((var1<=var2))
        cout<<("var1 is less Or equal to var 2")<<endl;

    if ((var1!=var2))
        cout<<("var1 is not equal to var 2")<<endl<<endl;

    cout<<"BITWISE OPERATORS"<<endl;
     
    cout<<"Bitwise and="<<var1 and var2;
    cout<<"Bitwise or="<<var1 or var2;
    cout<<"Bitwise left shift"<<(12>>1)<<endl;
    cout<<"Bitwise right shift"<<(12<<1)<<endl<<endl;
        
   
    return 0;
}
/*BITWISE OPERATOR
16
32
64
6
3
1


ARITHMETIC OPERATORSvar1+var2 = 17
var1-var2 = -1
var1*var2 =72
var1/var2=0
var1%var2=8


RELATIONAL OPERATORS
var2 is greater
var1 is less Or equal to var 2
var1 is not equal to var 2

BITWISE OPERATORS
Bitwise and=8Bitwise or=8Bitwise left shift6
Bitwise right shift24




