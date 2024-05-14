#include <iostream>
#include <cmath>
using namespace std;

class operations {
//deklariranje clenovi na klasata
public:
int num1, num2;
float e = 2.71;
//definiranje na metodi na klasata
public:
void input() {
cout << "Enter two numbers to perform operations on: \n";
cin >> num1 >> num2;
cout << "\n";

}
public:
void addition() {
cout << "Addition = " << num1 + num2;
cout << "\n";
}
void subtraction() {
cout << "Subtraction = " << num1 - num2;
cout << "\n";
}
void multiplication() {
cout << "Multiplication = " << num1 * num2;
cout << "\n";
}
void division() {
cout << "Division = " << (float) num1 / num2;
cout << "\n";
}
void function1(){
cout<<"Function1 = "<<pow(num1, num2);
cout<<"\n";
}
void function2(){
cout<<"Function2 = "<< (int)pow(e, num1+num2);
cout<<"\n";
}
};
//definiranje na glavniot metod(main) za pristap do clenovite na klasata
int main() {
cout << " ===== Program to perform basic operations using Class, in CPP ===== \n\n";
//Deklariranje na pristap do klasa operations preku clen op
operations op;
cout << "\nCalling the input() function from the main() method\n";
op.input();
int number;
cout<<"Enter 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division,  5 for function1, 6 for function2 \n";
cin >>number;
if(number>6){
    cout<<"\nInvalid number\n";
}
if(number == 1){
cout << "\nCalling the addition() function from the main() method\n";
op.addition();
}
if(number == 2){
cout << "\nCalling the subtraction() function from the main() method\n";
op.subtraction();
}
if(number == 3){
cout << "\nCalling the multiplication() function from the main() method\n";
op.multiplication();
}
if(number == 4){
cout << "\nCalling the division() function from the main() method\n";
op.division();
}
if(number == 5){
cout<<"\nCalling the function1() from the main() method\n";
op.function1();
}
if(number == 6){
cout<<"\nCalling the function2() from the main() method\n";
op.function2();
}
   return 0;
}
