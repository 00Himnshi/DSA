#include<iostream>
using namespace std;
class Fraction{
    private:
    int numerator;
    int denominator;
    public:
    Fraction(int numerator,int denominator){
this->numerator=numerator;
this->denominator=denominator;
    }
    void simplify(){
int gcd=1;int m=min(numerator,denominator);
for(int i=1;i<=m;i++){
    if(numerator%i ==0 && denominator%i==0){
        gcd=i;
    }
}
numerator=numerator/gcd;
    denominator=denominator/gcd;
    }
    void add(Fraction &f2){
        this->numerator=((this->numerator)*f2.denominator)+(f2.numerator*(this->denominator));
        this->denominator=f2.denominator*(this->denominator);
    simplify();
    }
    void print(){
        cout<<numerator<<"/"<<denominator<<endl;
    }
};
int main(){
    Fraction f1(1,5);
    f1.print();
    Fraction f2(2,5);
    f2.print();
    f1.add(f2);
    f1.print();
}