//Factorial n=1*1*2*3.....n
#include<iostream>
using namespace std;

int main(){

    int num,a=1 ;
    int fact =1;
    cout<<"..........PROGRAM FOR FINDING FACTORIALS.........."<<endl;
    cout<<"Enter Number.."<<endl;
    cin>> num;

    while(a<=num){

        fact = a * fact;
        a++;
    }
    cout<<"Factorial of "<<num<<" is "<<fact<<endl;
}
