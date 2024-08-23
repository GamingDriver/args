// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdint.h>
#include <cstdlib>
#include <ctime>
#include <thread>
#include <chrono>

//#define ARGS

int main(int argc, char *argv[])
{   
    for (int i = 0; i < 10; i++) {
        srand(time(0));
        std::cout << rand() << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }

    #if defined ARGS
    std::cout << "you have entered " << argc << " command line arguments" << std::endl;

    for (int i = 0; i < argc; i++) {
        std::cout << argv[i] << std::endl;
    }
    //exit(0);
    //abort()
    //std::cout << "hello world" << std::endl;
    #endif
    return 0;
    
}
/*std::string name1, name2, name3;
    int age = 10;
    std::cout << "enter your name and age ";
    std::cin >> name1, name2, name3, age;
    std::cout << "your name is " << name1 << name2 << name3 << " and you are " << age << " years old" << std::endl;*/
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
