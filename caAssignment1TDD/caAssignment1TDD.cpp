// caAssignment1TDD.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Assignment1TDD.h"
using namespace std;
#include <cstddef>
#include <stdio.h>
#include <memory>

int main()
{
    //cout << "Hello World!\n";
    char buffer[255];
    int length = 0;

    LinkedList a;
    a.AddNode(1);
    a.AddNode(2);
    a.Display();

    Stack s;
    s.Push(1);
    s.Push(2);
    s.Push(3);
    s.Push(4);
    s.Push(5);

    sprintf_s(buffer, "Stack How Many: %d", s.HowMany());

    length = (int)strlen(buffer);
    buffer[length] = '\0';

    cout << buffer << endl;

    s.Display();

    sprintf_s(buffer, "Stack How Many: %d", s.HowMany());

    length = (int)strlen(buffer);
    buffer[length] = '\0';

    cout << buffer << endl;

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
