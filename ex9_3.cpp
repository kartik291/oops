#include<iostream>
using namespace std;

class rect{
    private:
    int l,b;

    public:

    rect(int x,int y){
        l=x;
        b=y;
    }

    void display(){
        cout<<"Length = "<<l<<endl;
        cout<<"Breadth = "<<b<<endl;
    }
};

int main(){
    rect r1(12,13);
    r1.display();
return 0;    
}