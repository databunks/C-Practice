#include <iostream>

void SpaceShipAndStd();
void RunTimeError();
void VariableInitialization();

int main(void)
{
   SpaceShipAndStd();  
   //RunTimeError();  
   VariableInitialization();

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

void RunTimeError()
{
   // int val = 7/0; // Runtime error
   // std::cout << "Value : " << val << std::endl;
}

void VariableInitialization()
{
    // Braced
    //int brace {2.9};  // will throw an error since can only be an int

    // Functional
    int functionalWan (2.9); // will chop off the .9

    // Assignment
    int assignmentWan = 0;
}
