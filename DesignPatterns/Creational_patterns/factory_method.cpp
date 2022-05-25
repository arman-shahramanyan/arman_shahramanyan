#include <iostream>

using namespace std;

class Product
{
    public:
        virtual ~Product() {};
        virtual void whoami() const = 0;
};

class Apple : public Product
{
    public:
        void whoami() const override
        {
            cout << "I am Apple \n";
        }
};

class Pear : public Product
{
    public:
        void whoami() const override
        {
            cout << "I am Pear \n";
        }
};


int main()
{
    Product* product1 = new Apple();
    product1->whoami();
    Product* product2 = new Pear();
    product2->whoami();
    return 0;
}