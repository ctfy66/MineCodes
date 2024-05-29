#include <iostream>
using namespace std;
class Monster{
    private:
    int speed,hitpoint,damage,defence;
    public:
    Monster(int speed_,int hitpoint_,int damage_,int defence_){
        speed = speed_;
        hitpoint=hitpoint_;
        damage=damage_;
        defence=defence_;
    }
    Monster(Monster& other){
        speed = other.speed;
        hitpoint=other.hitpoint;
        damage=other.damage;
        defence=other.defence;
    }
     void fight(Monster& enemy){
        bool flag=0;
        if (enemy.speed>speed){
            flag=1;
        }
        else if (enemy.speed=speed){
            if (enemy.hitpoint>hitpoint){
                flag=1;
            }
            else if (enemy.hitpoint=hitpoint){
                if (enemy.damage>damage){
                    flag=1;
                }
                else if (enemy.damage=damage){
                    if (enemy.defence>defence){
                        flag=1;
                    }
                    
                }
    
        }
    }
    //设置每个怪物的伤害
    int hit1,hit2;
    //主场所受伤害,最小为1
    hit1=enemy.damage*2-defence;
    if (hit1 <1){
        hit1=1;
    }
    //客场所受伤害
    hit2=damage*2-enemy.defence;
    if (hit2<1){
        hit2=1;
    }
    while (hitpoint>0&&enemy.hitpoint>0) {
        hitpoint-=hit1;
        enemy.hitpoint-=hit2;

    }
    if (enemy.hitpoint<=0){
        if (hitpoint<=0&&flag){
            cout<<"enemy win!"<<endl;
        }
        else cout<<"home win!"<<endl;

    }
    else cout<<"enemy win!"<<endl;
     }
    
    
    
};
int main(){
    Monster monster1(6,100000,10,5);
    Monster monster2(10,100000,10,10);
    monster1.fight(monster2);
    return 0;
}