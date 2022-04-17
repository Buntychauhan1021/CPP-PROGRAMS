# include<iostream>
using namespace std;
int main(){
    float a,b,c;
    char ch;
    cout<<"enter the first number\n";
    cin>>a;
    cout<<"enter the second number\n";
    cin>>b;
    cout<<"enter choice\n";
    cin>>ch;
    switch (ch)
    {
    case '+':
        c=a+b;
        cout<<"the addtion is : "<<c;
        break;
    case '-':
        c=a-b;
        cout<<"the sub is : "<<c;
    case '*':
        c=a*b;
        cout<<"the multiplication is : "<<c;
        break;
    case '/':
        c=a/b;
        cout<<"the division is : "<<c;
        break;


    
    default:
        break;
    }
     
    
}