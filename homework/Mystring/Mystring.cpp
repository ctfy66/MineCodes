#include<cstring>
#include<iostream>
using namespace std;
class Mystring{
    public:
    Mystring(const char* pdata=NULL);//无参和有参构造函数
    Mystring(const Mystring& str);//拷贝构造函数
    ~Mystring();
    Mystring& operator=(const Mystring& str);//赋值函数
    Mystring& operator+=(const Mystring& str);
    operator char*()const;
    char* getter()const{return  data;};
    private:
    char* data;
    friend const Mystring operator+(const Mystring& str1,const Mystring&str2);

};

Mystring::Mystring(const char* pdata){
    if(pdata==NULL){
        data=new char[1];
        data[0]='\0';

    }
    else{
        data=new char[strlen(pdata)+1];
        strcpy(data,pdata);
    }

}
Mystring::Mystring(const Mystring& str){
    data=new char[strlen(str.getter())+1];
    strcpy(data,str.getter());
}

Mystring::~Mystring(){
    delete[] data;
}

Mystring& Mystring::operator=(const Mystring& str){
    if(this!=&str){
        delete[] data;
        data=new char[strlen(str)+1];
        strcpy(data,str.getter());
    }
    return *this;
}
Mystring& Mystring::operator+=(const Mystring& str){
    char* temp=new char[strlen(str.getter())+strlen(data)+1];
    strcat(temp,data);
    strcat(temp,str.getter());
    delete[] data;
    data=temp;
    return *this;
}
Mystring::operator char*()const{
    return data;
}
const Mystring operator+(const Mystring& str1,const Mystring&str2){
    Mystring str3;
    str3.data=new char[strlen(str1.getter())+strlen(str2.getter())+1];
    strcpy(str3.data,str1.getter());
    strcat(str3.data,str2.getter());
    return str3;
}
//自定义输出流，输出data
ostream& operator<<(ostream& os, const Mystring& str){
    os<<str.getter();
    return os;
}
#include <iostream>
using namespace std;

// 假设已经定义并实现了 Mystring 类和相关运算符重载

int main() {
    // 测试构造函数和输出运算符
    Mystring str1("Hello");
    cout << "str1: " << str1 << endl; // 应输出: str1: Hello

    // 测试拷贝构造函数
    Mystring str2(str1);
    cout << "str2: " << str2 << endl; // 应输出: str2: Hello

    // 测试赋值运算符
    Mystring str3;
    str3 = str1;
    cout << "str3: " << str3 << endl; // 应输出: str3: Hello

    // 测试追加运算符
    str3 += Mystring(" World");
    cout << "str3 after +=: " << str3 << endl; // 应输出: str3 after +=: Hello World

    // 测试 + 运算符
    Mystring str4 = str1 + Mystring(" World");
    cout << "str4: " << str4 << endl; // 应输出: str4: Hello World

    // 测试类型转换运算符
    const char* cstr = str4;
    cout << "cstr: " << cstr << endl; // 应输出: cstr: Hello World

    // 测试多个运算符的链式操作
    Mystring str5;
    str5 = str1 + " " + str2 + "!";
    cout << "str5: " << str5 << endl; // 应输出: str5: Hello Hello!

    // 测试自我赋值
    str1 = str1;
    cout << "str1 after self assignment: " << str1 << endl; // 应输出: str1 after self assignment: Hello

    // 测试析构函数（通过退出 main 函数自动调用）

    return 0;
}



