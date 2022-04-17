//check greater number in three number


# include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter first number\n";
    cin>>a;
    cout<<"enter second number\n";
    cin>>b;
    cout<<"enter third number\n";
    cin>>c;
    if (a>b&&a>c)
    {
        cout<<"a is greater";
    }
    else if (b>c)
    {
    cout<<"b is greater";
    }
    else
    {
        cout<<"c is greater";
    }
    
    
}