#include <iostream>
using namespace std;
class Walker{
    public:
    int wallet;
    Walker(int num=0){wallet=num;}
};
class Thief{
    private:
    int money;
    public:
    Thief(int num=0){money=num;}
    void steal(Walker& victim){money+=victim.wallet;victim.wallet=0;}
    void getter(){cout<<"money is "<<money<<endl;}
};
int main(){
    Walker vic1(100);
    Thief thi1;
    thi1.steal(vic1);
    thi1.getter();
    return 0;
}