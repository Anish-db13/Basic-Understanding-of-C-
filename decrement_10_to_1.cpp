#include<iostream>
using namespace std;

int main(){

int i = 10;

cout<<"Using While loop :"<<endl;
    while(i > 0)
    { 
        cout<<i<<endl;
        i--;
    }
i = 10;
cout<<"Using Do-While loop :"<<endl; 
    do
    {
       cout<<i<<endl;
        i--;
    } while (i > 0);

cout<<"Using For loop :"<<endl;
    for(i = 10;i>0;i--)
    {
        cout<<i<<endl;
    }

    
    return 0;
}