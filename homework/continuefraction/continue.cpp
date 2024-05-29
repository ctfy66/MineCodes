#include <iostream>
#define MAXLENGTH 30
#include <vector>
using namespace std;
//定义一个链表类，每个节点存储每个数
class Node{
    public:
    //value表示数，last指向上一个节点
    int value;
    Node* last;
    //构造函数,创建一个新节点
    Node(int val){value=val;last=nullptr;}
    Node(){value=1;last=nullptr;}
    };
class Continue{
    private:
    Node* head ,*tail;
    int length;
    public:
    Continue(Node*first){
        head=first;
        tail=first;
        length=1;
    }
    //添加节点
    void addnewpart(Node*newpart){
        if(length>MAXLENGTH){
            cout<<"overflow error"<<endl;
            return;
        }
        newpart->last=tail;
        tail=newpart;
        length++;
    
    }
    //求连分数值
    double getvalue(){
        //利用node链表的逆序结构从尾到头遍历
        Node* current;
        double frac;
        frac=tail->value;
        current=tail->last;
        while (current !=nullptr){
            frac=1/frac+current->value;
            current=current->last;
        }
        
        return frac;
    }
    //遍历每个值
    void traverse(){
        vector<int> values;
        Node*current;
        current=tail;
        while (current!=nullptr){
            values.push_back(current->value);
            current=current->last;
        }
        values.push_back(head->value);
        for (int i=length-1;i>0;i--){
            cout<<values[i]<<"+";
        }
        cout<<values[0]<<endl;
            

        

    }


};
int main(){
    Node node1(3);
    Node node2(7);
    Continue frac1(&node1);
    frac1.addnewpart(&node2);
    cout<<"value of frac1:"<<frac1.getvalue()<<endl;
    frac1.traverse();
    return 0;
}





