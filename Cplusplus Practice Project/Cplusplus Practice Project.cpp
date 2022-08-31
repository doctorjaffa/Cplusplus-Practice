// Cplusplus Practice Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{

    //Examples of variable types.
    int testInt = 0;
    unsigned testUnsigned = 100u;
    float testFloat = 0.5f;
    double testDouble = 0.5;
    bool testBool = false;


    char testChar = 'c';
    char firstNameOld[] = "Nathan";

    std::string firstName = "Nathan";
    std::string lastName = "Harris";

    //Can add strings together (concatenate) with the + sign.
    std::string fullName = firstName + " " + lastName;

    //Can access characters in string as if the string was an array.
    char firstInitial = fullName[0];

    //Substr splits the string based on an initial position and a length.
    std::string initials = fullName.substr(0, 1);

    //Find the position in the string and store it in a variable of type "std::size_t", similar to int.
    std::size_t spacePos = fullName.find(" ");

    //Use the position to get the next substring.
    initials += fullName.substr(spacePos + 1, 1);

    //Example of output to console. 
    std::cout << "Hello World!\n"
        << "Goodbye World.\n"
        << "\n"
        << initials << std::endl
        << "\n";


    //Practice strings task: Truncate text after 20 chars, then add the rest on a new line.
    std::string paragraph = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.";

    std::string truncateText = paragraph.substr(0, 20);
    std::string restOfText = paragraph.substr(20, std::string::npos);

    std::cout << truncateText
        << "\n"
        << restOfText << std::endl
        << "\n";

    //INPUTS.
    std::cout << "Please enter a word.\n";
    std::string entryString = "";

    //Read input from the console and store it in entryString.
    std::cin >> entryString;

    std::cout << "User typed: " << entryString << ".\n";

    //Can also input to things that aren't strings.
    int entryInt;
    std::cout << "\nPlease enter a whole number.\n";
    std::cin >> entryInt;
    std::cout << "User typed: " << entryInt << ".\n";

    //NOTE: if user enters something other than an int, the input will not "consume" the entry.
    //This means it will be used again the next time that cin is used - thus probably breaking the program.
    //Data input validation should be used to avoid this. 

    //Float can be used as well.
    float entryFloat;
    std::cout << "\nPlease enter a decimal number.\n";
    std::cin >> entryFloat;
    std::cout << "User typed: " << entryFloat << ".\n";

    //By default, cin only gets text up to the first space but the full line of text can be retrieved using "std::getline".
    std::string lineOfText = "";
    std::cout << "\nPlease enter a line of text.\n";
    std::getline(std::cin, lineOfText);
    std::cout << "User typed: " << lineOfText << "\n";


    //SELECTIONS.
    //If statements are essentially the same as C#.
    bool decision = true;
    if (decision)
    {
        std::cout << "\nDecision was true.\n";
    }
    else
    {
        std::cout << "Decision was false.\n";
    }

    //Advanced if statement: Ternary;
    //Written in-line with other code, such as an assignment statement.
    //Results in one of two values based on the condition.
    int ternResult = decision ? 1 : 2;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
