# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the month\n";
    cin>>n;
    switch (n)
    {
    case 1:
        cout<<"january  31";
        break;
    case 2:
        cout<<"february  28/29";
        break;
    case 3:
        cout<<"march 31";
        break;
    case 4:
        cout<<"april  30";
        break;
    case 5:
        cout<<"may  31";
        break;
    case 6:
        cout<<"jun  30";
        break;
    case 7:
        cout<<"july  31";
        break;
    case 8:
        cout<<"august  30";
        break;
    case 9:
        cout<<"sepetember  31";
        break;
    case 10:
        cout<<"october  30";
        break;
    case 11:
        cout<<"november  31";
        break;
    case 12:
        cout<<"december  30";
        break;
    
    default:
        break;
    }
}