#include<iostream>
#include<typeinfo>
using namespace std;
class A
{
public:
    virtual void display() =0;
    virtual int getValue()
    {
        return 0;
    }

};

class B : public A
{
public:
    int y;
    B(int b): A() {
        y = b;
    }
    void display()
    {cout <<"B"<<endl;
    }
    int getValue()
    {
        return y;
    }
};

class C : public B
{
public:
    int z;
    C(int a, int b): B(a) {
        z = b;
    }
    ~C() {
        cout << "Derived Destructor \n" ;
    }
    int getValue()
    {
        return z;
    }
    void display()
    {cout <<"C"<<endl;
    }
};

int main()
{
    A *ptr[4];

    ptr[0] = new B(3);
    ptr[1] = new B(4);
    ptr[2] = new C(3,7);
    ptr[3] = new C(2,5);

//Add code to do the following:
//Accumulate the value of member z if the element of array ptr is a type C. Display the accumulated value. 

    int sum = 0;

    int len = sizeof(ptr)/sizeof(ptr[0]);

    for(int i = 0; i < len; i ++){

        if(C * c = dynamic_cast<C*>(ptr[i])) {

            sum += ptr[i]->getValue();

        }

    }
    cout << "sum: " << sum << endl;
}
