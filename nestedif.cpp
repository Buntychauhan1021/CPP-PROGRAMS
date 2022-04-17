# include<iostream>
using namespace std;
 int main(){
     int a;
     cout<<"enter the number \n";
     cin>>a;
     if (a>5000)
     {
         if (a>10000)
         {
            cout<<"going to trip";
         }
         else
         {
             cout<<"going to long trip";
         }
         
     }
     else if (a>2000)
     {
         cout<<"going to anywhere";
     }
     else
     {
         cout<<"nothing going";
     }
     
     

 }