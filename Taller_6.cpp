#include <iostream>
#include <string>
#include <math.h>
#include <set>
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
//   int m =kpot(8,8);
//   cout << m << endl;
//
//   return 0;
// }
///////////////////////////////////////////////////////////////////

// 2

// string prog(string m){
//     if(m.size()==1){
//     return m;
//   }else if(m.size()==0){
//     return 0;
//   }else{
//     for(int i =1; i <= int(m.size()+1); i++)
//     cout << m[m.size()-i] << endl;
//   }
//   return 0;
// }
//
// int main (){
//   string z = prog("hola");
//   cout << z << endl;
//   return 0;
// }
////////////////////////////////////////////////////////////////

// 3

// bool palindromo(string pal){
//   if(pal.size()==0){
//     return true;
//   }else if (pal.size()==1){
//     return true;
//   }else if(pal[0] == pal[pal.size()-1]){
//     string cadena = pal.substr(1, pal.size()-1);
//     palindromo (cadena);
//     return true;
//   }else{
//     return false;
//   }
// }
//
// int main(){
//   cout << palindromo("sometamosomatemos") << endl;
//   return 0;
// }


///////////////////////////////////////////////////////////////////

// 4

// float Combinatoria(int n, int k){
//   if(n<k){
//     return 0;
//   }else if(n==k){
//     return 1;
//   }else if(k==n-1){
//     return n;
//   }else if(k == 0){
//     return 1;
//   }else{
//     return (Combinatoria(n-1,k-1)+Combinatoria(n-1,k));
//   }
// }
//
// int main(){
//   float m = Combinatoria(50,6);
//   cout << m << endl;
//   return 0;
//
// }

//////////////////////////////////////////////////////////////////////

// 5

set<string> permutations(const string & pal){

  set<string> final;
  set<string>:: iterator it;

  if(pal.size()==0){
    final.insert(" ");
    return final;
  }else if( pal.size()==1){
    final.insert(pal);
    return final;
  }else{
    
    string tmp = pal.substr(0, pal.size() - 1);
    set<string> s_tmp = permutations(tmp);
    return final;
  }

}

int main (){

  set<string> myset = permutations("mencion");
  set<string>:: iterator it;

  for(it = myset.begin(); it != myset.end(); it++){
    cout << ' ' << *it << endl;
  }
  return 0;
}
