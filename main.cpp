#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    return 0;
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
