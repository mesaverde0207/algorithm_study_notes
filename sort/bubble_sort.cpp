#include <iostream>

int bubbleSort(int A[], int N)
{
  bool flag = true;
  int temp, sw = 0;
  while (flag)
  {
    flag = false;
    int i = 0;
    for (int j = 0; j < N - i - 1; j++)
    {
      if (A[j] > A[j + 1])
      {
        flag = true;
        sw++;
        temp = A[j];
        A[j] = A[j + 1];
        A[j + 1] = temp;
      }
    }
  }
  return sw;
}

int main()
{
  int N, A[100], sw;

  std::cin >> N;
  for (int i = 0; i < N; i++)
  {
    std::cin >> A[i];
  }

  sw = bubbleSort(A, N);

  std::cout << std::endl
            << "Result" << std::endl;
  for (int i = 0; i < N; i++)
  {
    std::cout << A[i] << std::endl;
  }
  std::cout << "swap: " << sw << std::endl;
}
