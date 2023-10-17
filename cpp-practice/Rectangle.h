#pragma once
#include <string>

class Rectangle
{
public:
    Rectangle() = default; // Default, empty constructor
    Rectangle(const Rectangle& source) = delete; // Copy Constructor [delete explicitly removes copy functionality and prevents pass by value]
    Rectangle(int width, int height);
    Rectangle(int width, int height, const std::string& color);
    void draw() const;
    int get_area() const; 
    int get_width() const; // Getter (accessor)
    void set_width(int width); // Setter (mutator)
    int get_height() const;
    void set_height(int height);
protected:
    int width;
    int height;
    std::string color;
};
