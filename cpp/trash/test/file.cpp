#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    const int CAPACITY =20;
    int arry[CAPACITY],size;
    ifstream inputfile;
    ofstream outputfile;
    inputfile.open("infile.dat");
    if(!inputfile)
    {
        cout<<"File could not be opened"<<endl;
        cout<<"The program is terminated"<<endl;
        return 0;
    }
    while (inputfile>>arry[size]&&size<CAPACITY)
    {
        size++;
    }
    inputfile.close();
    outputfile.open("outfile.dat");
    if(!outputfile)
    {
        cout<<"File could not be opened"<<endl;
        cout<<"The program is terminated"<<endl;
        return 0;
    }
    for (int i=size-1; i>=0; i--)
    {
        outputfile<<arry[i]<<endl;
    }
    outputfile.close();
    return 0;
}