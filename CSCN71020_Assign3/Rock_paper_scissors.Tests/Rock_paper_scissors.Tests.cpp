#include "pch.h"
#include "CppUnitTest.h"

extern "C" {
	#include "main.h"
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RockpaperscissorsTests
{
	TEST_CLASS(RockpaperscissorsTests)
	{
	public:
		
		TEST_METHOD(T001_rockPaperScissors_rockAndrock)
		{
			char input1[10] = "rock";
			char input2[10] = "rock";
			char *correctResult = "DRAW";

			char *result = rockPaperScissors(input1, input2);

			Assert::AreEqual(correctResult, result);
		}
		TEST_METHOD(T002_rockPaperScissors_paperAndpaper)
		{
			char input1[10] = "paper";
			char input2[10] = "paper";
			char *correctResult = "DRAW";

			char* result = rockPaperScissors(input1, input2);

			Assert::AreEqual(correctResult, result);
		}
		TEST_METHOD(T003_rockPaperScissors_scissorsAndscissors)
		{
			char input1[10] = "scissors";
			char input2[10] = "scissors";
			char *correctResult = "DRAW";

			char* result = rockPaperScissors(input1, input2);

			Assert::AreEqual(correctResult, result);
		}
		TEST_METHOD(T004_rockPaperScissors_rockAndpaper)
		{
			char input1[10] = "rock";
			char input2[10] = "paper";
			char *correctResult = "Player2";

			char* result = rockPaperScissors(input1, input2);

			Assert::AreEqual(correctResult, result);
		}
		TEST_METHOD(T005_rockPaperScissors_rockAndscissors)
		{
			char input1[10] = "rock";
			char input2[10] = "scissors";
			char *correctResult = "Player1";

			char* result = rockPaperScissors(input1, input2);

			Assert::AreEqual(correctResult, result);
		}
		TEST_METHOD(T006_rockPaperScissors_paperAndscissors)
		{
			char input1[10] = "paper";
			char input2[10] = "scissors";
			char* correctResult = "Player2";

			char* result = rockPaperScissors(input1, input2);

			Assert::AreEqual(correctResult, result);
		}
		TEST_METHOD(T007_rockPaperScissors_rockAndnothing)
		{
			char input1[10] = "rock";
			char input2[10] = "nothing";
			char* correctResult = "INVALID";

			char* result = rockPaperScissors(input1, input2);

			Assert::AreEqual(correctResult, result);
		}
		TEST_METHOD(T008_rockPaperScissors_rockAndrock)
		{
			char input1[10] = "rock";
			char input2[10] = "";
			char* correctResult = "INVALID";

			char* result = rockPaperScissors(input1, input2);

			Assert::AreEqual(correctResult, result);
		}
		TEST_METHOD(T009_rockPaperScissors_ROckAndroCK)
		{
			char input1[10] = "ROck";
			char input2[10] = "roCK";
			char* correctResult = "DRAW";

			char* result = rockPaperScissors(input1, input2);

			Assert::AreEqual(correctResult, result);
		}
		TEST_METHOD(T010_rockPaperScissors_sCiSsOrS_Androck)
		{
			char input1[10] = "sCiSsOrS";
			char input2[10] = "rock";
			char* correctResult = "Player2";

			char* result = rockPaperScissors(input1, input2);

			Assert::AreEqual(correctResult, result);
		}
		TEST_METHOD(T011_rockPaperScissors_nullAndnull)
		{
			char input1[10] = "";
			char input2[10] = "";
			char* correctResult = "INVALID";

			char* result = rockPaperScissors(input1, input2);

			Assert::AreEqual(correctResult, result);
		}
	};
}
