/**
 	Among n persons, a celebrity is defined as someone who is known by everyone
    but does not know anyone. The problem is to identify the celebrity,
    if one exits.

    Your task is to write two functions and call them from main().
    �	The first function�s task is to display the table and the names as shown above:
        it has two parameters, the relationship table, and n, the number of persons,
        and no return value.
    �	The second function�s task is to identify the celebrity: it has two parameters,
        the relationship table, and n, the number of persons. The value returned from
        the function is -1 if there is no celebrity, or the index that identifies the
        celebrity.

    Run the program 4 times and save each output as a comment, at the end of the source file
    // See the required 4 test cases below

	   Written by:
	   Date:
*/
#include <iostream>

using namespace std;

const int MAX_PEOPLE = 100;

int main (void)
{
//	Local Definitions
//  Test #1
    int  n = 5;
    char names[MAX_PEOPLE][4] = {"Ami", "Bob", "Cal", "Dan", "Ion"};
	int  table[MAX_PEOPLE][MAX_PEOPLE] =
	{
	    {0,   1,   1,   1,   0},
	    {0,   0,   1,   0,   0},
        {0,   0,   0,   0,   0},
        {1,   0,   1,   0,   1},
        {0,   1,   1,   1,   0}
	};


//  Test #2
/**
    int  n = 5;
    char names[MAX_PEOPLE][4] = {"Ami", "Bob", "Cal", "Dan", "Ion"};
	int  table[MAX_PEOPLE][MAX_PEOPLE] =
	{
	    {0,   1,   1,   1,   0},
	    {0,   0,   1,   0,   0},
        {0,   0,   0,   0,   0},
        {1,   0,   0,   0,   1},
        {0,   1,   1,   1,   0}
	};
*/

//  Test #3
/**
    int  n = 5;
    char names[MAX_PEOPLE][4] = {"Ami", "Bob", "Cal", "Dan", "Ion"};
	int  table[MAX_PEOPLE][MAX_PEOPLE] =
	{
	    {0,   1,   1,   1,   0},
	    {0,   0,   1,   0,   0},
        {0,   0,   0,   0,   1},
        {1,   0,   1,   0,   1},
        {0,   1,   1,   1,   0}
	};
*/


//  Test #4
/**
    int  n = 8;
    char names[MAX_PEOPLE][4] = {"Ami", "Bob", "Cal", "Dan", "Ion", "Ada", "Tom", "Ann"};
	int  table[MAX_PEOPLE][MAX_PEOPLE] =
	{
	    {0,   1,   1,   1,   0,   1,   1,   0},
	    {0,   0,   1,   0,   0,   1,   1,   1},
        {0,   0,   0,   0,   0,   1,   0,   1},
        {1,   0,   1,   0,   1,   1,   0,   1},
        {0,   1,   1,   1,   0,   1,   1,   1},
        {0,   0,   0,   0,   0,   0,   0,   0},
	    {0,   0,   0,   0,   0,   1,   0,   1},
        {0,   0,   1,   0,   1,   1,   0,   0},
	};
*/

//	Statements
    // call your functions below
    // write the name of the celebrity, or a message, such as "No celebrity!" in main()
    // Run the program 4 times and save each output as a comment, at the end of the source file


	return 0;
}	// main
