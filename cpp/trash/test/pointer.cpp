#include <iostream>
using namespace std;
int sum(int*,int);
int main(){
    int arr[4]={1,2,3,4};
    cout<<sum(arr,4)<<endl;
    return 0;
    
}
int sum(int* arr,int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=*(arr++);
    }
    return sum;
}