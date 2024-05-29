/*
函数void f (int n, int m)创建一个动态数组，n行m列,利用new来实现，
先创建一个指向每个数组指针的指针数组,大小为n,再对每个指针进行指向数组大小为m
利用循环语句来赋值每个元素为1，2....
计算各行元素和,斌输出:利用for循环
计算各列元素和,输出
*/
#include <iostream>
using namespace std;
void f (int n ,int m){
    //创建数组
    int** array=new int*[n];
    for (int i=0;i<n;i++){
        array[i]=new int[m];
    }
    //赋值数组
    int number=1;
    for(int i=0;i<n;i++){

        for(int j=0;j<m;j++){
            array[i][j]=number;
            number++;
        }
    }
    //计算各行元素和并输出
    for (int i=0;i<n;i++){
        int sum1=0;
        for(int j=0;j<m;j++){
            sum1+=array[i][j];
        }
        cout<<"the sum1 of row "<<i<<" is "<<sum1<<endl;

    }
    //计算各列和输出
    for(int j=0;j<m;j++){
        int sum2=0;
        for (int i=0;i<n;i++){
            sum2+=array[i][j];
        }
        cout<<"the sum of column "<<j<<" is "<<sum2<<endl;
    }
    //释放内存
    for(int i=0;i<m;i++){
        delete [] array[i];
    }
    delete [] array;


}
int main(){
    f(2,2);
    return 0;
}