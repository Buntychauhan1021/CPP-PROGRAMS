//result statement

# include<iostream>
using namespace std;
int main(){
    int per;
    cout<<"enter the percentage\n";
    cin>>per;
    if (per>=60)
    {
    cout<<"first devision";
    }
    else if (per<60&&per>=45)
    {
        cout<<"second division";
    }
    else if (per>=33&&per<45)
    {
      cout<<"third division";
    }
    else
    {
        cout<<"fali";
    }
    
    

    
}