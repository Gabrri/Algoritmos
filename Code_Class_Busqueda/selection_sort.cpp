#include <iostream>
#include <vector>
#include "functions.hpp"
using namespace std;



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


int main(){
  unsigned seed = 123;
  minstd_rand0 rng(seed);
  vector<int> vec;

  generate_vector(500, vec, rng);

  selection_sort(vec);
  print_vector(vec);


  return 0;
}

