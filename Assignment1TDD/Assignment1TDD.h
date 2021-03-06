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
            int limit;
        public:
            Stack();
            Stack(int pLimit);
            void Initialize();
            int HowMany();
            int Limit();
            void Push(int n);
            int Pop();
            int Peek();
            void Display();
    };
