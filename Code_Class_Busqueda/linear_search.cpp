#include <iostream>
#include <vector>
#include "functions.hpp"
using namespace std;

int linear_search(int X, const vector<int>& v){
  for(unsigned int i = 0; i < v.size(); ++i){
    if(v[i] == X)
      return i;
  }
  return -1;
}

// generar un vector aleatorio

void generate_vector(int size, vector<int>& v, minstd_rand0& rng){
  v.clear();
  const int max_num = size;
  //Generation of a sequence of (pseudo)random numbers
  rng();
  for(int i = 0; i < size; ++i){
    int num = int(max_num * ( double(rng()) / rng.max() ));
    v.push_back(num);
  }
}

void print_vector(vector<int>& v){
  for(int i = 0; i < v.size(); ++i)
    cout << v[i] << " ";
  cout << "\n";
}

int main(){
  unsigned seed = 123;
  minstd_rand0 rng(seed);
  vector<int> vec;
  int X = 76;

  generate_vector(200, vec, rng);
  print_vector(vec);

  linear_search(X,vec);
  print_vector(vec);





  return 0;
}
