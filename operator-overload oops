#include<iostream>
using namespace std;

class demo{
    int a;
    public:
        demo(){
            a=0;
        }
        void set_data(){
            cout<<"Enter value: ";
            cin>>a;
        }
        void get_data(){
            cout<<"The value: "<<a<<endl;
        }
        demo operator+(demo bb){
            demo cc;
            cc.a=a+bb.a;
            return cc;
        }

};

int main(){
    demo aa,bb,cc;
    aa.set_data();
    bb.set_data();
    aa.get_data();
    bb.get_data();
    cc=aa+bb;
    cout<<"After adding two objects"<<endl;
    cc.get_data();

    return 0;
} 
