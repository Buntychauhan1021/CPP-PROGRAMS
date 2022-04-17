# include<iostream>
using namespace std;
int main(){
    int i,prime=0,a;
    cout<<"enter the number";
    cin>>a;
    for ( i = 2; i < a; i++)
    {
        if (a%i==0)
        {
            prime=1;
            break;   
        }
        
    }
    if (prime==0)
    {
      cout<<"number is prime";
    }
    else
    {
        cout<<"number is not prime";
    }
    
    

}