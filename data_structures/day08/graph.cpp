#include <iostream>
#include <limits>
#include <queue>
using namespace std;

class Graph {
    private:
        
        int _vertices;
        int _matrix[INT8_MAX][INT8_MAX];
    public:
        Graph(int);
        bool** GetMatrix();
        int GetVertix();
        void PrintMatrix();
        void AddEdge(int, int);
        void Add();
        void removeNode(int);
        void removeEdge(int, int);
        bool isEdgeExists(int, int);
        bool isPathExists(int, int);
        void nodeNeighbours(int);
        void nodeConnection(int);
        queue<int> q;

};

Graph::Graph(int vertices) {
    _vertices = vertices;
    for (int i = 0; i < _vertices; i++)
    {
        for (int j = 0; j < _vertices; j++)
        {   
           _matrix[i][j] = 0;
        }
    }
}

int Graph::GetVertix() {
    return _vertices;
}

void Graph::PrintMatrix()
{
    for (int i = 0; i < _vertices; i++)
    {
        for (int j = 0; j < _vertices; j++)
        {
            cout << _matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void Graph::AddEdge(int i, int j) {
    _matrix[i][j] = 1;
    _matrix[j][i] = 1;
}

void Graph::Add() {
    _vertices++;
    for (int i = 0; i < _vertices; i++)
    {
        for (int j = 0; j < _vertices; j++)
        {
            _matrix[i][_vertices-1] = 0;
            _matrix[_vertices-1][j] = 0;
        }
    }
 
}

void Graph::removeEdge(int i, int j)
{
    _matrix[i][j] = 0;
    _matrix[j][i] = 0;
}

void Graph::removeNode(int x)
{
    for (int i = 0; i < _vertices; i++)
    {
        for (int j = x; j < _vertices; j++)
        {
            _matrix[i][j] = _matrix[i][j + 1];
        }
        if (i == x) continue;
    }
    for (int i = x; i < _vertices; i++)
    {
        for (int j = 0; j < _vertices; j++)
        {
            _matrix[i][j] = _matrix[i + 1][j];
            if (j == x) continue;
        }
    }
    _vertices--;
}

bool Graph::isEdgeExists(int i, int j)
{
    if (_matrix[i][j] == 1) return true;
    return false;
}

bool Graph::isPathExists(int x, int y)
{
    int countX = 0;
    int countY = 0;
    for (int i = 0; i < _vertices; i++)
    {
        if (_matrix[x][i] == 0) countX++;
        if (_matrix[y][i] == 0) countY++;
    }
    if (countX == _vertices || countY == _vertices) return false;
    else if((countX == _vertices - 1 && _matrix[x][x] == 1) || (countY == _vertices - 1 && _matrix[y][y] == 1)) return false;
    else return true;
}

void Graph::nodeNeighbours(int index)
{
    cout << "Neighbours of " << index << endl; 
    for (int i = 0; i < _vertices; i++)
    {
        if (_matrix[index][i] == 1)
            cout << i << " ";
    }
}

void Graph::nodeConnection(int index)
{
    /*for (int i = 0; i < _vertices; i++)
    {
        if (_matrix[index][i] == 1)
        {
            q.push(i);    
        }
    }
    nodeConnection(q.back());
    for (int i = 0; i < _vertices; i++)
    {
        cout << q.front() << " ";
        q.pop();
    }
    */
}
int main() 
{
    int vertices;
    cout << "input size of matrix :";
    cin >> vertices;
    Graph graph(vertices);
    graph.AddEdge(2, 3);
    graph.AddEdge(1, 2);
    graph.AddEdge(0,0);
    graph.AddEdge(0,0);
    graph.AddEdge(3,1);
    graph.PrintMatrix();
    cout << endl;
    graph.Add();
    graph.PrintMatrix();
    //graph.removeNode(1);
    cout << endl;
    cout << graph.isPathExists(2, 0) << "\n\n";
    //graph.PrintMatrix();
    cout << endl;
    //graph.nodeConnection(2);

    return 0;
}