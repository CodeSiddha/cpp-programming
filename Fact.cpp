//Factorial n=1*1*2*3.....n
#include<iostream>
using namespace std;

int main(){

    int num,a ;
    int fact =1;
    cout<<"..........PROGRAM FOR FINDING FACTORIALS.........."<<endl;
    cout<<"Enter Number.."<<endl;
    cin>> num;

    for(a=1;a<=num;a++){

        fact = a * fact;
    }
    cout<<"Factorial of "<<num<<" is "<<fact<<endl;
}
