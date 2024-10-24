#include "pch.h"
#include "CppUnitTest.h"

extern "C" {
#include "../WhoWon/WhoWon.h"
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace FirstComesRockUnitTests
{
	TEST_CLASS(FirstComesRockUnitTests)
	{
	public:
		
		TEST_METHOD(RockBeatsScissors)
		{
			char* firstPlayerInput = "Rock";
			char* secondPlayerInput = "Scissors";
			int expected = 1;
			int actual = whoWon(firstPlayerInput, secondPlayerInput);
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(TestMethod2)
		{
		}
	};
}
