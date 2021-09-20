#include "pch.h"
#include "Assignment1TDD.h"
#include <cstddef>
#include <stdio.h>
#include <memory>
#include <iostream>
using namespace std;


    LinkedList::LinkedList()
    {
        Initialize();
    }
    void LinkedList::Initialize()
    {
        head = NULL;
        tail = NULL;
    }

    void LinkedList::AddNode(int n)
    {
        node* temp = new node();
        temp->data = n;
        temp->next = NULL;
        if (head == NULL)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = LinkedList::tail->next;
        }
    }

    void LinkedList::Display()
    {
        char buffer[255];
        int length = 0;
        node* temp;
        temp = head;
        while (temp != NULL)
        {
            sprintf_s(buffer, "node: %p", temp);

            length = (int)strlen(buffer);
            buffer[length] = '\0';

            cout << buffer << endl;

            sprintf_s(buffer, "data: %d", temp->data);

            length = (int)strlen(buffer);

            buffer[length] = '\0';

            cout << buffer << endl;

            temp = temp->next;
        }
    }


    Stack::Stack()
    {
        Initialize();
    }
    void Stack::Initialize()
    {
        head = NULL;
        howMany = 0;
    }
    int Stack::HowMany()
    {
        return howMany;
    }

    void Stack::Push(int n)
    {
        node* temp = new node();
        temp->data = n;
        temp->next = head;
        head = temp;
        howMany++;
    }

    int Stack::Pop()
    {
        int result = -1;
        node* temp = NULL;
        if (head != NULL)
        {
            temp = head;
            head = head->next;
            howMany--;

            result = temp->data;
        }
        return result;
    }

    int Stack::Peek()
    {
        int result = -1;
        if (head != NULL)
        {
            if (howMany > 0)
            {
                result = head->data;
            }
        }
        return result;
    }


    void Stack::Display()
    {
        char buffer[255];
        int length = 0;
        int num = NULL;
        if (head != NULL)
        {

            do
            {

                num = Pop();

                sprintf_s(buffer, "data: %d", num);

                length = (int)strlen(buffer);
                buffer[length] = '\0';

                cout << buffer << endl;

            } while (howMany > 0);

        }

    }
