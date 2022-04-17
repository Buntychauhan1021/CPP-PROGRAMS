# include<iostream>
using namespace std;
int main(){
    char a;

    cout<<"enter somthing\n";
    cin>>a;
    if (a>=48&&a<=57)
    {
       cout<<"this is number";
    }
    else if (a>=65&&a<=90||a>=97&&a<=122)
    {
        cout<<"this is alphabet";
    }
    else
    {
        cout<<"this is special";
    }
    
    

}

