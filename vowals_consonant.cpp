#include<iostream>
using namespace std;

int main(){

    char n;
    int lowercase , uppercase;

    cout<<"Enter a Character"<<endl;

    cin>>n;

    lowercase = ( n=='e'|| n=='i'|| n=='o'|| n=='u' || n=='a');
    uppercase = ( n=='E'|| n=='I'|| n=='O'|| n=='U' || n=='A');

    if(lowercase||uppercase){

        cout<<"It's a Vowel."<<endl;
    }
    else{
        cout<<"It's a consonant"<<endl;
    }
    return 0;
}
