#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int *length, int *width);
extern "C" int getArea(int* length, int* width);
extern "C" void setLength(int input, int* length);
extern "C" void setWidth(int input, int* width);



using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace REQ001
{
	TEST_CLASS(REQ001)
	{
	public:
	TEST_METHOD(Perimeter_Function)
		{
			// This is testing the perimeter
			int length = 1;
			int width = 1;
			int Result = getPerimeter(&length, &width);
			Assert::AreEqual(4, Result);
		}

	TEST_METHOD(Area_Function)
		{
			// This is testing the Area
			int length = 3;
			int width = 2;
			int Result = getArea(&length, &width);
			Assert::AreEqual(6, Result);
		}

	TEST_METHOD(Setting_Length_Function_Test1)
		{
			// This is testing the Setting length function
			int length = 0; 
			int input = 100; 
			setLength(input, &length);
			Assert::AreEqual(0, length);
		}
	
	TEST_METHOD(Setting_Length_Function_Test2)
		{
			// This is testing the Setting length function
			int length = 0; 
			int input = 99; 
			setLength(input, &length);
			Assert::AreEqual(99, length);
		}
	
	TEST_METHOD(Setting_Length_Function_Test3)
		{
			// This is testing the Setting length function
			int length = 1; 
			int input = 0; 
			setLength(input, &length);
			Assert::AreEqual(1, length);
		}
	
	TEST_METHOD(Setting_Width_Function_Test1)
		{
			// This is testing the Setting Width function
			int width = 0; 
			int input = 100; 
			setWidth(input, &width);
			Assert::AreEqual(0, width);
		}
	
	TEST_METHOD(Setting_Width_Function_Test2)
		{
			// This is testing the Setting Width function
			int width = 0; 
			int input = 99; 
			setWidth(input, &width);
			Assert::AreEqual(99, width);
		}
	
	TEST_METHOD(Setting_Width_Function_Test3)
		{
			// This is testing the Setting Width function
			int width = 1; 
			int input = 0; 
			setWidth(input, &width);
			Assert::AreEqual(1, width);
		}
	};
}
