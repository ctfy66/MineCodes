#include <iostream>
#include <string>
//将std::string类型字符串转成c语言类型
const char* getAnsiString(const std::string& str);
unsigned int bytecount(const std::string& str);
std::string long2str(const long num);
long str2long(const std::string& str,int base=10);

int main() {
    std::string myString = "Hello, World!";
    const char* cString = getAnsiString(myString);
    std::cout << "ANSI C String: " << cString << std::endl;
    std::cout << "ANSI C String size: " << bytecount(myString) << std::endl;
    std::cout << "long2str: " << long2str(100) << std::endl;
    std::cout << "str2long: " << str2long("100") << std::endl;
    return 0;
}
const char* getAnsiString(const std::string& str){
    return str.c_str();
}

unsigned int bytecount(const std::string& str){
    return static_cast<unsigned int>(str.size());
}
std::string long2str(const long num){
    return std::to_string(num);
};
long str2long(const std::string& str,int base=10){
    return std::stol(str,nullptr,base);
}