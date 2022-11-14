#include <iostream>
using namespace std;

int main() {
   int a;
   int b;
   int x;
   int y;
   int z;
   
   cout << "inserisci i valori di: \n a: \n b: \n x: \n y:";
   cin >> a;
   cin >> b;
   cin >> x;
   cin >> y;
   
if(x < 0, y >0 )
   z = a*x - b*y;
   
  else (x >= 0, y <= 0)
     z = a*(x*x) - b*y;
   else
      z = a*x + b*(y*y);
   
   cout << z << endl;
   
   return 0;
}
