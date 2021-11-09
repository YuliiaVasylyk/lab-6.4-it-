#include "pch.h"
#include "CppUnitTest.h"
#include "..\lab-6.4(it)\Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[] = { 1, 2, 3, 4 };
			int s = Sum(a, 4, 0);
			Assert::AreEqual(10, s, 0);

		}
	};
}
