#include "CFibonacci.h"
using namespace std;

int main()
{
  int nter;

  do {
    cout << "Numero de terminos: ";
    cin >> nter;
  }while(nter<2);
  CFibonacci obj(nter);
  cout << "\n";
  cout << "Los " <<  nter << " primeros terminos de la Fibonacci" <<"\n";
  vector<int> serie = obj.serie();
  for(const int i:serie)
    cout << i << " ";
  cout << "\n\n";
  cout << "La suma de los terminos es: " << obj.suma() << "\n";
  cout << "El ultimo termino es      : " << obj.getUltimo() << "\n";
  cout << "\nQue termino desea (el conteo inicia en el termino 0 ) : ";
  int t;
  cin >> t;
  cout << "El termino " << t << " de la serie es: " << obj.getNTermino(t) << "\n";
  cout << "\nLa serie al reves es\n";
  vector<int> alReves = obj.delUltimoAlPrimero();
  for(const int i:alReves)
    cout << i << " ";
  return 0;
}
