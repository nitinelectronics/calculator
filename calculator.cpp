#include <iostream>
using namespace std;
double pow(double b ,double a){
    double res=a;
    for(int i=1;i < b;i++){
        res=res*a;
        }return res;}
        double fact(int c){
    int result=1;
    for(int j=1;j<=c;j++){
        result=result*j;
        
    }return result;
}double sin(double deg){
    double x;
    x=deg*3.14159265/180;
    double result=0;
    for(int k=1, y=1;k<10;k=k+2,y++){
        result=result+(pow(y+1,-1)*pow(k,x))/fact(k);
        
        }return result;}
    double cos(double deg){
    double x;
    x=deg*3.14159265/180;
    double result=1;
    for(int k=2,y=1;k<26;k=k+2,y++){
        result=result+pow(y,-1)*pow(k,x)/fact(k);
    }return result;}
    double tan(double deg){
        double result;
        result=sin(deg)/cos(deg);
        return result;
    }
    

int main(){
    double num1, num2, result;
    char op;
    result=num2;
    char ch;
    cout<<"do you want to use trigonmetric function i.e. sin,cosine,tan(answer in y/n) : ";
    cin>>ch;
    int f;
    if(ch=='y'){
        cout<<"enter 1 for sin, 2 for cos, 3 for tan : ";
        cin>>f;
        if(f==1){
    double p;
    cout<<"enter angle : ";
    cin>>p;
    cout<<"sin of angle is : "<<sin(p);
        }
        else if(f==2){
            double q;
            cout<<"enter angle : ";
            cin>>q;
            cout<<"cos of angle is : "<<cos(q);

        }else if(f==3){
            double w;
            cout<<"enter angle : ";
            cin>>w;
            cout<<"tan of angle is : "<<tan(w);
        }}

     else if(ch=='n'){

      
    
    cout<<"enter number 1 : ";
    cin>>num1;
    cout<<"enter the operator(input r for finding previous number raised to successive number or put operators like +,-,*,/) : ";
    cin>>op;
    cout<<"enter number 2 : ";
    cin>>num2;
    if(op=='+'){
       cout<<"the sum is "<<num1+num2;
    }else if(op=='-'){
        cout<<"the subtraction of second from first number is : "<<num1-num2;
    }else if(op=='*'){
        cout<<"the multiplication of the numbers is : "<<num1*num2;
    }else if(op=='/'){
        cout<<"the divison of first number by second nmber is : "<<num1/num2;
    }else if(op=='r'){
        cout<<"first number raised to second number is : "<<pow(num1,num2);
    }else {
        cout<<"please enter the correct operator";
        }
        return 0;}}