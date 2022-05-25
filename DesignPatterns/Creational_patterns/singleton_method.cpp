#include <iostream>

using namespace std;

class Database
{
    private:
        static Database* obj;
        Database() {};
    public:
        static Database* getInstance();
        void getConnetion();
};

Database* Database::getInstance()
{
    if (obj == nullptr)
    {
        obj = new Database();
    }

    return obj;
}

void Database::getConnetion()
{
    (obj == nullptr) ? cout << "Not Connection \n":cout << "Connection Established \n";
}

Database* Database::obj = nullptr;

int main ()
{
    
    Database* a = Database::getInstance();
    a->getConnetion();
    return 0;
}
