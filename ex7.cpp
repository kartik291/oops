#include<iostream>
using namespace std;

class rectangle{
    public:

    int length,breadth;

    rectangle(int x,int y){
        length=x;
        breadth=y;

    }

    int getArea(){
        return length*breadth;
    }
};

int main(){
rectangle r1(12,10);


int area=r1.getArea();

cout<<"area of given rectangle is "<<area<<endl;
return 0;
}