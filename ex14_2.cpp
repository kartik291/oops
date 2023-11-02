#include<iostream>

using namespace std;
class ab{
    public:
    void show(){
        cout<<"amazing"<<endl;
    }
};

class bc:public ab{
    public:
    void sho2w(){
        cout<<"beautiful"<<endl;
    }
};
class cd:public bc{
    public:
    void sho3w(){
        cout<<"hurray"<<endl;
    }
};

int main(){
    ab a1;
    bc b2;
    cd c3;
    c3.sho2w();
    c3.sho3w();
    c3.show();

    return 0;
}