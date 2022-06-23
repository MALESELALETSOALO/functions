// functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void Myfunctions(string name, string surname) {

}

int Addnumbers(int num1, int num2) {

    return num1 + num2;
}
double Dividenumbers(int num2, int num1) {

    return num2 / num1;
}
double multiplynumbers(int num1, int num2) {

    return num1 * num2;
}
double subtractnumbers(int num1, int num2) {

    return num1 - num2;
}


int main() {
    
    int num1, num2;
    string name, surname;

    Myfunctions;
    cout << "Enter your name and surname " << endl;
    cin >> name >> surname;
    cout << "Your name is " << name << " and " << " your surname is " << surname << endl;

    cout << "Enter two numbers " << endl;
    cin >> num1 >> num2;

    cout << "The result is " << Addnumbers(num1, num2) <<endl;
        cout << "The result is " << Dividenumbers(num2, num1)<< endl;
        cout << "The result is " << multiplynumbers(num1, num2) << endl;
        cout << "The result is " << subtractnumbers(num1 , num2) << endl;



        return 0;
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
