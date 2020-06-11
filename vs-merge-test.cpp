// vs-merge-test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";

    bool good = true;
    bool warm = true;

    // Check to see if today is good.
    if (good)
    {
        std::cout << "Today is a good day.\n";
        std::cout << "This line was added in dotnetcore31.\n";
        std::cout << "This line was also added in dotnetcore31.\n";
        std::cout << "This line was added in master.\n";
        std::cout << "This line was also also added in dotnetcore31.\n";
    }
    else
    {
        std::cout << "Today is a bad day.\n";
        std::cout << "This line was added in dotnetcore31.\n";
        std::cout << "This line was also added in dotnetcore31.\n";
        std::cout << "This line was added in master.\n";
        std::cout << "This line was also also added in dotnetcore31.\n";
        std::cout << "Added by another developer while during merge (2) in dotnetcore31.\n";
    }

    // Check to see if today is warm.
    if (warm)
    {
        std::cout << "Today is a warm day.\n";
        std::cout << "This line was added in dotnetcore31.\n";
        std::cout << "This line was also added in dotnetcore31.\n";
        std::cout << "This line was added in master.\n";
        std::cout << "This line was also also added in dotnetcore31.\n";
    }
    else
    {
        std::cout << "Today is a cold day.\n";
        std::cout << "This line was added in dotnetcore31.\n";
        std::cout << "This line was added in master.\n";
    }

    // Check to see if today is good and warm.
    if (good && warm)
    {
        // :)
        std::cout << "Woohoo!\n";
    }
    else
    {
        // :(
        std::cout << "Booooo!\n";
    }
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
