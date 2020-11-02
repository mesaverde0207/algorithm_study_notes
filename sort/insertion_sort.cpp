#include <iostream>

void insertionSort(int A[], int N)
{
  for (int i = 0; i < N; i++)
  {
    int v = A[i], j = i - 1;
    while (j >= 0 && A[j] > v)
    {
      A[j + 1] = A[j];
      j--;
    }
    A[j + 1] = v;
  }
}

int main()
{
  int N;
  int A[1000];

  std::cin >> N;
  for (int i = 0; i < N; i++)
  {
    std::cin >> A[i];
  }

  insertionSort(A, N);

  std::cout << std::endl
            << "Result" << std::endl;
  for (int i = 0; i < N; i++)
  {
    std::cout << A[i] << std::endl;
  }
}
