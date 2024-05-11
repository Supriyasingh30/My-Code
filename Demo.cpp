#include<iostream>
using namespace std;

//Lecture 1: Data Types & Type Modifiers
/*int main()
{
int a;
a=12;
cout<<"size of int "<<sizeof(a)<<endl;
float b;
cout<<"size of float "<<sizeof(b)<<endl;
char c;
cout<<"size of char "<<sizeof(c)<<endl;
bool d;
cout<<"size of bool "<<sizeof(d)<<endl;
short int si;
long int li;
cout<<"size of shortint "<<sizeof(si)<<endl;
cout<<"size of longint "<<sizeof(li)<<endl;
return 0;
}*/


//Lecture 2: input/output
/*int main(){
 int amount1;
 cin>>amount1;
 int amount2;
 cin>>amount2;
 int sum= amount1 + amount2;
 cout<<sum<<endl;
    return 0;
}*/

//Lecture 3: if/else statement

/*int main()
{
int pocketmoney;
cout<<"Enter Your Pocket Money Ammount:";
cin>>pocketmoney;
if(pocketmoney>=5000){
    if(pocketmoney>10000){
        cout<<"Starbucks and roadtrip"<<endl;
    }else{
        cout<<"Starbucks"<<endl;
    }
}else if(pocketmoney>=2000 && pocketmoney<5000){
    cout<<"Streat Food"<<endl;
}else{
    cout<<"Ghar ka khana kha budget nahi hai tere pas"<<endl;
}
    return 0;
}*/

//Findind Maximum between three integers
/*int main()
{
int a, b, c;
cout<<"Enter any three integers:";
cin>>a>>b>>c;
if(a>=b && a>=c){
    cout<<a<<endl;
}else if(b>=a && b>=c){
    cout<<b<<endl;
}else{
    cout<<c<<endl;
}
    return 0;
}*/

//Finding odd/even
/*int main()
{
int n;
cin>>n;
if(n%2==0){
    cout<<"Even"<<endl;
}else{
    cout<<"Odd"<<endl;
}
    return 0;
}*/

//Lecture 4: Loops
//For Loop
/*int main()
{
    int n;
    cout <<"Enter an integer:";
    cin>>n;
   int sum=0;
for(int counter=1; counter<=n;counter++){
    sum=sum+counter;
}
cout <<"Sum of " <<n<< " consecutive integers is " <<sum<<endl;
    return 0;
}*/

//While Loop(In this loop jab tak condition is true tab tak loop chalta rahega otherwise terminate ho jayega)
/*int main()
{
    int n;
    cin>>n;
    while(n>0){
        cout<<n<<endl;
        cin>>n;
    }
    return 0;
}*/

//Do While(isme condition false hone ke baad bhi kam se kam ek bar to output aayega lekin while loop me condition false hone par direct output terminate ho jayega)
/*int main(){
int n;
cin>>n;
do{
    cout<<n<<endl;
    cin>>n;
}while(n>0);

    return 0;
}*/

//Lecture 5: Break and Continuous(These two jump statements are used when we want to control the flow of loops on meeting some specific condition)
//Cntinuous:It is used to skip the next iteration of the loop.
//Break: This statement is used to terminate the loop.

/*int main(){
int pocketmoney=3000;
for(int date=1; date<=30; date++){
    if(date%2==0){
        continue;     //Matlab even days par bahar nahi jana hai
    }if(pocketmoney=0){
        break;     //No pocketmoney no bahar
    }
    cout<<"Go out today!"<<endl;
    pocketmoney=pocketmoney-300; //Har din bahar jane par 300 ka deduction from pocketmoney
}
    return 0;
}*/

//Print numbers from 1 to 100 skipping those divisible by 3:
/*int main(){
    for (int i=1; i<=100; i++){
        if(i%3==0){
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}*/

//Check if a given number is prime or not(n will not be a prime if it is divisible by the number ranging from 2 to n-1)
/*int main(){
int n;
cin>>n;
int i;
for(int i=2;i<=n;i++){
    if(n%i==0){
        cout<<"Non Prime"<<endl;
        break;
    }
    if(i=n){
        cout<<"Prime"<<endl;
    }
}
    return 0;
}*/

//Find all the prime no between two numbers

int main(){
int a, b;
cin>>a>>b;
for(int num=a;num<=b;num++){
    int i;
    for(i=2;i<num;i++){
        if(num%i==0){
            break;
        }
    }
    if(i==num){
        cout<<num<<endl;    
        }
}
    return 0;
}

