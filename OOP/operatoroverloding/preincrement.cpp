#include<iostream>
using namespace std;
class Fraction{
private:
    int denominator;
    int numerator;
public:

    void simplify(){
        int j=min(numerator,denominator);int gcd=1;
        for(int i=1;i<=j;i++){
            if(numerator%i==0 && denominator%i==0){
gcd=i;
            }
        }
        numerator=numerator/gcd;
        denominator=denominator/gcd;
    }
    Fraction(int numerator,int denominator){
        this->numerator=numerator;
        this->denominator=denominator;
    }
    Fraction & operator++(){
        numerator=numerator+denominator;
        simplify();
        return (*this);
    }
    void print(){
        cout<<numerator<<"/"<<denominator<<endl;
    }
};
int main(){
    Fraction f1(1,2);
    f1.print();
    Fraction f3=++f1;
    f3.print();
    f1.print();
    
}