#include <iostream>
using namespace std;

int main()
{
  int i = 3, j = 5;
  int *ponteiroDeI, *ponteiroDeQ;
  ponteiroDeI = &i;
  ponteiroDeQ = &j;

  /* cout << "a: " << ponteiroDeI == &i << endl; */                // true
  cout << "b: " << *ponteiroDeI - *ponteiroDeQ << endl;            // -2
  cout << "c: " << **&ponteiroDeI << endl;                         // 3
  cout << "d: " << 3 * -*ponteiroDeI / (*ponteiroDeQ) + 7 << endl; // 6
}
