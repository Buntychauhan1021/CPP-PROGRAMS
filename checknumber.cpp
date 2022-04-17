//check number is positive or negative


# include<iostream>
using namespace std;
int main(){
    int num=0;
    cout<<"enter the number\n";
    cin>>num;
    if (num>0)
    {
        cout<<"number is positive";
    }
    else if (num<0)
    {
        cout<<"number is negative";
    }
    else
    {
        cout<<"number is zero";
    }
    
    
}