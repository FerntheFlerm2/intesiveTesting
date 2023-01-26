#define CATCH_CONFIG_MAIN
#include <iostream>
#include <vector>
#include "catch.hpp"


extern int RemoveTwos(int original);

extern int Sum(std::vector<int> nums);

extern int Sign(int num);

extern std::vector<int> AddN(std::vector<int> v, int n);


TEST_CASE("remove two"){
	REQUIRE(RemoveTwos(7)==7);
	REQUIRE(RemoveTwos(16)==1);
}

TEST_CASE("Sign"){
	REQUIRE(Sign(7)==1);
	REQUIRE(Sign(-1)==-1);
}