#include<iostream>
using namespace std;

int main(){

    int n,a;
    cout<<"Enter Number."<<endl;
    cin>>n;

    if(n==0||n==1){

        cout<<"Not a prime number."<<endl;
    }

   for(a=2;a<n;a++){

    if(n%a==0){

        cout<<"It's not a Prime number"<<endl;
      }
   }

        cout<<"It's Prime number"<<endl;


return 0;
}
