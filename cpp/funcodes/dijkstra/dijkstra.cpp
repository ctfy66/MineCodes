#include <iostream>
#include<climits>
using namespace std;
int inputvalue(){
    int value;
    do{
    cout<<"请输入一个正整数："<<endl;
    cin>>value;
    }while(value<0);
    return value;
}
class dijkstra
{
    private:
    int** data; //指向整数数组的指针
    int size;
    public:
    dijkstra(int size){
        this->size=size;
        data=new int*[size];//初始化指向size个数组的指针
        for(int i=0; i<size; i++){
            data[i]=new int[size];//创建size个大小为size的数组
            for(int j=0; j<size; j++){
                data[i][j]=inputvalue();//利用inputvalue函数给数组赋值

            }

        }
    }
    ~dijkstra(){
        for (int i=0;i<size;i++){
            delete[] data[i];//删除每个子数组
        }
        delete[] data;//删除指向子数组的指针
    }
    //打印修改后的数组
    void print(){
        for(int i=0; i<size; i++){
            for(int j=0; j<size; j++){
                cout<<data[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    //利用dijkstra算法求解
    void algorithm(){
        for(int i=0; i<size; i++){
            //用来标记已经找到最短距离的点
            bool* found=new bool[size];            
            //初始化标记数组
            for (int n=0;n<size;n++){
                if (n==i){
                    found[n]=true;
                    }
                else{
                        found[n]=false;
                    }
            }
            
            //找出i点到其他各点的最短距离
            for(int num=1;num<size;num++){
                         
                //找出距离i点最近的点
                int min =10000;
                int row=0;
                //比较i航中最小距离
                for(int j=0;j<size;j++){
                    if (min>data[i][j]&&!found[j]){
                        min=data[i][j];
                        row=j;
                    }
                }
                //找出最近点j,然后修改数组
                for (int m=0;m<size;m++){
                    if (min+data[row][m]<data[i][m])
                    data[i][m]=min+data[row][m];
                }
                //标记已经找到的点
                found[row]=true;
                
                                 
                
            }
        delete[] found;
        }
    }
};

int main()
{
    int number;
    cout<<"输入点的个数"<<endl;
    do{
        cin>>number;
    }while(number<1);
    dijkstra obj(number);
    obj.algorithm();
    obj.print();
    return 0;
}