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
    int num = 0;
    LinkedList a;
    a.AddNode(1);
    a.AddNode(2);
    a.Display();

    Stack s = Stack(4);

    num = s.Pop();

    sprintf_s(buffer, "Stack Pop: %d", num);
    length = (int)strlen(buffer);
    buffer[length] = '\0';

    cout << buffer << endl;

    num = s.Peek();

    sprintf_s(buffer, "Stack Peek: %d", num);
    length = (int)strlen(buffer);
    buffer[length] = '\0';

    cout << buffer << endl;

    Stack s2 = Stack(10);
    for (int x2 = 0; x2 < 100; x2++)
    {
        s2.Push(x2);
    }
    sprintf_s(buffer, "Stack 2 How Many: %d", s2.HowMany());

    length = (int)strlen(buffer);
    buffer[length] = '\0';

    cout << buffer << endl;

    sprintf_s(buffer, "Stack 2 Limit: %d", s2.Limit());

    length = (int)strlen(buffer);
    buffer[length] = '\0';

    cout << buffer << endl;
    s2.Display();

    s = Stack(5);

    s.Push(1);
    s.Push(2);
    s.Push(3);

    num = s.Peek();

    sprintf_s(buffer, "Stack Peek: %d", num);

    length = (int)strlen(buffer);
    buffer[length] = '\0';

    cout << buffer << endl;

    s.Push(4);
    s.Push(5);

    sprintf_s(buffer, "Stack How Many: %d", s.HowMany());

    length = (int)strlen(buffer);
    buffer[length] = '\0';

    cout << buffer << endl;

    sprintf_s(buffer, "Stack Limit: %d", s.Limit());

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
