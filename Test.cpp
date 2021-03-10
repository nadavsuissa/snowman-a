/**
 * An example of how to write unit tests in C++
 * Took Base from Erel's Git and modified
 *
 * AUTHORS: <Nadav Suissa>
 * 
 * Date: 10.3.21
 */


/** Snowman Build - HNLRXYTB || Key:
* H - Hat 
* N - Nose/Mouth
* L - Left Eye
* R - Right Eye
* X - Left Arm
* Y - Right Arm
* T - Torso 
* B - Base 
* Link for more Info - https://codegolf.stackexchange.com/questions/49671/do-you-want-to-code-a-snowman
*/

#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;

#include <algorithm>
#include <string>
using namespace std;

// NoSpace needed in order to validate/finalize version with everyone
// This is from original Test file..
string nospaces(string input) {
	std::erase(input, ' ');
	std::erase(input, '\t');
	std::erase(input, '\n');
	std::erase(input, '\r');
	return input;
}
// Obviously Snowman Code Not Implemented - Hence Fail in all TESTS !!!
TEST_CASE("Valid Snowman code - Tested Every Body Part on Random Bodies") {
    
    //Every Base Check 1-4 On Random Bodies
    CHECK(nospaces(snowman(11113211)) == nospaces("      \n_===_\n (.,.) \n/( : )/\n( : )"));
    CHECK(nospaces(snowman(12341112)) == nospaces("      \n_===_\n (O.-) \n<( : )>\n(\" \")"));
    CHECK(nospaces(snowman(13111213)) == nospaces("      \n_===_\n (._.) \n<( : )/\n(___)"));
    CHECK(nospaces(snowman(14233114)) == nospaces("      \n_===_\n (o O) \n/( : )>\n(   )"));


    //Every Torso Check
    CHECK(nospaces(snowman(11111114)) == nospaces("      \n_===_\n (.,.) \n<( : )>\n(   )"));
    CHECK(nospaces(snowman(12111121)) == nospaces("      \n_===_\n (...) \n<(] [)>\n( : )"));
    CHECK(nospaces(snowman(11113233)) == nospaces("      \n_===_\n (.,.) \n/(> <)/\n(___)"));
    CHECK(nospaces(snowman(13111142)) == nospaces("      \n_===_\n (._.) \n<(   )>\n(\" \")"));

    //Every Right Hand Check
    CHECK(nospaces(snowman(14111113)) == nospaces("      \n_===_\n (. .) \n<( : )>\n(___)"));
    CHECK(nospaces(snowman(11111211)) == nospaces("      \n_===_\n (.,.) \n<( : )/\n( : )"));
    CHECK(nospaces(snowman(13111312)) == nospaces("      \n_===_\n (._.) \n<( : )\\\n(\" \")")); // Triple backslash to fix the problem
    CHECK(nospaces(snowman(12111414)) == nospaces("      \n_===_\n (...) \n<( : ) \n(   )"));
    
    //Every Left Hand Check
    CHECK(nospaces(snowman(11111111)) == nospaces("      \n_===_\n (.,.) \n<( : )>\n( : )"));
    CHECK(nospaces(snowman(43242312)) == nospaces("  ___ \n (_*_)\n\\(o_-) \n ( : )\\\n (\" \")"));
    CHECK(nospaces(snowman(11113111)) == nospaces("      \n_===_\n (.,.) \n/( : )>\n( : )"));
    CHECK(nospaces(snowman(11114111)) == nospaces("      \n_===_\n (.,.) \n ( : )>\n( : )"));

    //Every Right Eye Check
    CHECK(nospaces(snowman(11113111)) == nospaces("      \n_===_\n (.,.) \n/( : )>\n( : )"));
    CHECK(nospaces(snowman(11123112)) == nospaces("      \n_===_\n (.,o) \n/( : )>\n(\" \")"));
    CHECK(nospaces(snowman(11133113)) == nospaces("      \n_===_\n (.,O) \n/( : )>\n(___)"));
    CHECK(nospaces(snowman(11143114)) == nospaces("      \n_===_\n (.,-) \n/( : )>\n(   )"));

    //Every Left Eye Check
    CHECK(nospaces(snowman(11131111)) == nospaces("      \n_===_\n (.,O) \n<( : )>\n( : )"));
    CHECK(nospaces(snowman(11211114)) == nospaces("      \n_===_\n (o,.) \n<( : )>\n(   )"));
    CHECK(nospaces(snowman(11311121)) == nospaces("      \n_===_\n (O,.) \n<(] [)>\n( : )"));
    CHECK(nospaces(snowman(11411113)) == nospaces("      \n_===_\n (-,.) \n<( : )>\n(___)"));

    //Every Nose/Mouth Check
    CHECK(nospaces(snowman(11311131)) == nospaces("      \n_===_\n (O,.) \n<(> <)>\n( : )"));
    CHECK(nospaces(snowman(12211111)) == nospaces("      \n_===_\n (o..) \n<( : )>\n( : )"));
    CHECK(nospaces(snowman(13111121)) == nospaces("      \n_===_\n (._.) \n<(] [)>\n( : )"));
    CHECK(nospaces(snowman(14411111)) == nospaces("      \n_===_\n (- .) \n<( : )>\n( : )"));

    //Every Hat Check
    CHECK(nospaces(snowman(12111123)) == nospaces("      \n_===_\n (...) \n<(] [)>\n(___)"));
    CHECK(nospaces(snowman(23111114)) == nospaces(" ___ \n.....\n (._.) \n<( : )>\n(   )"));
    CHECK(nospaces(snowman(31113111)) == nospaces("  _  \n /_\\ \n (.,.) \n/( : )>\n( : )"));
    CHECK(nospaces(snowman(44111211)) == nospaces(" ___ \n(_*_)\n (. .) \n<( : )/\n( : )"));


}
// Valid Options for Clothing are only from 1-4, therefore An Option < 1 or > 5 Shall Fail
// Did not check 0 at begining, this belongs in Length check
TEST_CASE("Test Case - Not a Valid Option (1-4)") {
    CHECK_THROWS(snowman(51111111));
    CHECK_THROWS(snowman(10111111));
    CHECK_THROWS(snowman(11611111));
    CHECK_THROWS(snowman(11171111));
    CHECK_THROWS(snowman(11119111));
    CHECK_THROWS(snowman(11111811));
    CHECK_THROWS(snowman(11111151));
    CHECK_THROWS(snowman(01111110));
}

TEST_CASE("Test Case - Less than 8 digits") {
    CHECK_THROWS(snowman(1));
    CHECK_THROWS(snowman(11));
    CHECK_THROWS(snowman(111));
    CHECK_THROWS(snowman(1111));
    CHECK_THROWS(snowman(11111));
    CHECK_THROWS(snowman(111111));
    CHECK_THROWS(snowman(1511111));
    
}
TEST_CASE("Test Case - More than 8 digits") {
    CHECK_THROWS(snowman(111111111));
    CHECK_THROWS(snowman(1111111111));


    
}
// Obviously Will not check for negitive digit after first digit,this is not possible using int 
TEST_CASE("Test Case - Negitive Integer") {
    CHECK_THROWS(snowman(-11111113));
    CHECK_THROWS(snowman(-21142114));
    CHECK_THROWS(snowman(-11321112));
    CHECK_THROWS(snowman(-13311114));
    CHECK_THROWS(snowman(-34231112));
    CHECK_THROWS(snowman(-11143243));
    CHECK_THROWS(snowman(-43234111));
    
}
