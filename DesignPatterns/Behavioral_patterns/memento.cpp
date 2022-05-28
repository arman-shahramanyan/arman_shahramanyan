#include <iostream>
#include <string>

using namespace std;

class Editor
{
    private:
        string text;
        int curX;
        int curY;
        int selectionWidth;
    public:
        void setText(string text)
        {
            text = text;
        }

        void setCursor(int x, int y)
        {
            curX = x;
            curY = y;
        }
        void setSelectionWidth(int width)
        {
            selectionWidth = width;
        }
        Snapshot* createSnapshot()
        {
            return new Snapshot(this, text, curX, curY, selectionWidth);
        }
};

class Snapshot
{
    private:
        Editor* editor;
        string text;
        int curX;
        int curY;
        int selectionWidth;
    public:
        Snapshot(Editor* editor, string text, int curX, int curY, int selectionWidth)
        {
            editor = editor;
            text = text;
            curX = curX;
            curY = curY;
            selectionWidth = selectionWidth;
        }
        void restore()
        {
            editor->setText(text);
            editor->setCursor(curX, curY);
            editor->setSelectionWidth(selectionWidth);
        }
};

class Command
{
    private:
        Snapshot* backup;
        Editor* editor;
    public:
        void makeBackup()
        {
            backup = editor->createSnapshot();
        }
        void undo()
        {
            if(backup != nullptr)
            {
                backup->restore();
            }
        }
};





int main()
{
    return 0;
}
