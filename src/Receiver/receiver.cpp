#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include"test/catch.hpp"
#include"RECEIVER/receiver.h"


TEST_CASE("Checks maximum value finding function")
 {
	float Temperature[]= {2.5,10,14,22.5,47,14.5,22,0.5,2.5};
	float expectedOutput  = 47;
	float actualOutput  = findMaxValue( Temperature,9);
    REQUIRE(result==expectedTemp);
}


TEST_CASE("Checks Minimum value finding function")
 {
	float Temperature[]= {2.5,10,14,22.5,47,14.5,22,0.5,2.5};
	float expectedOutput  = 0.5;
	float actualOutput  = findMinValue( Temperature,9);
    REQUIRE(result == expectedTemp);
}

TEST_CASE("Checks average value finding function")
 {
	float Temperature[]= {2.5,10,14,22.5,47,14.5,22,0.5,2.5};
	float expectedOutput  = 17.299999;
	float actualOutput  = aveOfLastConsecutiveValues(Temperature,9);
    REQUIRE(result == expectedTemp);
}

TEST_CASE("Get the data from sensor by sender and pass the data to receiver") {
    Status_t (*fp_InputFunction)() = readDataFromFile;
    Status_t (*fp_OutputFunction)() = passToConsole;
    void receiverMainFunction(&printOnConsole);
    REQUIRE(fetchData (fp_InputFunction) == E_OK);
    REQUIRE(passDataToOutput (fp_OutputFunction) == E_OK);
 //REQUIRE(passDataToOutput (fp_OutputFunction) == E_OK);
}
