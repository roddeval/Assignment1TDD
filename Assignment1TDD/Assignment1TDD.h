#pragma once
#ifdef Assignment1TDD_EXPORTS
#define Assignment1TDD __declspec(dllexport)
#else
#define Assignment1TDD __declspec(dllimport)
#endif

    struct Assignment1TDD node
    {
        int data;
        node* next;
    };

    class Assignment1TDD LinkedList
    {
        private:
            node* head;
            node* tail;
        public:
            LinkedList();
            void Initialize();
            void AddNode(int n);
            void Display();
    };
    class Assignment1TDD Stack
    {
        private:
            node* head;
            int howMany;
        public:
            Stack();
            void Initialize();
            int HowMany();
            void Push(int n);
            node* Pop();
            int Peek();
            void Display();
    };
