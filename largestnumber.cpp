# include<iostream>
using namespace std;
int main()
{
    int arr[100],i,n,max=0;
    cout<<"enter the array size\n";
    cin>>n;
    cout<<"enter the number\n";
    for ( i = 0; i < n; i++)
    {
         cin>>arr[i];
    }
    
   
    for ( i = 0; i <n; i++)
    {
         if (arr[i]>max)
    {
        max=arr[i];
    }
    }
    cout<<"the largest number is : "<<max;
    

   
    
    

}