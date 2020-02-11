

#include <iostream>
#include <vector>
#include "functions.hpp"
using namespace std;

// 1 Bidirectional bubble sort 

void  bubble_sort(vector<int>& v){
	for(unsigned int i = 0; i < v.size() ;i++){
		for(unsigned int j =0; j < v.size(); j++){
			if(v[j] > v[j+1])
				swap(v[j],v[j+1]);
		}
	}
}

void bidirectional_bs(vector <int>& vec){
}


int main(){
  vector<int> vec;
  
  vec.push_back(7);
  vec.push_back(6);
  vec.push_back(5);
  vec.push_back(4);
  vec.push_back(2);
  vec.push_back(1);
  vec.push_back(3);
  
  for(unsigned int i = 1; i <= vec.size(); i++)
		cout << "Sin hacer bubble sort " << vec[i] << " " <<  endl;

  bubble_sort(vec);
  
	for(unsigned int i = 1; i <= vec.size(); i++)
		cout << "haciendo bubble sort " << vec[i] <<  endl;
  
  return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////

// 2



