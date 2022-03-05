#include<iostream>

using namespace std;

class addamount{
    int balance=50;
    public:
        addamount(){
            cout<<"default constructor called"<<endl;
        }

        addamount(int add){
            cout<<"parameterized constructor called"<<endl;
            balance+=add;
        }

        void display(){
            cout<<"available amount: "<<balance<<endl;
        }
};

int main(){
    addamount amo1;
    amo1.display();

    addamount amo2(50);
    amo2.display();

    return 0;
}
