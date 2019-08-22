#include "iostream"
using namespace std;

template <typename T1>
T1 max(T1 a,T1 b){
    return a>b?a:b;
}

int max(int a,int b){
    cout<<"no template..."<<endl;
    return a>b?a:b;
}

template <typename T1>
T1 max(T1 a,T1 b,T1 c){
    return a>max(b,c):a:max(b,c);
}

int main(){
    int a=0;
    int b=1;
    cout <<max(a,b)<<endl;
    cout<<max(1.0,2.0,3.0);
    return 0;
}