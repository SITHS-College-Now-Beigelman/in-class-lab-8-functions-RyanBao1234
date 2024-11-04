//Ryan Bao
//11/4/2024
//Lab 8

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std; 

int doubleMultiply(int a, int b);                     //functions
double getSum(double x, double y, double z);

int main() {  
//PART 1       
    cout << endl;
    //set to 2 decimal places
    cout << fixed << showpoint;
    cout << setprecision(2);

    //get values
    double number;
    cout << "Enter a value: " << endl;
    cin >> number;

    //print values
    cout << "Square Root: " << sqrt(number) << endl;
    cout << "Power: " << pow(number, 4) << endl;
    cout << "Floor: " << floor(number) << endl;
    cout << endl;

//PART 2
    int num1, num2;                   //get variables
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    cout << "Twice the product of the numbers is: " << doubleMultiply(num1, num2) << endl;        //uses what function returns
    system("PAUSE");
    cout << endl;
//PART 3
    //set to 2 decimal places
    cout << fixed << showpoint;
    cout << setprecision(2);

    //get variables
    double num3, num4, num5;
    double result;
    cout << "Enter three numbers: " << endl;
    cin >> num3 >> num4 >> num5;

    result = getSum(num3, num4, num5);
    cout << "Sum : " << result;
}




int doubleMultiply(int a, int b)         //returns in value with int parameters
{
    int product;         
    product = a * b * 2;
    return product;          //returns product as a result of the function working
}

double getSum(double x, double y, double z) {
    double sum;
    sum = x + y + z;       //function adds up values
    return sum;
}

/*
Enter a value: 
4.4
Square Root: 2.10
Power: 374.81
Floor: 4.00

Ener two integers: 30 40
Twice the product of the numbers is: 2400
sh: 1: PAUSE: not found

Enter three numbers: 
30 40 50
Sum : 120.00
*/