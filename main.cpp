#include <iostream>
#include "shapes.h"

int main() {
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Your name is " << name<< std::endl;
    std::cout << "My name is Justin\n";
    std::cout << "I am a student at North Idaho College\n";
    std::cout << "I am studying Computer Science\n";
    std::cout << "Will is a cool guy\n";
    std::cout << "But I am cooler\n";

    std::cout << std::endl << "Shapes Demo: \n";
    Circle circle1(4);
    Circle circle2(10);
    Rectangle rect1(3,7);
    Rectangle rect2(5,9);

    std::cout << "Circle 1 Area: " << circle1.getArea() << '\n';
    std::cout << "Circle 2 Area: " << circle2.getArea() << '\n';
    std::cout << "Rect 1 Area: " << rect1.getArea() << '\n';
    std::cout << "Rect 2 Area: " << rect2.getArea() << std::endl;

    return 0;
}