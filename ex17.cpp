#include<iostream>

using namespace std;

class base{
    public:
    int x;
   virtual void print(){
        cout<<"base class printed "<<endl;
        cin>>x;
        cout<<x<<" is printed"<<endl;
    }
};
class derieved:public base{
    public:
    void print(){
        cout<<"derived class printed "<<endl;
}};

int main(){
    derieved d1;
    base *b1=&d1;
    b1->print();
    return 0;
}