#include <iostream>
#include <iomanip>

void ReadMeInSomeShit()
{
    std::string name;
    int age;

    std::cout << "Type in your name: " << std::endl;

    std::getline( std::cin, name ); // use std:getline if you have spaces in input

    std::cout << "Type in your age: " << std::endl;

    std::cin >> age;

    std::cout << "Your name is " << name << " And you are " << age << " Years Old" << std::endl;
}

void SpaceShipAndStd()
{
    // The three-way comparison operator “<=>” is called a spaceship operator. The spaceship operator determines for two objects A and B whether A < B, A = B, or A > B. The spaceship operator or the compiler can auto-generate it for us.
    auto result = (10 <=> 20) > 0;

    //std::cout handles all types for you, while printf requires specific syntax
    // << is used in C++ for output insertion operator with cout object this mechanism called operator overloading in C++.
    std::cout << "The value: " <<  result  << "\n" << std::endl;

    float A = 0.0; 
    float B = 0.0;
  
    // Find the value of 3 way comparison
    auto ans = A <=> B;
  
    // If ans is less than zero
    if (ans < 0)
        std::cout << "-0 is less than 0" << std::endl;
  
    // If ans is equal to zero
    else if (ans == 0)
        std::cout << "-0 and 0 are equal" << std::endl;
  
    // If ans is greater than zero
    else if (ans > 0)
        std::cout << "-0 is greater than 0" << std::endl;
}


void VariableInitialization()
{
    // Braced
   // int brace {2.9};  // will throw an error since can only be an int

    // Functional
    int functionalWan (2.9); // will chop off the .9

    // Assignment
    int assignmentWan = 0;

    int testInt {4 + 2}; // or can add integer variables


    //std::cout << "Braced: " << brace << std::endl;

    std::cout << "Functional Wan: " << functionalWan << std::endl;

    std::cout << "Test int: " << testInt << std::endl;
}

void NumberSystems()
{
    int number1 = 15; // Decimal
    int number2 = 017; // Octal
    int number3 = 0x0f; // Hexadecimal
    int number4 = 0b0000011111; // Binary C++ 14

    std::cout << "Decimal is: " << number1 << std::endl;
    std::cout << "Octal is: " << number2 << std::endl;
    std::cout << "Hexadecimal is: " << number3 << std::endl;
    std::cout << "Binary is: " << number4 << std::endl;
}

void Integers()
{
    int age = 2;
    std::cout << "Size of age: " << sizeof(age) << std::endl; // integers usually store 4 bytes of memory

    signed int int1 {-30}; // stores positive / negative with signed // signed can carry more bits
    std::cout << "Size of int1: " << sizeof(int1) << std::endl;

    unsigned int int2 {30}; // can only store positive // unsigned can carry less since they go to both spectrums of positive and negative
    std::cout << "Size of int2: " << sizeof(int2) << std::endl;

    short int3 {30}; // only stores 2 bytes
    std::cout << "Size of int3: " << sizeof(int3) << std::endl;

    signed long int4 {4000}; // 4 or 8 bytes
    std::cout << "Size of int4: " << sizeof(int4) << std::endl;

    long long int5 {40}; // 8 bytes
    std::cout << "Size of age: " << sizeof(int5) << std::endl;

    std::cout << std::setprecision(1000);

    float int6 {50.543243343432323423423423423423234423443f}; // 8 bytes, 15 precision
    std::cout << "Size of int6 (float): " << sizeof(int5) << " And the number: " << int6  << std::endl;

    double int7 {50.543243043432342342342323234242342343242343242343242342343242342343243242343243}; // 8 bytes, 45 precision
    std::cout << "Size of int7 (double): " << sizeof(int7) << " And the number: " << int7 <<  std::endl;

    long double int8 {50.543243343434323232323234234234234234234234234234234234234324234432423432423423232L}; // 4 bytes, 53 precision
    std::cout << "Size of int8 (long double): " << sizeof(int8) << " And the number: " << int8 << std::endl;

    //float float1 {1000324020423}; // this float has too many digits


    //Scientific notation
    double no1 {10000032};
    double no2 {1.922323e8};
    double no3 {1.92e-11};

}

int main(void)
{
//    SpaceShipAndStd();
//    VariableInitialization();
//    ReadMeInSomeShit();
//    NumberSystems();
    Integers();

}



