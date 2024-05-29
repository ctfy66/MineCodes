#include <iostream>
using namespace std;
int main()
{
    int arry[5];
    for(int i=0; i<6; i++)
    {
        cout<<"Enter the value of "<<i+1<<" element: "<<endl;
        cin>>arry[i];
    }
    for(int i=0; i<6; i++)
    {
        cout<<arry[i]<<" ";
    }
    return 0;
    
}