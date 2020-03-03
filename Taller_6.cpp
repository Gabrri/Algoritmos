#include <iostream>
#include <string>
using namespace std;

// 1

// toca tomar los numeros negativos tambien
// int kpot(int k, int n){
//
//   if(k == 0){
//     return 1;
//   }else if(k > 0){
//     return n*kpot(k-1,n);
//   }else{
//     return 0;
//   }
// }
// int main (){
//   int m =kpot(5,2);
//   cout << m << endl;
//
//   return 0;
// }
///////////////////////////////////////////////////////////////////

// 2

string prog(string m){
  if(m.size()==0){
    return m;
  }else if (m.size() > 0){
    string temp = m.substr(0, m.size()-1);
    string s_temp = prog(s_temp);
    return s_temp;
  }else{
    return 0;
  }
}

int main (){
  string z = prog("hola");
  cout << z << endl;
  return 0;
}
