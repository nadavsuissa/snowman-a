/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: <Please write your names here>
 * 
 * Date: 2021-02
 */

#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;

#include <string>
using namespace std;

// string nospaces(string input) {
// 	std::erase(input, ' ');
// 	std::erase(input, '\t');
// 	std::erase(input, '\n');
// 	std::erase(input, '\r');
// 	return input;
// }
TEST_CASE("Good snowman code") {
    // CHECK(snowman(11114411) == string("    \n_===_\n (.,.) \n( : )\n( : )"));
    //check the base
    CHECK(snowman(11111111) == string("     \n_===_\n (.,.) \n<( : )>\n( : )"));
    CHECK(snowman(12341112) == string("     \n_===_\n (O.-) \n<( : )>\n(\" \")"));
    CHECK(snowman(13241113) == string("     \n_===_\n (o_-) \n<( : )>\n(___)"));
    CHECK(snowman(14231114) == string("     \n_===_\n (o O) \n<( : )>\n(   )"));


    //check the Belly
    CHECK(snowman(11111111) == string("     \n_===_\n (.,.) \n<( : )>\n( : )"));
    CHECK(snowman(11111121) == string("     \n_===_\n (.,.) \n<(] [)>\n( : )"));
    CHECK(snowman(11111131) == string("     \n_===_\n (.,.) \n<(> <)>\n( : )"));
    CHECK(snowman(11111141) == string("     \n_===_\n (.,.) \n<(] [)>\n( : )"));

    //check the right hand
    CHECK(snowman(11111111) == string("     \n_===_\n (.,.) \n<( : )>\n( : )"));
    CHECK(snowman(11111211) == string("     \n_===_\n (.,.)/\n<( : ) \n( : )"));
    CHECK(snowman(11111311) == string("     \n_===_\n (.,.) \n<( : )\\\n( : )"));
    CHECK(snowman(11111411) == string("     \n_===_\n (.,.) \n<( : ) \n( : )"));
    
    //check the left hand
    CHECK(snowman(11111111) == string("     \n_===_\n (.,.) \n<( : )>\n( : )"));
    CHECK(snowman(11112111) == string("     \n_===_\n\\(.,.) \n ( : )>\n( : )"));
    CHECK(snowman(11113111) == string("     \n_===_\n (.,.) \n/( : )>\n( : )"));
    CHECK(snowman(11114111) == string("     \n_===_\n (.,.) \n ( : )>\n( : )"));

    //check the right eye
    CHECK(snowman(11111111) == string("     \n_===_\n (.,.) \n<( : )>\n( : )"));
    CHECK(snowman(11121111) == string("     \n_===_\n (.,o) \n<( : )>\n( : )"));
    CHECK(snowman(11131111) == string("     \n_===_\n (.,O) \n<( : )>\n( : )"));
    CHECK(snowman(11141111) == string("     \n_===_\n (.,-) \n<( : )>\n( : )"));

    //check the left eye
    CHECK(snowman(11111111) == string("     \n_===_\n (.,.) \n<( : )>\n( : )"));
    CHECK(snowman(11211111) == string("     \n_===_\n (o,.) \n<( : )>\n( : )"));
    CHECK(snowman(11311111) == string("     \n_===_\n (O,.) \n<( : )>\n( : )"));
    CHECK(snowman(11411111) == string("     \n_===_\n (-,.) \n<( : )>\n( : )"));

    //check the nose
    CHECK(snowman(11111111) == string("     \n_===_\n (.,.) \n<( : )>\n( : )"));
    CHECK(snowman(12111111) == string("     \n_===_\n (...) \n<( : )>\n( : )"));
    CHECK(snowman(13111111) == string("     \n_===_\n (._.) \n<( : )>\n( : )"));
    CHECK(snowman(14111111) == string("     \n_===_\n (. .) \n<( : )>\n( : )"));

    //chek the hat
    CHECK(snowman(11111111) == string("     \n_===_\n (.,.) \n<( : )>\n( : )"));
    CHECK(snowman(21111111) == string(" ___ \n.....\n (.,.) \n<( : )>\n( : )"));
    CHECK(snowman(31111111) == string("  _  \n /_\\ \n (.,.) \n<( : )>\n( : )"));
    CHECK(snowman(41111111) == string(" ___ \n(_*_)\n (.,.) \n<( : )>\n( : )"));

    // CHECK(nospaces(snowman(11111111)) == nospaces("===\n(.,.)\n<( : )>\n ( : )"));
    // CHECK(nospaces(snowman(12312312)) == nospaces("      \n ===\\\n(O..)\n ( : )\\\n(\" \")"));
    // CHECK(nospaces(snowman(22222222)) == nospaces(" ___\n .....\n\\(o.o)/\n (] [) \n (  \"  \")"));




    // CHECK(nospaces(snowman(11114411)) == nospaces("===\n(.,.)\n( : )\n( : )"));
    // CHECK(nospaces(snowman(41114411)) == nospaces("  _  \n (*)\n(.,.)\n( : )\n( : )"));
    // CHECK(nospaces(snowman(11114441)) == nospaces("===\n(.,.)\n(   )\n( : )"));
    // CHECK(nospaces(snowman(11114431)) == nospaces("===\n(.,.)\n(> <)\n( : )"));
    // CHECK(nospaces(snowman(11114421)) == nospaces("===\n(.,.)\n(] [)\n( : )"));
    // CHECK(nospaces(snowman(11234411)) == nospaces("===\n(o,O)\n( : )\n( : )"));
    // CHECK(nospaces(snowman(11324411)) == nospaces("===\n(O,o)\n( : )\n( : )"));
    // CHECK(nospaces(snowman(11444411)) == nospaces("===\n(-,-)\n( : )\n( : )"));
    // CHECK(nospaces(snowman(11244411)) == nospaces("===\n(o,-)\n( : )\n( : )"));
    // CHECK(nospaces(snowman(11134411)) == nospaces("===\n(.,O)\n( : )\n( : )"));
    // CHECK(nospaces(snowman(33221111)) == nospaces("   _  \n  /_\\\n(o_o)\n<( : )>\n( : )"));
    // CHECK(nospaces(snowman(11221111)) == nospaces("===\n(o,o)\n<( : )>\n( : )"));
    // CHECK(nospaces(snowman(11221111)) == nospaces("===\n(o,o)\n<( : )>\n( : )"));
    // CHECK(nospaces(snowman(11221111)) == nospaces("===\n(o,o)\n<( : )>\n( : )"));
    // CHECK(nospaces(snowman(11221111)) == nospaces("===\n(o,o)\n<( : )>\n( : )"));
    // CHECK(nospaces(snowman(11221111)) == nospaces("===\n(o,o)\n<( : )>\n( : )"));

}

TEST_CASE("not a legal entary") {
    CHECK_THROWS(snowman(11111115));
    CHECK_THROWS(snowman(11111151));
    CHECK_THROWS(snowman(11111511));
    CHECK_THROWS(snowman(11115111));
    CHECK_THROWS(snowman(11151111));
    CHECK_THROWS(snowman(11511115));
    CHECK_THROWS(snowman(15111115));
    CHECK_THROWS(snowman(51111115));
}

TEST_CASE("not enough numbers") {
    CHECK_THROWS(snowman(1));
    CHECK_THROWS(snowman(11));
    CHECK_THROWS(snowman(111));
    CHECK_THROWS(snowman(1111));
    CHECK_THROWS(snowman(11111));
    CHECK_THROWS(snowman(111111));
    CHECK_THROWS(snowman(1511111));    
}

TEST_CASE("a negative number entery") {
    CHECK_THROWS(snowman(-11111115));
    CHECK_THROWS(snowman(-21145115));
    CHECK_THROWS(snowman(-11321115));
    CHECK_THROWS(snowman(-53311115));
    CHECK_THROWS(snowman(-54231115));
    CHECK_THROWS(snowman(-11143245));
    CHECK_THROWS(snowman(-43254115));
    
}
// TEST_CASE("Bad snowman code") {

//     // CHECK_THROWS(snowman(11111115));
//     // CHECK_THROWS(snowman(11111151));
//     // CHECK_THROWS(snowman(11111511));
//     // CHECK_THROWS(snowman(11115111));
//     // CHECK_THROWS(snowman(11151111));
//     // CHECK_THROWS(snowman(11511115));
//     // CHECK_THROWS(snowman(15111115));
//     // CHECK_THROWS(snowman(51111115));


//     // CHECK_THROWS(snowman(1));
//     // CHECK_THROWS(snowman(11));
//     // CHECK_THROWS(snowman(111));
//     // CHECK_THROWS(snowman(1111));
//     // CHECK_THROWS(snowman(11111));
//     // CHECK_THROWS(snowman(111111));
//     // CHECK_THROWS(snowman(1511111));    



//     // // CHECK_THROWS(snowman(1111111-5));
//     // // CHECK_THROWS(snowman(111111-15));
//     // // CHECK_THROWS(snowman(11111-115));
//     // // CHECK_THROWS(snowman(1111-1115));
//     // // CHECK_THROWS(snowman(111-11115));
//     // // CHECK_THROWS(snowman(11-111115));
//     // // CHECK_THROWS(snowman(1-1111115));
//     // CHECK_THROWS(snowman(-11111115));
//     // CHECK_THROWS(snowman(00000000));
    
//     CHECK_THROWS(snowman(444444444));
//     CHECK_THROWS(snowman(51111111));
//     CHECK_THROWS(snowman(15111111));
//     CHECK_THROWS(snowman(11511111));
//     CHECK_THROWS(snowman(11151111));
//     CHECK_THROWS(snowman(11115111));
//     CHECK_THROWS(snowman(11111511));
//     CHECK_THROWS(snowman(11111151));
//     CHECK_THROWS(snowman(11111115));
//     CHECK_THROWS(snowman(01111111));
//     CHECK_THROWS(snowman(10111111));
//     CHECK_THROWS(snowman(11011111));
//     CHECK_THROWS(snowman(11101111));
//     CHECK_THROWS(snowman(11110111));
//     CHECK_THROWS(snowman(11111011));
//     CHECK_THROWS(snowman(11111101));
//     CHECK_THROWS(snowman(11111110));
//     CHECK_THROWS(snowman(1));
//     CHECK_THROWS(snowman(111111111));
//     CHECK_THROWS(snowman(12));
//     CHECK_THROWS(snowman(1111));
//     CHECK_THROWS(snowman(11271));
//     CHECK_THROWS(snowman(121411));
//     CHECK_THROWS(snowman(1412123));
// }
