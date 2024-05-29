/*
程序设计思想
功能描述:
一个二维整数数组类，大小动态,可像一般数组一样使用
功能:创建一个obj对象,修改obj[1][2]=b;
输出cout<<obj[2][3];
怎么做:
该用什么数据类型:
一个二维数组matrix,vector<vector<int>>
重载运算符[]:怎么重载?
重载<<运算符:

*/
#include <iostream>
#include <vector>
using namespace std;
class Twodarray
{
    private:
    vector<vector<int>> matrix;
    public:
    //参数构造函数,初始化二维数组
    Twodarray(int row,int column):matrix(row,vector<int>(column)){}
    //重载[]操作符
    vector<int>& operator[](int index)
    {
        return matrix[index];
    }

};
int main()
{
    Twodarray exam(2,2);
    exam[1][1]=99;
    cout<<exam[1][1];
    return 0;
}