#include<iostream>

using namespace std;

class sample{
    private:
    int age;

    public:

    void displayAge(int a){
        age=a;
        cout<<"age is "<<age<<endl;

    }
};

int main(){
    sample s1;
s1.displayAge(24);
    
}