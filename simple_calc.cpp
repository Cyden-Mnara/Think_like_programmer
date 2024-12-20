// includind iostream
#include<iostream>

using namespace std;
double addition(double a,double b){
 return a + b;
}

double substract(double a,double b){
  return a - b;
}

int main(){
    double a,b;
    char c;

    cout<<"Enter First Number :";
    cin>>a;
    cout<<"Enter Second Number :";
    cin>>b;
    cout<<"Enter Operation + or - :";
    cin>>c;

    if(c=='+'){
        cout<<"Total is :"<<addition(a,b);
    }
    else if(c=='-'){
        cout<<"Difference is :"<<substract(a,b);
    }
    else{
        cout<<"Operation is not defined";
    }

return 0;

}