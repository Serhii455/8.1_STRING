#include "pch.h"
#include "CppUnitTest.h"
#include "../Pr_8.1_STRING/8.1_string.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            // Test case 1
            {
                char str[101] = "Hello !!! World !!!";

                int g = Count(str);

                Assert::AreEqual(g, 2);
            }
        }
    };
}
