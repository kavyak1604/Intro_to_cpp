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


