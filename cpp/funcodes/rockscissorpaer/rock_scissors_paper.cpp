/*
this is a intersting code ,hope you will have fun:)
*/
/*改进目标：
1.实现循环功能，直到输入一个特定值为止
2.统计每一局的胜负
*/
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
enum class RSP
{
    rock,
    scissor,
    paper
};
string Tostring(RSP rsp)
{
    switch (rsp)
    {
    case RSP::rock:
        return "rock";
    case RSP::scissor:
        return "scissor";
    case RSP::paper:
        return "paper";
    default:
        return "unknown result";
    }
}
class user
{
private:
    RSP hand;
public:
    user()=delete;
    user(RSP h):hand(h){};
    ~user()=default;
    void pk();
};
void user::pk()
{
    RSP pc;
    srand(time(0));
    int random=1+rand()%(3);    //生成一个1-3随机数
    switch(random)              // 将随机数映射为石头剪刀布
    {
        case 1:
            pc=RSP::rock;
            break;
        case 2:
            pc=RSP::scissor;
            break;
        case 3:
            pc=RSP::paper;
            break;
        default:
            pc=RSP::rock;
            break;
    }
    cout<<"your turn is "<<Tostring(hand)<<endl;
    cout<<"computer turn is "<<Tostring(pc)<<endl;
    if(hand==pc)
    {
        cout<<"you both win"<<endl;
    }
    else if(hand==RSP::rock&&pc==RSP::paper)
    {
        cout<<"you lose :("<<endl;
    }
    else if(hand==RSP::rock&&pc==RSP::scissor)
    {
        cout<<"you win :)"<<endl;
    }
    else if(hand==RSP::paper&&pc==RSP::scissor)
    {
        cout<<"you lose :("<<endl;
    }
    else if(hand==RSP::paper&&pc==RSP::rock)
    {
        cout<<"you win :)"<<endl;
    }
    else if(hand==RSP::scissor&&pc==RSP::rock)
    {
        cout<<"you lose :("<<endl;
    }
    else if(hand==RSP::scissor&&pc==RSP::paper)
    {
        cout<<"you win :)"<<endl;
    }
}    
    int main()
    {
       int temp;
       do
       {
       cout<<"input your turn: (0 is rock, 1 is scissor, 2 is paper)"<<endl;
       cin>>temp;
       }
       while (temp <0 || temp >02);
       RSP userRSP=static_cast<RSP>(temp);
       user u1(userRSP);
       u1.pk();
       return 0;
    }

