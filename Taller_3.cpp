#include <vector>
#include <iostream>
using namespace std;

// 1
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
//Encontrar e iprimir el elemento mas chico

int main(){
  vector<string> myvector;
  string elem;

  myvector.push_back("hola");
  myvector.push_back("ola");
  myvector.push_back("lola");
  myvector.push_back("bola");

  for(unsigned int i = 0; i <= myvector.size(); i++){
    if(myvector[i] < myvector[i+1]){
      elem = myvector[i];
    }
  }

  cout <<elem << " el mas peque" << endl;


  return 0;
}
