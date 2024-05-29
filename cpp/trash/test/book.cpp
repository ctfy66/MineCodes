#include <iostream>
using namespace std;
class Book{
    private:
    int all,read;
    public:
    Book(int n);
    int getall() const { return all; }
    int getread() const { return read; }
    int addread(int n);
    int left()  const { return all - read; }
};

int Book::addread(int n){
    read += n;
    return read;
} 
Book::Book(int n){
    all = n;
    read = 0;
}

int main(){
    int n;
    cin>>n;
    Book b(n);
    cout<<b.getall()<<endl;
    cout<<b.getread()<<endl;
    cout<<b.left()<<endl;
    cout<<b.addread(10)<<endl;
    cout<<b.left()<<endl;
    return 0;
}
