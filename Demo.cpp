#include<iostream>
//#include<cmath>    //HEADER FILES
#include<math.h>
using namespace std;

//Lecture 1: Data Types & Type Modifiers
/*int main()
{
int a = 'a';

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
    cout<<"Let's cook something special at home"<<endl;
}
    return 0;
}*/

//Find Maximum for three numbers
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
/*int main(){
int a;
cout<<"ENter a number till which you want to repeat the sentence:";
cin>>a;
for(int i=0;i<=a;i++){
    cout<<"Hare Krishna"<<endl;
}
    return 0;
}*/


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

/*int main(){
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
}*/


//LECTURE 3.2: Switch Case statement
//without using it:

/*int main(){
string lang;
cout<< "Enter a language:";
cin>>lang; 
if(lang=="Hindi" || lang=="hindi" || lang=="HINDI"){
cout<<"Namaste"<<endl;
}
else if(lang=="French" || lang=="french" || lang=="FRENCH"){
cout<<"Bonjour"<<endl;
}
else if(lang=="English" || lang=="english" || lang=="ENGLISH"){
cout<<"Hello"<<endl;
}
else if(lang=="Spanish" || lang=="spanish" || lang=="SPANISH"){
cout<<"Hola"<<endl;
}
else if(lang=="German" || lang=="german" || lang=="GERMAN"){
cout<<"Hallo"<<endl;
}
else if(lang=="Italian" || lang=="italion" || lang=="ITALION"){
cout<<"Ciao"<<endl;
}
else {
    cout<<"I'm still learning this language"<<endl;
}

return 0;
}*/

//USING SWITCH CASE STAT:
/*int main(){
cout<<"a= Hindi"<<endl;
cout<<"b= English"<<endl;
cout<<"c= French"<<endl;
cout<<"d= German"<<endl;
cout<<"e= Spanish"<<endl;
cout<<"f= Italion"<<endl;
    char button;
    cout<<"Enter a character:";
    cin>>button;

    switch(button){
        case 'a':
        cout<<"Namaste"<<endl;
        break;
        case 'b':
        cout<<"Hello"<<endl;
        break;
        case 'c':
        cout<<"Bonjour"<<endl;
        break;
        case 'd':
        cout<<"Hallo"<<endl;
        break;
        case 'e':
        cout<<"Hola"<<endl;
        break;
        case 'f':
        cout<<"Ciao"<<endl;
        break;
        default:
        cout<<"I'm still learning this language"<<endl;
    }
    return 0;
}*/

//LECTURE 3.3: Operators
//1.Arithmetic operator: Binary and unary op
//pre increment/decrement, post increment/decrement
/*int main(){
int i=15, j=24, k;
//  15    14     23    14   23    15     22
k = i-- - i++ + --j - --i - j-- + ++i - j++;
cout<<i<<endl; // 14 then 15 then 14 final 15
//final value of i, j & k is taken
cout<<j<<endl;// 23 then 22 final 23
cout<<k<<endl; //-20
    return 0;
}*/

// write a program to output whether a number is divisible by both 2 and 3 or divisible by only one of them

/*int main(){
int n;
cout<<"Enter a number:";
cin>>n;
if(n%2==0 &&  n%3==0){
    cout<<"Divisible by both"<<endl;
}else if(n%2==0){
    cout<<"Divisible by 2"<<endl;
}else if(n%3==0){
    cout<<"Divisible by 3"<<endl;
}else{
    cout<<"Divisible by none"<<endl;
}
    return 0;
}*/

//LECTURE 4.1: Pattern Questions
//1.RECTANGLE PATTERN
/*int main(){
int row;
cout<<"Enter number of rows:";
cin>>row;
int col;
cout<<"Enter number of columns:";
cin>>col;
for(int i=1; i<=row; i++){
    for(int j=1;j<=col;j++){
cout<<"*";
    }
    cout<<endl;
}
    return 0;
}*/

//2.HOLLOW RECTANGLE PATTERN
/*int main(){
int row;
cout<<"Enter number of rows:";
cin>>row;
int col;
cout<<"Enter number of columns:";
cin>>col;
for(int i=1;i<=row;i++){
    for(int j=1;j<=col;j++){
        if(i==1 || i==row){
            cout<<"*";
        }else if(j==1 || j==col){
            cout<<"*";
        }else{
        cout<<" ";
        }
    }
    cout<<endl;
}
    return 0;
}*/

//3.INVERTED HALF PYRAMID
/*int main(){
int n;
cin>>n;
for(int i=n;i>=1;i--){
    for(int j=1;j<=i;j++){
        cout<<"*";
    }
    cout<<endl;
}
    return 0;
}*/

//4.HALF PYRAMID AFTER 180 ROTATION
/*int main(){
int n;
cin>>n;
for(int i=1;i<=n;i++){  //it defines no of rows
    for(int j=1;j<=n;j++){ //har rows mein kuchh na kuchh print ho raha hoga
        if(j<=n-i){
            cout<<"  "; //yaha ek jyada space hai
        }else{
            cout<<"* "; //if space is not added in the above syntax but in this then triangle ban jayega
        }
    cout<<endl;
}
return 0;
}*/

//5.HALF PYRAMID USING NUMBERS
/*int main(){
int n;
cin>>n;
for(int i=1;i<=n;i++){ //Loops for rows
for(int j=1;j<=i;j++){
    cout<<i<<" ";
}
cout<<endl;
}
return 0;
}*/

//6.FLOYD'S PATTERN
/*int main(){
int n;
cin>>n;
int count=1;
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){ //Loops for rows
   cout<<count<<" ";
   count++;
    }
    cout<<endl;
}
return 0;
}*/

//7.BUTTERFLY PATTERN (Good one)
/*int main(){
int n;
cin>>n;
for (int i=1;i<=n;i++){  //rows
    for(int j=1;j<=i;j++){ //col
        cout<<"* ";
    }
    int space=2*n-2*i;
    for(int j=1;j<=space;j++){
        cout<<"  ";
    }
    for(int j=1;j<=i;j++){
  cout<<"* ";
    }
    cout<<endl;
}
for (int i=n;i>=1;i--){  //rows
    for(int j=1;j<=i;j++){ //col
        cout<<"* ";
    }
    int space=2*n-2*i;
    for(int j=1;j<=space;j++){
        cout<<"  ";
    }
    for(int j=1;j<=i;j++){
  cout<<"* ";
    }
    cout<<endl;
}
return 0;
}*/


//LECTURE 4.2:ADVANCED PATTERN PROBLEM
//1.INVERTED PATTERN
/*int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/
  
  //2.0-1 PATTERN
  /*int main(){
int n;
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        if((i+j)%2==0){
            cout<<" 1";
        }else{
            cout<<" 0";
        }
    }
    cout<<endl;
}
return 0;
  }*/

//3.RHOMBUS PATTERN
/*int main(){
int n;
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++){ //loops for space
        cout<<"  ";
    }
    for(int j=1;j<=n;j++){
        cout<<"* ";
    }
    cout<<endl;
}
return 0;
}*/

//4.TRIANGULAR NUMBER PATTERN
/*int main(){
int n;
cin>>n;
 for(int i=1;i<=n;i++){ //loops for rows
    for(int j=1;j<=n-i;j++){
     //loops for space in column
    cout<<" ";
 }
 for(int j=1;j<=i;j++){ //loops for numbers in col
cout<<j<<" " ;
 }
 cout<<endl;
 }
 return 0;
}*/

//5.PALINDROMIC PATTERN(Good one) thoda kam samajh aaya
/*int main(){
int n;
cin>>n;
for(int i=1;i<=n;i++){
    int j;
    for(j=1;j<=n-i;j++){
        cout<<"  ";
    }
    int k=i;
    for(;j<=n;j++){
        cout<<k--<<" ";
    }
    k=2;
    for(;j<=n+i-1;j++){
        cout<<k++<<" ";
    }
    cout<<endl;
}
    return 0;
}*/

//6.STAR PATTERN
/*int main(){
int n;
cin>>n;
for(int i=1;i<=n;i++){ //loops for rows
for(int j=1;j<=n-i;j++){ //loops for space
cout<<"  ";
}
for(int j=1;j<=2*i-1;j++){ //loops for stars
    cout<<"* ";
}
cout<<endl;
}
for(int i=n;i>=1;i--){ //loops for rows in inverted
for(int j=1;j<=n-i;j++){ //loops for space in inverted
cout<<"  ";
}
for(int j=1;j<=2*i-1;j++){ //loops for stars inverted
    cout<<"* ";
}
cout<<endl;
}
return 0;
}*/

//7.ZIG-ZAG PATTERN(Good one)
/*int main() {
int n;
cin>>n;
for(int i=1;i<=3;i++){
    for(int j=1;j<=n;j++){
        if((i+j)%4==0 || (i==2 && j%4==0)){
            cout<<"* ";
        } else{
            cout<<"  ";
        }
    }
    cout<<endl;
}
    return 0;
  }*/     

//LECTURE 6.1: Functions
//Using function identify whether a number is prime or not
/*int main(){
int n;
cin>>n;
bool flag=0;
for(int i=2;i<=sqrt(n);i++){
    if(n%i==0){
        cout<<"Non-Prime"<<endl;
        flag=1;
        break;
    }                    //sqrt is a function
}
if(flag==0){
    cout<<"Prime"<<endl;
}
    return 0;
}*/

//REVERSE A NUMBER
/*int main(){
    int n;
    int reverse=0;
    cin>>n;
    while(n>0){
 int lastdigit= n%10;
 reverse = reverse*10 + lastdigit;
 n=n/10;
    }
    cout <<reverse<<endl;

    return 0;
}*/

// Identify whether a number is Armstrong no. or not
/*int main(){
    int n;
    cin>>n;
    int sum=0;
    int originaln=n;
    while(n>0){
        int lastdigit=n%10;
        sum+= pow(lastdigit,3);  //pow() is a function which is used to find power on a number
  n=n/10;
    }
    if(sum==originaln){
        cout<<"Armstrong Number"<<endl;
    } 
    else{
        cout<<"Not Armstrong Number"<<endl;
    }
    return 0;
}*/
































































































































































































































































