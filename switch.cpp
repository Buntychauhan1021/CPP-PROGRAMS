# include<iostream>
using namespace std;
int main(){
    char n;
    cout<<"enter the number\n";
    cin>>n;
    switch (n)
    {
    case 'a':
        cout<<"first"<<endl;
        break;
    case 'b':
         cout<<"second"<<endl;
         break;
    case 3:
         cout<<"three"<<endl;
         break;
    case 'd':
         cout<<"four"<<endl;
         break;
    case 'e':
        cout<<"five"<<endl;
    
    default:
        break;
    }
}