// Cplusplus Practice Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
/*
void BasicFunction() {
    std::cout << "Basic function ran.\n";
}

//There exists a function called EarlyDeclare.
//This is called a Forward Declaration.
void EarlyDeclare();

void ParamaterFunc(int paramInt)
{
    ++paramInt;

    std::cout << "ParameterFunc ran - paramInt = " << paramInt << ".\n";
}

int ReturnFunc()
{
    return 42;
}

*/
int RectangleArea(int width, int height)
{
    int area = width * height;

    return area;
}

int RandomiseScore(int maxScore)
{

    int iScore = rand() % maxScore + 1;

    return iScore;
}

int main()
{

    /* ------------------------------------------------------------------------------------- WEEK 1 ------------------------------------------------------------------------------------- 
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

    
    //Switch statement. 
    int errorCode = 2;

    switch (errorCode)
    {
    case 0:
    {
        std::cout << "Error was 0.\n";
        break;
    }
    case 1:
    {
        std::cout << "Error was 1.\n";
        break;
    }
    case 2:
    {
        std::cout << "Error was 2.\n";
        break;
    }
    default:
    {
        std::cout << "Error was unrecognised.\n";
        break;
    }
    }

    //EXAMPLE PROGRAM - Which Way?

    std::cout << "Please enter which direction you wish to go:\n"
        << "1. North\n"
        << "2. East\n"
        << "3. South\n"
        << "4. West\n"
        << "\n";

    int direction = 0;

    std::cin >> direction;

    switch (direction)
    {
    case 1: 
    {
        std::cout << "You walk upon a grand river, it rids you of your stress and you feel some relief.";
        break;
    }
    case 2:
    {
        std::cout << "You make your way through some deep woods, unsure of how far much distance you've travelled since you started.";
        break;
    }
    case 3:
    {
        std::cout << "As you're making your way further into the woods, you come across a small opening where a family of rabbits are playing around. It is a wholesome scene you take in.";
        break;
    }
    case 4:
    {
        std::cout << "You quickly come across some thick bushes that will take a lot of effort to get past.";
        break;
    }
    default:
    {
        std::cout << "You sit on the ground where you are. Maybe you'll pick a direction later.";
        break;
    }
    }

    //Advanced if statement: Ternary;
    //Written in-line with other code, such as an assignment statement.
    //Results in one of two values based on the condition.
    //int ternResult = decision ? 1 : 2;

    


    //ITERATION.
    //While loop - these are the same in C++ and C#.

    bool whileB = true;

    //To enter this loop, the condition must be true.
    while (whileB == true)
    {
        //Execute code within the loop.
        whileB = false;
        //At the end, check the condition. If it is still true, continue the loop.
    }
   
    //Do While loop - checks condition after the first loop.
    int doI = 0;

    do {
        ++doI;
        std::cout << "Do while ran " << doI << " times.";
    } while (doI < 2);

    //For loop.
    for (int i = 0; i < 5; ++i)
    {
        //Do the body of the loop.
        std::cout << "For loop ran " << i << " times.";
    }


    //EXAMPLE PROGRAM - Gooooooogle.

    std::cout << "\nPlease enter the number of pages: ";

    int pages = 0;
    std::cin >> pages;

    std::cout << "\nG";
    for (int i = 0; i < pages; ++i)
    {
        std::cout << "o";
    }
    std::cout << "gle\n";



    //Functions.

    BasicFunction();

    EarlyDeclare();

    //paramInt = testInt.
    int testInt = 4;
    ParamaterFunc(testInt);

    int returnValue = ReturnFunc();
    std::cout << "Return value: " << returnValue << ".\n";

    

    //Static array.
    int intArray[] = { 0, 1, 2 };

    const int intArraySize = 3;
    int intArrayB[intArraySize];

    */

    /*--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- */

    /* ---------------------------------------------------------------------------------- HOMEWORK TASKS ---------------------------------------------------------------------------------- */
    /*
    //Task 1: Rectangle.

    std::cout << "Please enter the length of the rectangle.\n";
    int length = 0;

    std::cin >> length;

    std::cout << "Please enter the width of the rectangle.\n";
    int width = 0;

    std::cin >> width;

    int perimiter = 2 * (length + width);
    int area = length * width;

    std::cout << "\nThe perimiter of the rectangle is: " << perimiter << "." << std::endl;
    std::cout << "The area of the rectangle is: " << area << "." << std::endl;

    //Task 2: Time Conversions.

    std::cout << "\n Time Conversions" << std::endl;

    std::cout << "\nPlease enter a number of hours.\n";
    float hours = 0.0f;

    std::cin >> hours;

    float minutes = hours * 60;
    float seconds = minutes * 60;

    std::cout << "\nThe number of minutes in " << hours << " hours is: " << minutes << "." << std::endl;
    std::cout << "\nThe number of seconds in " << hours << " hours is: " << seconds << "." << std::endl;

    //Task 3: Insult Generator. 

    std::cout << "\n Insult Generator" << std::endl;

    std::string insult = "idiot";

    std::string otherText = "You are an ";

    std::cout << "\n" << otherText << insult << "!" << std::endl;

    //Task 4: Code Word Locator.

    std::cout << "\n Code Word Locator" << std::endl;

    std::string codeWord = "word";
    std::string longString = "eqpountwpouvsdfnpouwordqpounwfwpoufnnwfpwiue";

    std::size_t codePos = longString.find(codeWord);

    std::cout << "\nThe long text: " << longString << std::endl;
    std::cout << "The code word: " << codeWord << std::endl;

    std::cout << "\nThe position of the code word is: " << codePos << std::endl;

    //Task 5: Date of Birth.

    std::cout << "\n Date of Birth" << std::endl;

    std::cout << "\nPlease enter the year you were born (XXXX):" << std::endl;

    int yearBorn = 0;
    std::cin >> yearBorn;

    std::cout << "Please enter the month you were born (XX):" << std::endl;

    int monthBorn = 0;
    std::cin >> monthBorn;

    std::cout << "Please enter the day you were born (XX):" << std::endl;

    int dayBorn = 0;
    std::cin >> dayBorn;

    std::cout << "You were born on: " << dayBorn << "/" << monthBorn << "/" << yearBorn << std::endl;

    */

    //Task 6: Selection.
    std::string badWord = "blueberry";

    std::cout << "Please enter a word: ";
    std::string userWord = "";

    std::cin >> userWord;

    if (userWord == badWord)
    {
        std::cout << "\nBLEEP\n";
    }
    else
    {
        std::cout << "\n" << userWord << std::endl;
    }

    //Task 7: Iteration.
    std::cout << "\nPlease enter how many bottles are on the wall: ";
    int bottles = 0;
    std::cin >> bottles;

    bool drinkBottle = true;
    do {
        std::cout << "\n" << bottles << " bottles of beer on the wall.\n";

        if (bottles > 0)
        {
            std::cout << "\nWould you like to drink a bottle? Y/N: ";

            std::string userAns = "";
            std::cin >> userAns;

            if (userAns == "N")
            {
                drinkBottle = false;
            }
            else {
                --bottles;
            }
        }
    } while (drinkBottle == true);

    

    //Task 8: Rectangle Area v2.

    std::cout << "\nPlease enter the width of the rectangle: ";
    int width = 0;
    std::cin >> width;

    std::cout << "\nPlease enter the height of the rectangle: ";
    int height = 0;
    std::cin >> height;

    int area = RectangleArea(width, height);

    std::cout << "\nThe area of the rectangle is: " << area << std::endl;

    
    //Task 9: Randomisation.
    std::cout << "\nPlease enter a maximum score: ";
    int maxScore = 0;
    std::cin >> maxScore;

    for (int i = 0; i < 5; ++i)
    {
        int score = RandomiseScore(maxScore);

        std::cout << score << std::endl;
    }

    

    /* -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- */
}

//Implementation for EarlyDeclare that was declared at the top. Name must match exactly.
void EarlyDeclare()
{
    std::cout << "Early Declare function ran.\n";
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
