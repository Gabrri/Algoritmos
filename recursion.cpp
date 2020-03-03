#include <iostream>
#include <set>

using namespace std;

set<string> generatePermutations( string str){
  set<string> conjunto;

  if(str.size()==0){
    conjunto.insert("");
    return conjunto;
  } else {
    char primero = str[str.size()-1];
    string temp = str.substr(0, str.size()-1);
    set <string> s_temp = generatePermutations(s_temp, primero);
    return conjunto;
  }
}

int main(){
  generatePermutations("ABC");
  return 0;
}
