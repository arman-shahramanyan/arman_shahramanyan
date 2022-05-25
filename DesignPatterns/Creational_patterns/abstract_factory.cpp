#include <iostream>

using namespace std;

class Button
{
    public:
        virtual void ButtonStyle() const = 0;
};

class WinButton : public Button
{
    public:
        void ButtonStyle() const override
        {
            cout << "Windows Style Button\n";
        }
};

class MacButton : public Button
{
    public:
        void ButtonStyle() const override
        {
            cout << "MacOS Style Button\n";
        }
};

class Checkbox
{
    public:
        virtual void CheckboxStyle() const = 0;
};

class WinCheckbox : public Checkbox
{
    public:
        void CheckboxStyle() const override
        {
            cout << "Windows Style Checkbox \n";
        }
};

class MacChechbox : public Checkbox
{
    public:
        void CheckboxStyle() const override
        {
            cout << "MacOS Style Checkbox \n";
        }
};

class GUIFactory
{
    public:
        virtual Button* CreateButton() const = 0;
        virtual Checkbox* CreateCheckbox() const = 0;
};

class WinFactory : public GUIFactory
{
    public:
        Button* CreateButton() const override
        {
            return new WinButton();
        }
        Checkbox* CreateCheckbox() const override
        {
            return new WinCheckbox();
        }
};

class MacFactory : public GUIFactory
{
    public:
        Button* CreateButton() const override
        {
            return new MacButton();
        }
        Checkbox* CreateCheckbox() const override
        {
            return new MacChechbox();
        }
};

int main()
{
    MacFactory* mac = new MacFactory();
    Button* b = mac->CreateButton();
    Checkbox* c = mac->CreateCheckbox(); 
    b->ButtonStyle();
    c->CheckboxStyle();
    return 0;
}