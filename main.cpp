#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
/**********
author：崔辉
***********/
int mysqrt(int a){
    return sqrt(a);
}
int divFun(int a, int b){
    if(b == 0){
        cout<<"error"<<endl;
        return 0;
    }
    else
        return a/b;
}
int plus(int a,int b)
{
    return a+b;
}

int sub(int a, int b)
{
    return a-b;
}
void  show(){
   cout<<"hello"<<endl;
}
