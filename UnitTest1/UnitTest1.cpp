#include "pch.h"
#include "CppUnitTest.h"
#include "../lab52/lab52.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double result = A(0.5, 2, 1.0);
			Assert::AreEqual(result, -2.4, 0.001);
		}
	};
}
