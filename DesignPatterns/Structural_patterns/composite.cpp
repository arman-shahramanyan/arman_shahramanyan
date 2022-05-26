#include <iostream>

using namespace std;

class Graphic
{
    public:
        virtual void move(int x, int y) const = 0;
        virtual void draw() const = 0;
};

class Dot : Graphic
{
    private:
        int x;
        int y;
    public:
        Dot(int x, int y)
        {
            this->x = x;
            this->y = y;
        }
        void move(int x, int y) const override
        {
            this->x += x;
            this->y += y;
        }
        void draw() const override
        {
            /*......*/
        }
};

class Circle : Dot
{
    private:
        double radius;
    public:
       Circle(int x, int y, double radius)
       {
           this->radius = radius;
       } 

};



int main ()
{


    return 0;
}