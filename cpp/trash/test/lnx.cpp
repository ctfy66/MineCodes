#include <iostream>
#include <sstream>
#include <vector>
#include <iomanip>
using namespace std;
double ln(double x){ //算法函数
     double t;
     if (x<1 && x>0){
        t=x-1;
        return t-(1.0/2)*t*t+(1.0/3)*t*t*t-(1.0/4)*t*t*t*t+(1.0/5)*t*t*t*t*t-(1.0/6)*t*t*t*t*t*t+(1.0/7)*t*t*t*t*t*t*t-(1.0/8)*t*t*t*t*t*t*t*t+(1.0/9)*t*t*t*t*t*t*t*t*t-(1.0/10)*t*t*t*t*t*t*t*t*t*t;
     }
     else if (x>1){
        t=(x-1)/(x+1);
        return 2*t+(2.0/3)*t*t*t+(2.0/5)*t*t*t*t*t+(2.0/7)*t*t*t*t*t*t*t+(2.0/9)*t*t*t*t*t*t*t*t*t;
     }    
     else if (x==1){
        return 0;
     }
     cout<<"error"<<endl;
     return 0;
    }

int main() {
    
    string line;
    vector<double> numbers;
    double temp;

    cout << "输入数字，以回车键结尾：" << endl;
    getline(cin, line);
    istringstream iss(line);
    cout << fixed << setprecision(5); // 保留五位小数

    while (iss >> temp) {
        numbers.push_back(temp);//numbers是一个动态数组，用来存放输入数字。
    }
    for  (double i:numbers){
        cout<<ln(i)<<endl;
    }
    return 0;
}
