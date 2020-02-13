
#include <iostream>
#include <vector>
#include "functions.hpp"
using namespace std;

// 1 Bidirectional bubble sort


// bubble sort normal
void  bubble_sort(vector<int>& v){
	for(unsigned int i = 0; i < v.size() ;i++){
		for(unsigned int j =0; j < v.size(); j++){
			if(v[j] > v[j+1])
				swap(v[j],v[j+1]);
		}
	}
}

// ordenar en dos direcciones Bidirectinal bubble sort
// elemento mas chico de primeras elemento mas grande de ultimas
// 2 elemento chas chico de segundas, elemento menos grande de penultimas
// abajo hacia arriba, pasa alternativamente de abajo hacia arriba y luego de arriba hacia abajo
void bidirectional_bubble_sort(vector<int>& vec){
	
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
// selection sort

void selection_sort(vector<int>& vec){
	for(unsigned int i = 0; i < vec.size(); i++){
		int minIndex = i;
		for(unsigned int j = i+1; j < vec.size();j++){
			if(vec[j] < vec[minIndex]){
				minIndex = j;
			}
		}
		swap(vec[i], vec[minIndex]);
	}
}

void double_selection_soret(vector<int>& vec){

}
int main(){
	vector<int> vec;

	vec.push_back(10);
	vec.push_back(9);
	vec.push_back(1);
	vec.push_back(3);
	vec.push_back(5);
	vec.push_back(6);
	vec.push_back(7);
	vec.push_back(2);
	vec.push_back(4);
	vec.push_back(8);

	selection_sort(vec);

	for(unsigned int i =0; i < vec.size(); i++)
		cout << vec[i] << endl;

	return 0;
}
