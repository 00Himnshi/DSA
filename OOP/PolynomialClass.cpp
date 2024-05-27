#include<iostream>
using namespace std;

class Polynomial {
        public:

    int *degCoeff;      // Name of your array (Don't change this)
    int capacity=0;
    // Complete the class
    // public:
    Polynomial(){
        degCoeff=new int[5];
        capacity=5;
        for(int i=0;i<capacity;i++){
            degCoeff[i]=0;
        }
    }
    Polynomial(Polynomial const & p){
        degCoeff=new int[p.capacity];
        capacity=p.capacity;
        for(int i=0;i<capacity;i++){
            degCoeff[i]=p.degCoeff[i];
        }
    }
    void setCoefficient(int degree,int coef){
        if(degree<capacity){
            degCoeff[degree]=coef;
        }
        else { int newcapacity = 2 * capacity;
            while (newcapacity <= degree) {
                newcapacity *= 2;
            }
            int *newarrray = new int[newcapacity];
                for(int i=0;i<capacity;i++){
                    newarrray[i]=degCoeff[i];
                }
                for(int j=capacity;j<newcapacity;j++){
                    newarrray[j]=0;
                }
                newarrray[degree]=coef;
                delete []degCoeff;
                degCoeff=newarrray;
                capacity=newcapacity;
        }
    }
    Polynomial operator+(Polynomial p2){
        int mx=max(p2.capacity,capacity);
        Polynomial P3;
        for(int i=0;i<mx;i++){
            int totalvalue=0;
                if (i < p2.capacity && i < capacity) {
                     totalvalue = p2.degCoeff[i] + this->degCoeff[i];
                    P3.setCoefficient(i, totalvalue);
                }
                else if(i<p2.capacity){
                    totalvalue =  p2.degCoeff[i];
                    P3.setCoefficient(i, totalvalue);
                }
                else{
                    totalvalue =this->degCoeff[i] ; 
                    P3.setCoefficient(i, totalvalue);
                }
        }
        return P3;
    }
     Polynomial operator-(Polynomial p2){
        int mx=max(p2.capacity,capacity);
        Polynomial P3;
        for(int i=0;i<mx;i++){
           int totalvalue=0;
                if (i <p2.capacity && i <capacity) {
                    int totalvalue = this->degCoeff[i] - p2.degCoeff[i];
                    P3.setCoefficient(i, totalvalue);
                }
                else if(i <p2.capacity ){
                      totalvalue = - p2.degCoeff[i];
                    P3.setCoefficient(i, totalvalue);
                }
                 else{
                    totalvalue = this->degCoeff[i];
                    P3.setCoefficient(i, totalvalue);
                }
        }
        return P3;
    }
     Polynomial operator=(Polynomial const & p){
        degCoeff=new int[p.capacity];
        capacity=p.capacity;
        for(int i=0;i<capacity;i++){
            degCoeff[i]=p.degCoeff[i];
        }
        return *this;
    }
    void print(){
        for(int i=0;i<capacity;i++){
            if (degCoeff[i] != 0) {
                    cout << degCoeff[i] << "x" << i << " ";
            }
        }
    }
    Polynomial operator*(Polynomial p2){
        Polynomial P3;
        int *c=new int[capacity*p2.capacity];
        for(int k=0;k<capacity*p2.capacity;k++){
            c[k]=0;
        }
        for(int i=0;i<capacity;i++){
            for(int j=0;j<p2.capacity;j++){
                c[i+j]+=degCoeff[i]*p2.degCoeff[j];
            }
        }
        for(int f=0;f<capacity*p2.capacity;f++){
            if(c[f]!=0){
                P3.setCoefficient(f, c[f]);
            }
        }
        delete []c;
        return P3;
    }
};
int main()
{
    int count1,count2,choice;
    cin >> count1;
    
    int *degree1 = new int[count1];
    int *coeff1 = new int[count1];
    
    for(int i=0;i < count1; i++) {
        cin >> degree1[i];
    }
    
    for(int i=0;i < count1; i++) {
        cin >> coeff1[i];
    }
    
    Polynomial first;
    for(int i = 0; i < count1; i++){
        first.setCoefficient(degree1[i],coeff1[i]);
    }
    
    cin >> count2;
    
    int *degree2 = new int[count2];
    int *coeff2 = new int[count2];
    
    for(int i=0;i < count2; i++) {
        cin >> degree2[i];
    }
    
    for(int i=0;i < count2; i++) {
        cin >> coeff2[i];
    }
    
    Polynomial second;
    for(int i = 0; i < count2; i++){
        second.setCoefficient(degree2[i],coeff2[i]);
    }
    
    cin >> choice;
    
    Polynomial result;
    switch(choice){
            // Add
        case 1:
            result = first + second;
            result.print();
            break;
            // Subtract
        case 2 :
            result = first - second;
            result.print();
            break;
            // Multiply
        case 3 :
            result = first * second;
            result.print();
            break;
            
        case 4 : // Copy constructor
        {
            Polynomial third(first);
            if(third.degCoeff == first.degCoeff) {
                cout << "false" << endl;
            }
            else {
                cout << "true" << endl;
            }
            break;
        }
            
        case 5 : // Copy assignment operator
        {
            Polynomial fourth(first);
            if(fourth.degCoeff == first.degCoeff) {
                cout << "false" << endl;
            }
            else {
                cout << "true" << endl;
            }
            break;
        }
            
    }
    
    return 0;
}
