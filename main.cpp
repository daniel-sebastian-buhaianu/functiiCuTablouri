#include <iostream>
#include <fstream>
using namespace std;
int* vector(int);
int** matrice(int, int);
int main()
{
  int n;
  cout << "n = "; cin >> n;
  int* v = vector(n);
  int** m = matrice(n, n);
  ofstream g("main.out");
  for (int i = 0; i < n; i++)
    g << v[i] << ' ';
  g << "\n\n";
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
      g << m[i][j] << ' ';
    g << '\n';
  }
  g.close();
  return 0;
}
int* vector(int n)
{
  int* a = new int[n];
  for (int i = 0; i < n; i++)
    a[i] = i;
  return a;
}
int** matrice(int n, int m)
{
  int** a= new int*[n];
  for (int i = 0; i < n; i++)
    a[i] = new int[m];
  int nr = 0;
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      a[i][j] = nr++;
  return a;
}
