#include "pch.h"
#include "CppUnitTest.h"
#include "../num2/num2.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
namespace UnitTest4
{
	TEST_CLASS(UnitTest4)
	{
	public:
		TEST_METHOD(TestMethod1)
		{
			stringstream ss(" ");
			vector<string> v = {};
			Assert::IsTrue(v == F(ss));


		}
		TEST_METHOD(TestMethod2)
		{
			stringstream ss("fgfrt   rtr   wsdf  hj  rtr   .");
			vector<string> v = { "fgrt","wsdf","hj" };
			Assert::IsTrue(v == F(ss));


		}

		TEST_METHOD(TestMethod3)
		{
			stringstream ss("qqq   k   fort ok er  fgyf er.");
			vector<string> v = { "q","k","fort","ok","fgy" };
			Assert::IsTrue(v == F(ss));


		}
		TEST_METHOD(TestMethod4)
		{
			stringstream ss("ty ty    ty   ty  ty  .");
			vector<string> v = {};
			Assert::IsTrue(v == F(ss));

		}
	};
}
