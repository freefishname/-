#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;



namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int sum = 0;
			int n = 5;
			int str1[5] = { -5,-4,-3,-2,-1 };
			Assert::AreEqual(sum, Ziduanhe(n, str1));
		}
		TEST_METHOD(TestMethod2)

		{
			int sum = 10;
			int n = 5;
			int str2[5] = { 1,2,3,4,-1 };
			Assert::AreEqual(sum, Ziduanhe(n, str2));

		}
	};
}
