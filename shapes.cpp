/**
 * @file shapes.cpp
 * @author Caleb Blondell (crblondell@students.nic.edu)
 * @brief 
 * @version 0.1
 * @date 2025-03-25
 * 
 * 
 */

#include "shapes.h"

Circle::Circle(int radius)
{
    this->mRadius = radius;
}

float Circle::getArea()
{
    return (3.14159 * mRadius * mRadius);
}

Rectangle::Rectangle(int width, int height)
{
    mWidth = width;
    mHeight = height;
}

float Rectangle::getArea()
{
    return (mWidth * mHeight);
}