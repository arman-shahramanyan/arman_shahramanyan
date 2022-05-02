#ifndef VECTOR_H
#define VECTOR_H
#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class Vector
{
private:
  T *arr;
  int _size;
  int _capacity;

public:
  Vector();
  void AddBack(T data);
  void AddAt(T data, int index);
  void AddFront(T data);
  void RemoveAt(int index);
  void RemoveAll();
  int GetSize();
  T& operator [] (const int index) const;
  void Print();
  ~Vector();
};

template <typename T>
Vector<T>::Vector()
{
  arr = new T[32];
  _capacity = 32;
  _size = 0;
}

template <typename T>
void Vector<T>::AddBack(T data)
{
  if (_size == _capacity)
  {
    T *temp = new T[2 * _capacity];
    for (int i = 0; i < _capacity; i++)
    {
      temp[i] = arr[i];
    }
    delete[] arr;
    _capacity *= 2;
    arr = temp;
  }
  arr[_size] = data;
  ++_size;
}

template <typename T>
void Vector<T>::AddAt(T data, int index)
{
  if (index == _capacity)
  {
    AddBack(data);
  }
  else
  {
    for (int i = _size - 1; i >= index; i--)
    {
      arr[i + 1] = arr[i];
      if ((i + 1) == _capacity)
      {
        AddBack(arr[i]);
        --_size;
      }
    }
    arr[index] = data;
    ++_size;
  }
}

template <typename T>
void Vector<T>::AddFront(T data)
{
  AddAt(data, 0);
}

template <typename T>
void Vector<T>::RemoveAt(int index)
{
  if(index <= _size)
    {
      for (int i = index; i < _size; i++)
      {
        arr[i] = arr[i + 1];
      }
      --_size;
    }
  if (_size == _capacity)
    {
      T *temp = new T[_capacity / 2];
      for (int i = 0; i < _capacity; i++)
      {
        temp[i] = arr[i];
      }
      delete[] arr;
      _capacity /= 2;
      arr = temp;
    } 
}

template <typename T>
void Vector<T>::RemoveAll()
{
  T *temp = new T[32];
  delete[] arr;
  arr = temp;
}

template <typename T>
int Vector<T>::GetSize()
{
  return _size;
}

template <typename T>
T &Vector<T>::operator [] (const int index) const
{
  return arr[index];
}

template <typename T>
void Vector<T>::Print()
{
  for (int i = 0; i < _size; i++)
  {
    cout << arr[i] << endl;
  }
}

template <typename T>
Vector<T>::~Vector()
{
  RemoveAll();
  _size = 0;
  _capacity = 32;
}

#endif
