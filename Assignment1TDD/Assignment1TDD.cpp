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

    node* Stack::Pop()
    {
        node* temp = NULL;
        if (head != NULL)
        {
            temp = head;
            head = head->next;
            howMany--;
        }
        return temp;
    }

    void Stack::Display()
    {
        char buffer[255];
        int length = 0;
        node* displayNode = NULL;
        if (head != NULL)
        {

            do
            {

                displayNode = Pop();

                if (displayNode != NULL)
                {

                    sprintf_s(buffer, "node: %p", displayNode);

                    length = (int)strlen(buffer);
                    buffer[length] = '\0';

                    cout << buffer << endl;

                    sprintf_s(buffer, "data: %d", displayNode->data);

                    length = (int)strlen(buffer);
                    buffer[length] = '\0';

                    cout << buffer << endl;

                }
            } while (displayNode != NULL);

        }

    }
