#include<iostream>
using namespace std;
//Program to find a number in an array.
int main()
{
    int a[10],i,x;
    
    for(i=0;i<10;i++)
    {
        cout<<"\nEnter The Value : ";
        cin>>a[i];
    }
    cout<<"\nEnter The Value to Search :";
    cin>>x;
 
    for(i=0;i<10;i++)//1 2 3 4 5
    {
        if(a[i]==x)
        {
            cout<<"Value Found @"<<i;
            return 0;
        }
    }
    cout<<"Value Not Found";
    return 0;
}
