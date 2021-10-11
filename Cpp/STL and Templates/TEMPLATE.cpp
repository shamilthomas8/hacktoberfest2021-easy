#include<iostream>
using namespace std;
template <class T>
class Arithematic
{
private:
    T a;
    T b;
public:
    Arithematic(T a, T b);
    T add();T sub();
};

template <class T>
Arithematic <T>::Arithematic(T a, T b)

{
    this->a=a;
    this->b=b;

}
template <class T>
T Arithematic <T>::add()

{
    T c;
    c=a+b;
    return c;

}
template <class T>
T Arithematic <T>::sub()

{
    T c;
    c=a-b;
    return c;

}
int main()
{
    Arithematic <int> ar(10,5);
    cout<<ar.add()<<endl;
    Arithematic <float> ar1(10.5,5.6);
    cout<<ar1.sub()<<endl;
}
