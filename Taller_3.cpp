#include <vector>
#include <iostream>
using namespace std;

// 1
// PREGUNTAR
// int main (){
//   vector<int> mylist;
//   vector<int>::iterator it;
//
//   mylist.push_back(1);
//   mylist.push_back(2);
//   mylist.push_back(3);
//   mylist.push_back(5);
//   mylist.push_back(6);
//   mylist.push_back(7);
//
//   for(unsigned int i = 1; i <= mylist.size() ;i++){
//     int m = mylist[i+1];
//     if(m != mylist[i+1]){
//       it = mylist.begin();
//       mylist.insert(it+i-1,i+1);
//     }
//   }
//
//   for(unsigned int i = 1 ;i <= mylist.size();i++)
//     cout << mylist[i] << endl;
//
//   return 0;
// }
////////////////////////////////////////////////////////////////////////////////

// 2
//PREGUNTAR Y VERIFICAR
//Encontrar e iprimir el elemento mas chico

// int main(){
//   vector<string> myvector;
//   vector<string> myvector2;
//   string elem;
//
//   myvector.push_back("5");
//   myvector.push_back("4");
//   myvector.push_back("3");
//   myvector.push_back("1");
//   myvector.push_back("2");
//
//   for(unsigned int i = 0; i <= myvector.size(); i++){
//     if(myvector[i] < myvector[i+1]){
//       elem = myvector[i];
//     }
//   }
//
//   cout << elem << endl;
//
//
//   return 0;
// }
////////////////////////////////////////////////////////////////////////////////

// 3
// vector de enteros que aumenta y disminuye valor maximo en el vector
// int findMaximum(vector<int>& arr);
//
// int main (){
//   vector<int> myvector;
//   int elem;
//
//     myvector.push_back(1);
//     myvector.push_back(2);
//     myvector.push_back(3);
//     myvector.push_back(4);
//     myvector.push_back(5);
//     myvector.push_back(4);
//     myvector.push_back(3);
//     myvector.push_back(2);
//     myvector.push_back(1);
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
//   for(unsigned int i = 0; i <= 7;i++){
//     if(arreglo[i] == i){
//       cout << "El elemento; " << arreglo[i] << " coincide con su indice " << i << endl;
//     }
//   }
//
//
//   return 0;
// }
