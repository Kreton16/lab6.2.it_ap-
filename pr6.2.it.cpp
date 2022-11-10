#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;
int Number(int* a, const int size) {
  int k = 0;
  for (int i = 0; i < size; i++) {
    if (!(i % 2 == 0))
      k++;
  }
  return k;
}
void Create(int* a, const int size, const int Low, const int High)
{
  for (int i = 0; i < size; i++)
    a[i] = Low + rand() % (High - Low + 1);
}
void Print(int* a, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(4) << a[i];
  cout << endl;
}
 
int Sum(int* a, const int size) {
  int s = 0;
  for (int i = 0; i < size; i++) {
    if (!(i % 2 == 0))
      s += a[i];
  }
    return s;

}

double Avg(int num, int sum) {

    return 1. * sum / num;

}

int main()
{
  srand((unsigned)time(NULL)); // ініціалізація генератора випадкових чисел
  const int n = 21;
  int a[n];
  int Low = 15;
  int High = 85;
  Create(a, n, Low, High);
  Print(a, n);
  int number = Number(a, n);
  int sum = Sum(a, n);
  cout << "Avg: ";
  double avg = Avg(number, sum);
  cout << avg;

  return 0;

}