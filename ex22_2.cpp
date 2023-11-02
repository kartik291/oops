// factory design pattern 
#include<iostream>

using namespace std;

class animal{
    public:
    virtual void speak()=0;

    static animal*createani(int type);
};

class dog:public animal{
    public:
    void speak(){
        cout<<"woff"<<endl;
    }
};

animal *animal::createani(int type){
    if(type==1){
        return new dog();
    }
    else{
        return nullptr;
    }
}

int main(){
    animal *dog1=animal::createani(1);
    dog1->speak();

    return 0;
}