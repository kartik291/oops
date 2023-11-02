#include<iostream>

using namespace std;

class abc{
public:
int x;

void funct(){
    cout<<"the value of x is "<<x<<endl;
}
};

int main(){

    abc a1;
    a1.x=12;
    a1.funct();

    return 0;
}