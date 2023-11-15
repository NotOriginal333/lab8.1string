#include "pch.h"
#include "CppUnitTest.h"
#include <string>
#include "../lab8.1string/lab8.1string.cpp"
using namespace std;

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81string
{
	TEST_CLASS(UnitTest81string)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string str = {"s.s.g.."};
			int test = FindFourthDot(str);
			Assert::AreEqual(1, test);
		}
	};
}
