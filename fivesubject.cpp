//INPUT MARKS OF FIVE SUBJECT LIKE MATH,PHYSICS,CHEMAISTRY,HINDI,ENGLISH



# include<iostream>
using namespace std;
int main(){
    int math,physics,chemistry,hindi,english;
    float total;
    cout<<"enter the physics marks"<<endl;
    cin>>physics;
    cout<<"enter the chemistry marks"<<endl;
    cin>>chemistry;
    cout<<"enter the math marks"<<endl;
    cin>>math;
    cout<<"enter the hindi marks"<<endl;
    cin>>hindi;
    cout<<"enter the english marks"<<endl;
    cin>>english;
    total=(float)(physics+chemistry+math+hindi+english)/5;
    cout<<"the average of all subject  :  "<<total;
}