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
