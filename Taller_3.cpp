#include <list>
#include <iostream>
using namespace std;

// 1
int main (){
  list<int> mylist;
  list<int>::iterator it;

  mylist.push_back(1);
  mylist.push_back(2);
  mylist.push_back(3);
  mylist.push_back(5);
  mylist.push_back(6);
  mylist.push_back(7);

  for(it = mylist.begin();it != mylist.end();it++){
    int m = *it;
    if(m+1 != *it+1){
      mylist.insert(it,*it);
    }
  }

  for(it = mylist.begin();it != mylist.end();it++)
    cout << *it << endl;

  return 0;
}
