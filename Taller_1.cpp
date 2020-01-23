#include <iostream>
#include <vector>
using namespace std;

// 1

// Determinar el tamaño de un vector

/*  int main (){
    vector<int> myvector (4,6);
    cout << "El tamaño de mi vector es: " << myvector.size() << endl;

    return 0;
  }*/

// determinar si el vector esta vacio

  /*int main (){

    vector<int> myvector1 (4,6);
    if(myvector1.empty())
      cout << "el vector esta vacio" << endl;
      else cout << "el vector contiene elementos" << endl;

    return 0;
  }*/

// acceder al elemento en la posicion i

  /*int main (){
    vector<int> myvector2 (3,88);

    cout << myvector2[2] << endl;

    return 0;
  }*/

// acceder al primer y ultimo elemento

  /*int main (){
    vector<int> myvector3;
    myvector3.push_back(33);
    myvector3.push_back(88);

    cout << " El primer elemento del vector es: " << myvector3.front() << endl;
    cout << "El ultimo elemento de mi vector es: " << myvector3.back() << endl;

    return 0;
  }*/
// Eliminar elementos en cualquier posicion

  /*int main ()
{
    vector<int> myvector4;

    for(int i = 0; i < 11; i++)
      myvector4.push_back(i);

    myvector4.erase (myvector4.begin()+6);

    for(int i = 0; i < myvector4.size(); i++)
      cout << myvector4[i] << endl;

    return 0;
}*/

// insertar elementos en cualuier posicion

  /*int main (){

    vector<int> myvector5 (3,10);
    vector<int>::iterator it;

    it = myvector5.begin();
    it = myvector5.insert(it+2, 4);

    //myvector5.insert(it, 2, 888);

    for(int i = 0; i < myvector5.size(); i++)
      cout << myvector5[i] << endl;


    return 0;

  }*/
  ///////////////////////////////////////////////////////////////////////////
// 2

// 
