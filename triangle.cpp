# include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the first angle\n";
    cin>>a;
    cout<<"enter the second angle\n";
    cin>>b;
    cout<<"enter the third angle\n";
    cin>>c;
    if(a+b+c==180)
    {
        cout<<"yes this is triangle";
    }
    else
    {
        cout<<"this is not a triangle";
    }
}