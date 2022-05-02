#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

const int size = 10000;

int *BubbleSorting(int arr[size]);
int *InSearchSort(int arr[size]);
int *Merge(int*, int*, int, int);
int *MergeSort(int arr[], int size);
int *QuickSort(int arr[], int size);
void Print(int array[size]);

int main()
{
  int source[size];
  for (int i = 0; i < size; i++)
  {
    source[i] = rand() % size;
  }
  clock_t start, finish;
  start = clock();
  BubbleSorting(source);
  finish = clock();
  cout << (1000.0 * (finish - start)) / CLOCKS_PER_SEC << endl;
  start = clock();
  InSearchSort(source);
  finish = clock();
  cout << (1000.0 * (finish - start)) / CLOCKS_PER_SEC << endl;
  start = clock();
  MergeSort(source, size);
  finish = clock();
  cout << (1000.0 * (finish - start)) / CLOCKS_PER_SEC << endl;
  start = clock();
  QuickSort(source, size);
  finish = clock();
  cout << (1000.0 * (finish - start)) / CLOCKS_PER_SEC << endl;
  
  /*cout << "Source array  ";
  Print(source);
  cout << "Bubble sort array  ";
  Print(BubbleSorting(source));
  cout << "In search sort array  ";
  Print(InSearchSort(source));
  cout << "merge";
  Print(MergeSort(source, size));
  cout << "quick";
  Print(QuickSort(source, size));
  */
  return 0;
}

int *BubbleSorting(int arr[size])
{
  int temp;
  bool swap;
  for (int i = 0; i < size; i++)
  {
    swap = false;
    for (int j = 0; j < size; j++)
    {
      if (arr[j] >= arr[j + 1])
      {
        temp = arr[j + 1];
        arr[j + 1] = arr[j];
        arr[j] = temp;
        swap = true;
      }
    }
    if (!swap)
      break;
  }

  return arr;
}

int *InSearchSort(int *arr)
{
  int temp;
  for (int i = 0; i < size; i++)
  {
    for (int j = i + 1; j > 0; j--)
    {
      if (arr[j] <= arr[j - 1])
      {
        temp = arr[j];
        arr[j] = arr[j - 1];
        arr[j - 1] = temp;
      }
    }
  }
  return arr;
}

void Print(int *array)
{
  for (int i = 0; i < size; i++)
  {
    cout << array[i] << " ";
  }
  cout << endl;
}

int *Merge(int *arrL, int *arrR, int lsize, int rsize)
{
    int* arrS = new int [lsize + rsize];
    int  tmp1 = 0;
    int  tmp2 = 0;
    int  index = 0;
    while (tmp1 < lsize && tmp2 < rsize){

        while(tmp1 < lsize && arrL[tmp1] < arrR[tmp2]){
            arrS[index] = arrL[tmp1];
            tmp1++;
            index++;
        }

        while (tmp2 < rsize && arrL[tmp1] >= arrR[tmp2]){
            arrS[index] = arrR[tmp2];
            tmp2++;
            index++;
        }

    }
    if(tmp1 == lsize){
        for(int i = tmp2; i < rsize; i++){
            arrS[index] = arrR[i];
            index++;
        }
    } else {
        for(int i = tmp1; i < lsize; i++){
            arrS[index] = arrL[i];
            index++;
        }
    }

    return arrS;
}

int *MergeSort(int arr[], int size)
{
    if(size == 1)
    {
        return arr;
    }
    int lsize = size / 2;
    int rsize = size - lsize;
    int *arrL = new int[lsize];
    int *arrR = new int[rsize];
    for (int i = 0; i < lsize; i++)
    {
        arrL[i] = arr[i];
    }
    for (int i = 0; i < rsize; i++)
    {
        arrR[i] = arr[lsize + i];
    }
    arrL = MergeSort(arrL, lsize);
    arrR = MergeSort(arrR, rsize);

    return Merge(arrL, arrR, lsize, rsize);
}

int *QuickSort(int arr[], int size)
{
    int i = 0;
    int j = size - 1;
    int mid = arr[size / 2];
    do {
        while(arr[i] < mid)
        {
            i++;
        }
        while(arr[j] > mid)
        {
            j--;
        }
        if (i <= j)
        {
            int tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp; 
            i++;
            j--;
        }
    } while (i <= j);
    if(j > 0) 
    {
        QuickSort(arr, j + 1);
    }
    if (i < size) {
        QuickSort(&arr[i], size - i);
    }
    return arr;
}