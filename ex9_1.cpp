#include<iostream>
using namespace std;

class wall{
    private:
    double length;

    public:
// default constructor
    wall(){
        length=5.5;

    }
    void display(){
cout<<"the length of the wall is "<<length<<endl;
    }
};

int main(){
    wall w1;
    
    w1.display();
    return 0;
}