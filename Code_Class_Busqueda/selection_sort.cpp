#include <iostream>
#include <vector>
#include "functions.hpp"
using namespace std;

void swap(int i, int j, vector<int>& v){
  int temp = v[i];
  v[i] = v[j];
  v[j] = temp;
}

void selection_sort(vector<int>& v){
  for(int i =0; i < int(v.size()-1); i++){
    int min_id = i;
    for(int j = i+1; j < int(v.size()); ++j){
      if(v[j] < v[min_id])
        min_id = j;
    }
    swap(i, min_id, v);
  }
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

  generate_vector(200, vec, rng);
  print_vector(vec);

  selection_sort(vec);
  print_vector(vec);





  return 0;
}
