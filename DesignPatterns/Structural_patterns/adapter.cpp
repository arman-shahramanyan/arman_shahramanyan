#include <iostream>
#include <math.h>

using namespace std;


class RoundHole 
{
    private:
        double radius;

    public:
        RoundHole(double radius)
        {
            this->radius = radius;
        }

        double getRadius()
        {
            return radius;
        }

        bool check (RoundPeg peg)
        {
            bool result;
            result = (this->getRadius() >= peg.getRadius());
            return result;
        }
};

class RoundPeg {
    private:
        double radius;

    public:
        RoundPeg(double radius)
        {
            this->radius = radius;
        }   

        double getRadius()
        {
            return radius;
        }
};

class SquarePeg {
    private:
        double width;

    public:
        SquarePeg(double width)
        {
            this->width = width;
        }

        double getWidth()
        {
            return width;
        }
        
        double getSquare()
        {
            double result;
            result = pow(this->width, 2);
            return result;
        }
};

class SquarePegAdapter:RoundPeg {
    private:
        SquarePeg peg;

    public:
        SquarePegAdapter(SquarePeg peg)
        {
            this->peg = peg;
        }
        double getRadius()
        {
            double result;
            result = (peg.getWidth() * sqrt(2)) / 2;
            return result;
        }
};

int main()
{
    RoundHole* hole = new RoundHole(5);
    RoundPeg* rpeg = new RoundPeg(5);
    hole->check(*rpeg);

    SquarePeg* small_sqpeg = new SquarePeg(5);
    SquarePeg* large_sqpeg = new SquarePeg(10);

    SquarePegAdapter* small_sqpeg_adapter = new SquarePegAdapter(*small_sqpeg);
    SquarePegAdapter* large_sqpeg_adapter = new SquarePegAdapter(*large_sqpeg);
    hole->check(small_sqpeg_adapter);
    hole->check(large_sqpeg_adapter);

    return 0;
}