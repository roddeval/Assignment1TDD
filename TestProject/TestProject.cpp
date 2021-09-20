#include "pch.h"
#include "CppUnitTest.h"
#include "Assignment1TDD.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestProject
{
	TEST_CLASS(TestProject)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int num = 0;
			Stack s = Stack();

			num = s.Pop();
			Assert::IsTrue(num == -1);

			num = s.Peek();
			Assert::IsTrue(num == -1);

			num = s.HowMany();
			Assert::IsTrue(num == 0);
			for (int x = 0; x < 100; x++)
			{
				s.Push(x);
			}
			num = s.HowMany();
			Assert::IsTrue(num == 100);

			num = s.Peek();
			Assert::IsTrue(num == 99);

			s.Display();
			num = s.HowMany();
			Assert::IsTrue(num == 0);

			Stack s2 = Stack(10);
			for (int x2 = 0; x2 < 100; x2++)
			{
				s2.Push(x2);
			}
			Assert::IsTrue(s2.Limit() == 10);
			Assert::IsTrue(s2.HowMany() == 10);

		}
	};
}
