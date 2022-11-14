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
   
if (x < 0 and y > 0){
		cout << (a*x - b*y) << endl;
	}else if (x >= 0 and y <= 0) {
		cout << ( a*(x*x) - b*y) << endl;	
	}else{
		cout << (a*x + b*(y*y)) << endl;
	}
   return 0;
}
