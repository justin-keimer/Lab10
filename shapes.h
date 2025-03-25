/**
 * @file shapes.h
 * @author Caleb Blondell (crblondell@students.nic.edu)
 * @brief 
 * @version 0.1
 * @date 2025-03-25
 * 
 * 
 */

#ifndef SHAPES_H
#define SHAPES_H

class Shape
{
    public:
        Shape(){}
        virtual ~Shape(){}
        virtual float getArea() = 0;
};

class Circle : public Shape
{
    public:
        Circle(int radius);
        ~Circle(){}
        float getArea();
    private:
        int mRadius;

};

class Rectangle: public Shape
{
    public:
        Rectangle(int width, int height);
        ~Rectangle(){}
        float getArea();
    private:
        int mWidth;
        int mHeight;
};

#endif