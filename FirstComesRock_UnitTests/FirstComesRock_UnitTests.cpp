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
			char* expected = "Player1";
			char* actual = whoWon(firstPlayerInput, secondPlayerInput);
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(ScissorsLosesToRock)
		{
			char* firstPlayerInput = "Scissors";
			char* secondPlayerInput = "Rock";
			char* expected = "Player2";
			char* actual = whoWon(firstPlayerInput, secondPlayerInput);
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(ScissorsBeatPaper)
		{
			char* firstPlayerInput = "Scissors";
			char* secondPlayerInput = "Paper";
			char* expected = "Player1";
			char* actual = whoWon(firstPlayerInput, secondPlayerInput);
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(PaperLosesToScissors)
		{
			char* firstPlayerInput = "Paper";
			char* secondPlayerInput = "Scissors";
			char* expected = "Player2";
			char* actual = whoWon(firstPlayerInput, secondPlayerInput);
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(PaperBeatsRock)
		{
			char* firstPlayerInput = "Paper";
			char* secondPlayerInput = "Rock";
			char* expected = "Player1";
			char* actual = whoWon(firstPlayerInput, secondPlayerInput);
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(RockLosesToPaper)
		{
			char* firstPlayerInput = "Rock";
			char* secondPlayerInput = "Paper";
			char* expected = "Player2";
			char* actual = whoWon(firstPlayerInput, secondPlayerInput);
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(DrawRock)
		{
			char* firstPlayerInput = "Rock";
			char* secondPlayerInput = "Rock";
			char* expected = "Draw";
			char* actual = whoWon(firstPlayerInput, secondPlayerInput);
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(DrawPaper)
		{
			char* firstPlayerInput = "Paper";
			char* secondPlayerInput = "Paper";
			char* expected = "Draw";
			char* actual = whoWon(firstPlayerInput, secondPlayerInput);
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(DrawScissors)
		{
			char* firstPlayerInput = "Scissors";
			char* secondPlayerInput = "Scissors";
			char* expected = "Draw";
			char* actual = whoWon(firstPlayerInput, secondPlayerInput);
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(InvalidPlayerOneInput)
		{
			char* firstPlayerInput = "Scissor";
			char* secondPlayerInput = "Rock";
			char* expected = "Invalid";
			char* actual = whoWon(firstPlayerInput, secondPlayerInput);
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(InvalidPlayerTwoInput)
		{
			char* firstPlayerInput = "Rock";
			char* secondPlayerInput = "1, 2, 3, shoot!";
			char* expected = "Invalid";
			char* actual = whoWon(firstPlayerInput, secondPlayerInput);
			Assert::AreEqual(expected, actual);
		}
	};
}
