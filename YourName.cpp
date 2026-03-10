#include <iostream>
#include <string>

int main() {
    // Create your 'Your Name' program here.
    // Your program should ask the user for their name and then output
    // "Your name is " followed by the user's name.

    std::string name;
    // Get username (name)
    std::cout << "Enter your username: ";
    std::getline(std::cin, name);
    
    std::cout << "Your name is " << name << std::endl;
    
}
