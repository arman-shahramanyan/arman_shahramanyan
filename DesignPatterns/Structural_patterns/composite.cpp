#include <iostream>

using namespace std;

class Graphic
{
    public:
        virtual void move(int x, int y) const = 0;
        virtual void draw() const = 0;
};

class Dot:Graphic
{
    public:
        int x;
        int y;
        Dot(int x, int y)
        {
            this->x = x;
            this->y = y;
        }
        void move(int x, int y) const override
        {
           x += x;
           y += y;
        }
        void draw() const override
        {
            /*......*/
        }
};

class Circle
{
    private:
        Dot* dot;
        double radius;
    public:
       Circle(int x, int y, double radius)
       {
           dot->x = x;
           dot->y = y;
           this->radius = radius;
       } 
        void draw()
        {
            /*....*/
        }
};

class CompoundGraphic:Graphic
{
    private:
        Graphic* children[10];
    public:
        void add(Graphic* child)
        {
            for (int i = 0; i < 10; i++)
            {
                if (children[i] != NULL)
                {
                    children[i] = child;
                }
            }
        }

        void remove(Graphic* child)
        {
            for (int i = 0; i < 10; i++)
            {
                if (children[i] == child)
                {
                    children[i] = NULL;
                }
            }
        }

        void move(int x, int y) const override
        {
            for (int i = 0; i < 10; i++)
            {
                children[i]->move(x, y);
            }
        }
};

class ImageEditor
{
    private:
        CompoundGraphic* all;
    public:
        void load()
        {
            all->add(new Dot(1, 2));
            all->add(new Circle(5, 3, 10));
        }
};


int main ()
{


    return 0;
}