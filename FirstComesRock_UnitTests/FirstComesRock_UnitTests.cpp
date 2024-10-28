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
		TEST_METHOD(ScissorsLosesToRock)
		{
			char* firstPlayerInput = "Scissors";
			char* secondPlayerInput = "Rock";
			int expected = 2;
			int actual = whoWon(firstPlayerInput, secondPlayerInput);
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(ScissorsBeatPaper)
		{
			char* firstPlayerInput = "Scissors";
			char* secondPlayerInput = "Paper";
			int expected = 1;
			int actual = whoWon(firstPlayerInput, secondPlayerInput);
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(PaperLosesToScissors)
		{
			char* firstPlayerInput = "Paper";
			char* secondPlayerInput = "Scissors";
			int expected = 2;
			int actual = whoWon(firstPlayerInput, secondPlayerInput);
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(PaperBeatsRock)
		{
			char* firstPlayerInput = "Paper";
			char* secondPlayerInput = "Rock";
			int expected = 1;
			int actual = whoWon(firstPlayerInput, secondPlayerInput);
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(RockLosesToPaper)
		{
			char* firstPlayerInput = "Rock";
			char* secondPlayerInput = "Paper";
			int expected = 2;
			int actual = whoWon(firstPlayerInput, secondPlayerInput);
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(DrawRock)
		{
			char* firstPlayerInput = "Rock";
			char* secondPlayerInput = "Rock";
			int expected = 4;
			int actual = whoWon(firstPlayerInput, secondPlayerInput);
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(DrawPaper)
		{
			char* firstPlayerInput = "Paper";
			char* secondPlayerInput = "Paper";
			int expected = 4;
			int actual = whoWon(firstPlayerInput, secondPlayerInput);
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(DrawScissors)
		{
			char* firstPlayerInput = "Scissors";
			char* secondPlayerInput = "Scissors";
			int expected = 4;
			int actual = whoWon(firstPlayerInput, secondPlayerInput);
			Assert::AreEqual(expected, actual);
		}
	};
}
