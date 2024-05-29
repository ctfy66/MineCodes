#include<iostream>
using namespace std;
int main()
{
    int height;
    cout<<"Enter the height of the triangle"<<endl;
    do{
    cin>>height;
    }while (height<=0);
    //循环语句打印三角形
    for (int i=0;i<height;i++)
    {
        for (int j=0;j<((2*height-1)/2-i);j++)
        {
            cout<<" ";
        }
        for(int j=0;j<=i;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}