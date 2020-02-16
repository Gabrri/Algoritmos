#include <vector>
#include <iostream>
using namespace std;

// 1
//
// int main (){
//   vector<int> mylist;
//   vector<int>::iterator it;
//
//   mylist.push_back(0);
//   mylist.push_back(1);
//   mylist.push_back(2);
//   mylist.push_back(3);
//   mylist.push_back(5);
//   mylist.push_back(6);
//   mylist.push_back(7);
//
//   for(int i = 0; i < int(mylist.size()) ;i++){
//     if( i != mylist[i]){
//       cout << "El elemento faltante es: " << i << endl;
//       break;
//     }
//   }
//
//   return 0;
// }
////////////////////////////////////////////////////////////////////////////////

// 2
//PREGUNTAR Y VERIFICAR
//Encontrar e iprimir el elemento mas chico

// int main(){
//   vector<string> myvector;
//   string elem;
//   string elem2;
//
//   myvector.push_back("5");
//   myvector.push_back("3");
//   myvector.push_back("1");
//   myvector.push_back("4");
//   myvector.push_back("2");
//
//   for(unsigned int i = 0; i <= myvector.size(); i++){
//     if(myvector[i] < myvector[i+1]){
//       elem = myvector[i];
//       elem2 = myvector[i+1];
//     }
//   }
//
//   cout << elem << endl;
//   cout << elem2 << endl;
//
//   return 0;
// }
////////////////////////////////////////////////////////////////////////////////

// 3
// vector de enteros que aumenta y disminuye valor maximo en el vector
// int findMaximum(vector<int>& arr);

// int main (){
//   vector<int> myvector;
//   int elem;
//
//     myvector.push_back(2);
//     myvector.push_back(4);
//     myvector.push_back(6);
//     myvector.push_back(8);
//     myvector.push_back(10);
//     myvector.push_back(8);
//     myvector.push_back(6);
//     myvector.push_back(4);
//     myvector.push_back(2);
//
//     for(unsigned int i = 0; i <= myvector.size(); i++){
//          if(myvector[i] < myvector[i+1]){
//           elem = myvector[i+1];
//         }
//       }
//     cout << elem << endl;
//
//
//   return 0;
// }
////////////////////////////////////////////////////////////////////////////////

// 4
// arreglo enteros orden distinto, y distinto signo en orden ascendente. Encontrar
//indice i tal que a[i]=i si existe

// int main (){
//
//   int arreglo[] = {-3,-2,-1,0,1,5,11,7};
//
//   for(int i = 0; i <= 7;i++){
//     if(arreglo[i] == i){
//       cout << "El elemento; " << arreglo[i] << " coincide con su indice " << i << endl;
//     }
//   }
//   return 0;
// }
