#include <iostream>
using namespace std;
class basic1{
    int a;
    public:
    basic1(int x){
        a=x;
    }
    void print1(){
    cout<<a<<endl;
    }
};
class basic2{
    int b,c;
    public:
    basic2(int x,int y){
        b=x;
        c=y;
    }
    void print2(){
    cout<<b<<"\t"<<c<<endl;
    }
};
class derivative:public basic1,public basic2{
    int e,f;
    public:
    derivative(int z,int t):basic1(z),basic2(z,t){
        e=z;
        f=t;
    }
    void print3(){
    	cout<<e<<"\t"<<f;
	}
};
int main(){
    derivative print(10,15);
    print.print1();
    print.print2();
    print.print3();
    return 0;
}


