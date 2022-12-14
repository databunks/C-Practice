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
    float B = -0.0;
  
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
   // int brace {2.9};  // will throw an error since can only be an int preffered way of initializing variables

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


    // size_t usually used when we want to iterate through an array its basically like an optimized unsigned long int 
    // Using size_t appropriately can improve the portability, efficiency, or readability of your code. Maybe even all three.
    size_t e{0}; 

    const int fortnite{0}; // constants also exist

}

// alternate ways of doing shit with arrays
// ARRAYS ALWAYS STORE ELEMENTS OF THE SAME TYPE
void IntegerArrays()
{
    for (size_t i{0}; i < 10; i++) 
    {
        printf("Sup\n");
    }

    int rockets[5] {5,4,3}; // rest are set to 0

    for (size_t i{0}; i < sizeof(rockets) / sizeof(rockets[0]); i++) // think of the size of the array and the size of the first int
    {
        std::cout << rockets[i] << std::endl;
    }

    for (size_t i{0}; i < std::size(rockets); i++) // can also use c++ std library to get size
    {
        std::cout << rockets[i] << std::endl;
    }

    int rpgRockets[] {5,4,3,2,21,1,2};

    for (int value : rpgRockets) // colon operator
    {
        std::cout << "RPG rocket stock: " << value << std::endl; 
    }

    int noRockets[10];

    std::cout << "Junk data what fucking rocket stats are these: " << noRockets[0] << std::endl;


}

// Cant direct print arrays other than character wans
void CharacterArrays()
{
    char msg [15] {'T','r','i','o','c','f','a','d','h',' ','a','r',' ','l','a'};  // a \0 is a null termination string which tells c++ we hit the end although the compiler auto adds it

    std::cout << msg << std::endl;

    char HelloWorld [13] {"Wassup pakis"};

    std::cout << HelloWorld << std::endl;
}

// ALL POINTERS VARIABLES HAVE THE SAME SIZE
// Like attracts like you cant store a double address in an integer pointer
// just working with the stack here
void Pointers()
{
    
    int* pointer1{}; // braces initialize it to point to nothing 
    int* pointer2{nullptr}; // or explicitly say its pointing to nothing

    //dont declare pointers and integers like this because the second one is actually an integer and you need to put a fucking star beside it
    int* pointer420{}, pointer421{};

    int integerVar{30};
    pointer1 = &integerVar; // storing the addr of integerVar

    std::cout << pointer1 << std::endl;

    //dereference them by just adding a *
    std::cout << *pointer1 << std::endl;

    //Character pointers are really special, u can initialize them with 

    

    const char* specialCharPtr {"Moweoijweiodjttyu"}; // whats happening here is the string gets expanded into a character array the first character of the array is going to be pointed to by specialCharPtr

    std::cout << specialCharPtr << std::endl; // this just spits out the whole string 

    std::cout << *specialCharPtr << std::endl; // deferencing it points to the first char

    // Cant be doing shite like this *specialCharPtr = 'N';
    // try always declaring char* with consts because of shit like this 
    // if you want to modify this char* use regular arrays   
}


// Gonna be using more of the heap
void DynamicMemory()
{
    int *ptr1{};

    ptr1 = new int; // We are basically allocating space for a single int on the heap
                    // the memory belongs to our program from now on
                    // cant use it for anything else until we return it
                    // After this line executes we have a valid memory location allocated
                     // the size of the allocated memory will be such that can store hte type pointed to by the pointer

    *ptr1 = 4200;

    std::cout << *ptr1 << std::endl;

    {
        int int1{30}; // cant access outside of the scope since its in the stack
        int *int1Ptr = new int; // this can be accessed outside of the scope since memory is being allocated from the heap and explicitly declared by the developer, the line above cant since its being declared on the stack

        *int1Ptr = 60;

        std::cout << *int1Ptr << std::endl;

        delete int1Ptr; // freeing the memory
        int1Ptr = nullptr; // assigning it to null
    }

    // Dynamic allocation initialization
    int *pNumber1{new int}; // Memory points to junk value
    int *pNumber2{new int (23)};
    int *pNumber3{new int {46}};

    std::cout << *pNumber1 << std::endl;
    std::cout << *pNumber2 << std::endl;
    std::cout << *pNumber3 << std::endl;

    // always remember to release when your finished
    
    delete pNumber1;
    pNumber1 = nullptr;

    delete pNumber2;
    pNumber2 = nullptr;

    delete pNumber3;
    pNumber3 = nullptr;

}


void DanglingPointers()
{
    // case 1: Uninitialized pointer
    int *p_number1; // Dangling uninitialized pointer
    std::cout << *p_number1 << std::endl; // crash or just random shit

    // case 2: deleted pointer
    int* p_number2{new int(45)};

    // Before delete
    std::cout << *p_number2 << std::endl;

    delete p_number2;

    // After delete
    std::cout << *p_number2 << std::endl; // random shite

    // Case 3: multiple pointers pointing to the same address

    int *p_number3{new int(34)};
    int *p_number4{p_number3};

    std::cout << *p_number3 << std::endl;
    std::cout << *p_number4 << std::endl;

    // Deleting p_number3 
    delete p_number3;

    std::cout << *p_number4 << std::endl; // garbage or crash

    // Solutions
    // Initialize your pointers
    // Reset pointers after delete
    // For multiple pointers to the same address make sure the owner (MASTER) pointer is very clear
    
}

// How to run out of memory :)
// ⢿⣿⣿⣿⣭⠹⠛⠛⠛⢿⣿⣿⣿⣿⡿⣿⠷⠶⠿⢻⣿⣛⣦⣙⠻⣿
// ⣿⣿⢿⣿⠏⠀⠀⡀⠀⠈⣿⢛⣽⣜⠯⣽⠀⠀⠀⠀⠙⢿⣷⣻⡀⢿
// ⠐⠛⢿⣾⣖⣤⡀⠀⢀⡰⠿⢷⣶⣿⡇⠻⣖⣒⣒⣶⣿⣿⡟⢙⣶⣮
// ⣤⠀⠀⠛⠻⠗⠿⠿⣯⡆⣿⣛⣿⡿⠿⠮⡶⠼⠟⠙⠊⠁⠀⠸⢣⣿
// ⣿⣷⡀⠀⠀⠀⠀⠠⠭⣍⡉⢩⣥⡤⠥⣤⡶⣒⠀⠀⠀⠀⠀⢰⣿⣿
// ⣿⣿⡽⡄⠀⠀⠀⢿⣿⣆⣿⣧⢡⣾⣿⡇⣾⣿⡇⠀⠀⠀⠀⣿⡇⠃
// ⣿⣿⣷⣻⣆⢄⠀⠈⠉⠉⠛⠛⠘⠛⠛⠛⠙⠛⠁⠀⠀⠀⠀⣿⡇⢸
// ⢞⣿⣿⣷⣝⣷⣝⠦⡀⠀⠀⠀⠀⠀⠀⠀⡀⢀⠀⠀⠀⠀⠀⠛⣿⠈
// ⣦⡑⠛⣟⢿⡿⣿⣷⣝⢧⡀⠀⠀⣶⣸⡇⣿⢸⣧⠀⠀⠀⠀⢸⡿⡆
// ⣿⣿⣷⣮⣭⣍⡛⠻⢿⣷⠿⣶⣶⣬⣬⣁⣉⣀⣀⣁⡤⢴⣺⣾⣽⡇
void FailingNewOperatorAndTryCatches()
{
    // try catches in c++ exist too :)
    try
    {
        long* fuckTonOfIntsPtr {new long[9999999999999]}; // Crashes because allocating an insane amount of space in one go
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n'; // what just means what kind of problem
    }

    // if you want no exceptions thrown just use this

    for (size_t i{}; i < 1000000000; i++)
    {
        int* lottaInts{new (std::nothrow) int[10000000000]};

        if (lottaInts == nullptr)
        {
            //Don't try to dereference and use lottaints here
            // youll get UB no memory has been allocated here
            // it failed and returned nullptr because of the std::nothrow setting
        }
    }
    
    

    // Or use a huge loop to fuck up the amount of memory you have (i have alot of ram so doesent crash on mine lol)
    for (size_t i{}; i < 1000000000000000000000000; i++)
    {
        int* lotsOfFookinInts{new int[10000]};
    }
}

// Making sure you are working with pointers with valid memory addresses
void NullPointerSafety()
{
    
    int* int1Ptr{};

    // Verbose nullptr check
    if (!(int1Ptr == nullptr))
    {
        std::cout << "Points to a VALID address" << std::endl;
    }
    else std::cout << "Points to an INVALID address" << std::endl;

    int1Ptr = new int(420);

    // Compact nullptr check
    if (int1Ptr) // returns 1 if no nullptr
    {
        std::cout << "Points to a VALID address" << std::endl;
    }
    else std::cout << "Points to an INVALID address" << std::endl;


    delete int1Ptr;
    int1Ptr = nullptr; 
    delete int1Ptr; // wont cause any problems if int1Ptr contains contains nullptr


    if (int1Ptr) // nullptr check (dont need to do things like this)
    {
        delete int1Ptr;
        int1Ptr = nullptr;
    }
}


// Losing access to memory that was dynamically allocated
void MemoryLeaks()
{
    // Example 1
    // Assigning an address to a pointer after allocating memory to it and not deleting
    int* intPtr1 {new int{42}}; // Points to some address (addr1)

    // Should delete and reset here

    int int1{55};  // lives at addr2

    intPtr1 = &int1; // now intPtr1 points to addr2 but
                     // addr1 is still in use by the program but we lost access to that memory location
                     // memory has been leaked

                    
    // Example 2
    // Double allocation
    int *intPtr2 {new int{34}};

    // Use the pointer

    // Should delete and reset here

    intPtr2 = new int{534}; // memory with int 34 leaked

    // Example 3
    // Pointer in nested scope

    {
        int *intPtr3 {new int{56}};
    }

    // Memory with int{56} leaked
}

// Arrays are allocated on the heap with the enw operator
void DynamicArrays()
{
    // Different ways of declaring an array dynamically
    // and how they are initialized

    size_t size{10};

    int *p_bugattis {new int[size]}; // will contain garbage values
    int *p_lambos {new int[size]{}}; // All values set to 0
    int *p_ferraris {new int[size]{1,2,3,4,5}}; // first slots of array set to 1,2,3,4,5 then rest are set to 0

    

    if (p_ferraris) // Null pointer check
    {
        // Iterating through a heap array
        for (size_t i{}; i < size; i++)
        {
            std::cout << p_ferraris[i] << std::endl;
        }
    }

    // releasing memory (for arrays)

    delete[] p_bugattis;
    p_bugattis = nullptr;

    delete[] p_lambos;
    p_lambos = nullptr;

    delete[] p_ferraris;
    p_ferraris = nullptr;

    // Pointers initialized from dynamic arrays are different from regular arrays:
    // std::size doesent work on them and they dont support range based for loops
    // so you must have a way of knowing the size beforehand

    int *redBuggatis = new int[size] {1,2,3,4,5,6,7,8,9,10};

    //std::cout << std::size(redBuggatis) << std::endl; // error

    // for (int redBuggati : redBuggatis) // range based loops dont work either
    // {
    //     std::cout << "Red Buggatis: " << redBuggati << std::endl;
    // }
}

// References are aliases to variables used by &
void References()
{
    int intValue {36};

    int& intValueReference {intValue}; // they both point to the same variable so manipulating anything will result in the same values when printed, "They are EXACTLY the same"

    intValueReference = 2;

    std::cout << intValue << std::endl;

    std::cout << intValueReference << std::endl;

    // References are somewhat like const pointers e.g:

    int intValue2{32};

    int* const constPtr = &intValue;

    //constPtr = &intValue2; Error

    *constPtr = intValue2;

    std::cout << *constPtr << std::endl;


    // Can also make a reference a const which may be handy
    
    const int& intValueReference2{intValue}; // const REFERENCE not const VARIABLE

    //intValueReference2 = 2; // error

    std::cout << intValueReference2 << std::endl; 

    // but modifying hte initial int works

    intValue = 2;

    std::cout << intValueReference2 << std::endl; 

    // Can also do the same thing with const ref with pointer : const pointer to const data
    // a reference by default is like a const pointer. All we need to do is make the const pointer to point to const data

    const int* const const_ptr_to_const_intValue{&intValue};

    // Error:  *const_ptr_to_const_intValue = 23; 

    std::cout << *const_ptr_to_const_intValue << std::endl; 
}

int main(void)
{  

//    SpaceShipAndStd();
//    VariableInitialization();
//    ReadMeInSomeShit();
//    NumberSystems();
//    Integers();
//    IntegerArrays();
//    CharacterArrays(); 
//    Pointers();
//    DynamicMemory();
//    DanglingPointers();
//    FailingNewOperatorAndTryCatches();
//    NullPointerSafety();
//    MemoryLeaks();
//    DynamicArrays();
References();
}



