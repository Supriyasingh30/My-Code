#include<iostream>
//#include<cmath>    //HEADER FILES
#include<String>
//#include<math.h>
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
    cout<<i<<endl;
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

//Mathematics in c++
//Factorial of a number
/*int main(){
long n;
cin>>n;
long ans=1;
for(int i=1;i<=n;i++) {  //this will give n, n-1, n-2 and so on start hoga from n-n, n-(n-1)
//for(int i=n;i>=1;i--) ye bhi use kar sakte hain then start hoga from n
ans=ans*i;               // through this n*n-1*n-2 and so on
}
if(n<0){
    cout<<"No factorial for negative numbers"<<endl;
}else{
    cout<<"Factorial of " <<n<< " is " <<ans<<endl;
}
    return 0;
}*/

//FIBONACCI SERIES(0, 1, 1, 2, 3, 5, 8, 13, 21....)
/*int main(){
int n;
cout<<"Enter  the No. of Fibonacci terms: ";
cin>>n;
int a=0, b=1, c;
cout<<a<<" "<<b<<" ";
for(int i=2; i<n;i++){

c = a + b;
cout<<c<<" ";
a=b;
b=c;
}
cout<<endl;
    return 0;
}*/


//LECTURE 6.2:
//Find Factorials of any two given numbers without use of function and it's a prolonged process
/*int main(){
int n1,n2;
cin>>n1>>n2;
int ans1=1;

for (int i=1;i<=n1;i++){
ans1 = ans1*i;
}
if(n1<0){
    cout<<"No Factorial for negative numbers"<<endl;
}else{
    cout<<"Factorial of " <<n1<< " is " <<ans1<<endl;
}
int ans2=1;
for (int j=1;j<=n2;j++){
ans2 = ans2*j;
}
if(n2<0){
    cout<<"No Factorial for negative numbers"<<endl;
}else{
    cout<<"Factorial of " <<n2<< " is " <<ans2<<endl;
}
    return 0;
}*/

//Arrays Introduction 
//1-D Array
/*int main(){
int arr[10];
for (int i=0;i<10;i++){
    cin>>arr[i];  //input array
}cout<<endl;
 for (int i=0;i<10;i++){
    cout<<arr[i]<<" ";   //output array
}cout<<endl;
    return 0;
}*/

//2-D ARRAY
/*int main(){
int arr[5][5];
for(int i=0;i<5;i++){   //Loops for rows
    for(int j=0;j<5;j++){  //Loops for Column
        cin>>arr[i][j];
    }
}
cout<<endl;
for(int i=0;i<5;i++){   //Loops for rows
    for(int j=0;j<5;j++){  //Loops for Column
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

    return 0;
}*/


//FUCTIONS

/*void pattern(){  // Void function me hame value return nahi karna hota hai
    int n;
    cout<<"Enter Number Of Rows: ";
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){   //Now if we want to print more than one pattern at a time, we can do this without writing the same codes with the help of function
        cout<<"* ";
    }
    cout<<endl;
}
}
int main(){
pattern();
pattern();
pattern();
pattern();
    return 0;
}*/

/*int power(int no, int pow){
    int ans=1;
    for(int i=0;i<pow;i++){
        ans = ans*no;
    }
    return ans;
}
int main(){
int n, p, answer;
cout<<"Enter No. : ";
cin>>n;
cout<<"Enter Power : ";
cin>>p;
cout<<"Answer is : "<<pow(n,p)<<endl;
    return 0;
}*/

//integer return type function
/*int factorial(int n){
    int ans=1;
    for(int i=n;i>=1;i--){
        ans *= i;
    }
    return ans;
}
int main(){
int n;
cout<<"Enter a Number For Factorial: ";
cin>>n;
cout<<n<<"!" <<" is " <<factorial(n)<<endl;
    return 0;
}*/

//Float return type function
/*float division(float dividend, float divisor){
    float ans;
    ans = dividend/divisor;
    return ans;
}
int main(){
float dividend, divisor;
cout<<"Enter a Dividend: ";
cin>>dividend;
cout<<"Enter a Divisor: ";
cin>>divisor;
cout<<dividend<< "/" <<divisor << " : " <<division(dividend, divisor)<<endl;
    return 0;
}*/

//Character return type Function
 /*char firstcap(char arr[10], int n){
    for (int i=0;i<n;i++){
        if(arr[i]>='A' && arr[i]<='Z')
        return arr[i];
    }
 }
 int main(){
int n=10;
char arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
    cout<<"First Capital Character is : "<<firstcap(arr, n)<<endl;

    return 0;
 }*/

//Bool return type function
/*bool isPrime(int n){
    if(n<=2){
        return true;
    }
    for(int i=2;i*i<n;i++){
        if(n%i==0)
            return false;
        
    }
    return true;
}
int main(){
int no;
cout<<"Enter a number to check whether it's prime or not: ";
cin>>no;
if(isPrime(no)){
    cout<<no<<" is a Prime Number"<<endl;
}
else{
    cout<<no<<" is a Non-Prime Number"<<endl;
}
    return 0;
}*/                      

//Function (a)Call by Value
/*void change(int no){
    no=no*no;
    cout<<"Value of function is "<<no<<endl;
}

int main(){
int n;
cout<<"Enter a value:";
cin>>n;
change(n);
cout<<"Value in main is "<<n<<endl;   
    return 0;
}*/

  /*void swap(int A, int B){
    int ans=A;
   A=B;
   B=ans;
   cout<<"A :"<<A<<endl<<"B :"<<B<<endl;
  }


int main(){
    int x=200, y=400;
    swap(x, y);
    cout<<"X : "<<x<<endl<<" Y :"<<y<<endl;
    return 0;
}*/


//Function (b)Call by Reference
/*void change(int &no){
    no=no*no;
    cout<<"Value of function is "<<no<<endl;
}

int main(){
int n;
cout<<"Enter a value:";
cin>>n;
change(n);
cout<<"Value in main is "<<n<<endl;   
    return 0;
}*/

/*void swap(int &A, int & B){
    int ans=A;
   A=B;
   B=ans;
   cout<<"A :"<<A<<endl<<"B :"<<B<<endl;
  }


int main(){
    int x=200, y=400;
    swap(x, y);
    cout<<"X : "<<x<<endl<<" Y :"<<y<<endl;
    return 0;
}*/

//Object Oriented Programming System(OOPs)
//1.CLASS & OBJECT

/*class laptop
{
   public: 
    string name;
    string brand;   //These are attributes of class
    float price;
    string processor;

    void getdata()
    {
        cout<<"Name: ";
        cin>>name;
        cout<<"Brand: ";
        cin>>brand;
        cout<<"Price: ";
        cin>>price;
        cout<<"Processor: ";
        cin>>processor;

    }
    void showdata() //Function of class
    {
        cout<<"Name of the Laptop is "<<name<<endl;
        cout<<"Brand of the Laptop is "<<brand<<endl;
        cout<<"Price of the Laptop is "<<price<<endl;
        cout<<"Processor of the Laptop is "<<processor<<endl;
    }
 void startUp()  // These are member function of class
 {
    cout<<"Laptop "<<name<<" has started;"<<endl;
 }
 void shutDown()
 {
    cout<<"Laptop "<<name<<" is shutting Down;"<<endl;
 }

};

int main()
{
  laptop laptop1;  //This is object of class laptop
   laptop1.getdata();
   laptop1.showdata();
   laptop1.startUp();
   laptop1.shutDown();
    return 0;
}*/

//Function overloading
/*void run()
{
    cout<<"Run is running"<<endl;
}
void run(int a)
{
    cout <<"Run with int "<<a<<" is running"<<endl;
}
void run(char a)
{

}
void run(int a, int b)  //these are function overloading, we can differentiate these on the basis of their respective parameters
{

}
void run(char a, int b){
}

int main()
{
run();
run(5);
    return 0;
}*/

//Function overloading in class
/*class laptop
{
public:
string name;
int processor;
void run()
{
cout<<"Void run is running"<<endl;
}
void run(int a)
{
cout<<"int "<<a<<" is running"<<endl;
}
};
int main()
{
    laptop laptop1;
    laptop1.run();
    laptop1.run(5);

    return 0;
}*/

//Constructor
 /*class laptop
{
    public :
      string name;
      float price;
      
      laptop()  //This is constructor class ke naam pe hi contructor hota hai
      {
        //strcpy (name, "Dell");
        name = "Dell";
        price = 100.0;
        cout<<"Name : "<<name<<endl<<"Price : "<<price<<endl;
      }

};          
int main()           
{        
    laptop l;          //This is object   
    return 0;         //we can see here yahan koi function call nahi kiye sirf object define hua hai
}*/

// Default constructor, Parameterised constructor and copy constructor
/*class laptop
{
    public :
      string name;
      float price;

//Default Constructor
      laptop()  
      {
        cout<<"Name : "<<name<<endl<<"Price : "<<price<<endl;
      }
      
      //Parameterised Constructor
      laptop(string lname, float lprice) 
      {
        name = lname;
        price = lprice;
        cout<<"Name : "<<name<<endl<<"Price : "<<price<<endl;
      }

      //Copy consructor
      laptop(const laptop &p)   
      {
        name = p.name;
        price = p.price+200.82;
        cout<<"Name : "<<name<<endl<<"Price : "<<price<<endl;
      }

      //DESTRUCTOR (iska overloading nahi hota aur last wale object se starting tak output show karega)
   ~laptop()  
    {
        cout<<"Destructing "<<price<<endl;
    }

}; 
         
int main()           
{        
    laptop l;
    laptop m("Dell", 100.0);   
    laptop n = m;       
    return 0;        
}*/

//INHERITANCE

//(a) Single Inheritance
//(b) Multiple inheritance
/*class gamingLaptop
{
public :
gamingLaptop()
{
cout<<"Base Class 1 is called"<<endl;
}
};
class laptop   //BASE CLASS
{
    public :
    string name;
    float price;

    laptop()   //BASE CLASS'S CONSTRUCTOR
    {
        cout<<"Base Class 2 Called"<<endl;
    }
};
  
  class mylaptop : public laptop, public gamingLaptop    //DERIVED CLASS
  {
    public :
      string name;
      int vram;

      mylaptop()     //DERIVED CLASS'S CONSTRUCTOR
      {
        cout<<"Derived Class Called"<<endl;
      }
  };

int main()
{
  mylaptop lap1;
    return 0;
}*/

//(c) Multi-Level Inheritance
/*class laptop   //BASE CLASS
{
    public :
    string name;
    float price;

    laptop()   //BASE CLASS'S CONSTRUCTOR
    {
        cout<<"Base Class Called"<<endl;
    }
};

class gamingLaptop : public laptop   //Derived class 1
{
public :
gamingLaptop()
{
cout<<"Derived Class 1 is called"<<endl;
}
};

  class gamingSystem : public gamingLaptop  //Derived class 2
  {
    public :
 gamingSystem()
 {
    cout<<"Derived class 2 is called"<<endl;
 }
  };
  

int main()
{
  gamingSystem lap1;
    return 0;
}*/






























































































































































































































