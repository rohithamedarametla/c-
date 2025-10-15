#include <iostream> 
// Global variable 
int num = 10; 
// Custom namespace 
namespace MyMath { 
int num = 20; 
void display() { 
std::cout << "Inside namespace MyMath, num = " << num << std::endl; 
} 
} 
 
int main() { 
    int num = 30; // Local variable 
 
    // Display all three 'num' values 
    std::cout << "Local num = " << num << std::endl; 
    std::cout << "Global num = " << ::num << std::endl; 
    std::cout << "Namespace num = " << MyMath::num << std::endl; 
 
    // Call function from namespace 
    MyMath::display(); 
 
    return 0; 
} 
 
