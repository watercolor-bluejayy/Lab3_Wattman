// Lab3_Wattman.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Written by Jayy Wattman 1/24/2024

#include <iostream>

using namespace std;

void printMenu(int& selection) //shows the menu and allows users to select an option
{
    cout << "Welcome to my program, please select an operation to perform:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;

    cout << "\nYour Selection: ";
    cin >> selection; 
   
}

void getChoices(float& A, float& B) //function to input and store values for vari A and B
{
    cout << "Please enter the first value:";
    cin >> A;

    cout << "Please enter the second value: ";
    cin >> B;

    cout << endl;
    
}

void Add(float A, float B) //function to add A and B if chosen
{
    float answer;
    answer = (A + B);
    cout << A << "+" << B << "=" << answer << endl;
}

void Subtract(float A, float B)
{
    float answer;
    answer = (A - B);
    cout << A << "-" << B << "=" << answer << endl;
}

void Multiply(float A, float B)
{
    float answer;
    answer = (A * B);
    cout << A << "*" << B << "=" << answer << endl;
}

void Divide(float A, float B)
{
    float answer;
    answer = (A / B);
    cout << A << "/" << B << "=" << answer << endl;
}

int main()
{
    int selection;
    float A;
    float B;
    float answer;

    printMenu(selection);
    getChoices(A, B);

    if (selection == 1) //conditional statment to call Add fucntion if selection was 1
    {
         Add(A, B);
    }

    if (selection == 2)
    {
        Subtract(A, B);
    }

    if (selection == 3)
    {
        Multiply(A, B);
    }

    if (selection == 4)
    {
        Divide(A, B);
    }
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
