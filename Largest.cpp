#include<iostream>
using namespace std;

int main(){

    int a,b,c;
    cout<<"Enter the value of A"<<endl;
    cin>>a;
    cout<<"Enter the value of B"<<endl;
    cin>>b;
    cout<<"Enter the value of C"<<endl;
    cin>>c;

    if(a>b){

        if(a>c){
            cout<<"......A is Greatest....."<<endl;
        }
        else{
            cout<<".....C is Greatest....."<<endl;
        }
    }else{

        if(b>c){
            cout<<".....B is Greatest....."<<endl;
        }else{
            cout<<".....C is Greatest....."<<endl;
            cout<<".....THANKS....."<<endl;
        }
    }


}
