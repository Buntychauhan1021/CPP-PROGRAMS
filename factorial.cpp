# include<iostream>
using namespace std;
int main(){
    int a,i,fact=1;
    cout<<"enter the number\n";
    cin>>a;
    for ( i = 1; i <= a; i++)
    {
        fact=fact*i;
    }
    cout<<"the fact is: "<<fact;
    
}