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


/*int main (){
  vector<int> myvector6;
// primeras potencias de 3

  for(int i = 0; i < 11; i++)
    myvector6.push_back(pow(3,i));

  for(int i = 0; i < myvector6.size(); i++)
    //cout << myvector6[i] << endl;
// eliminar las potencias menores a 100

  for(int i = 0; i < myvector6.size(); i++)
    if(myvector6[i] > 101)
      myvector6.erase(myvector6.begin()+i);

  for(int i = 0; i < myvector6.size(); i++)
    cout << myvector6[i] << endl;


  return 0;

}*/
////////////////////////////////////////////////////////////////////////////////s

// 3 letras del alfabeto

/*int main (){
  vector<char> myvector;
  char a;

  for(a = 'a'; a <= 'z'; a++)
    myvector.push_back(a);

  for(int i = 0; i < myvector.size(); i++)
    cout << myvector[i] << endl;

  return 0;
}*/

// lea una lista de frutas de cin y guardarla en el vector

int main(){
  vector<string> listafrutas;
  string fruta;
  cout << "Ingrese la fruta: " << endl;
  cin >> fruta;
  listafrutas.push_back(fruta);

  cout << "La lista de frutas contiene: " ;
  for(int i = 0; i < listafrutas.size(); i++)
    cout << listafrutas[i] << endl;

  return 0;
}

////////////////////////////////////////////////////////////////////////////////

// 4

int main(){

  list<string> lista = {"casa1", "casa2", "casa3", "casa4"};
  vector<string> iden(lista.begin(), lista.end());

  list<int> lista2 ={1,2,3,4};
  vector<int> dist(lista2.begin(),lista2.end());

  for(int i = 0; i < iden.size(); i++)
    cout << iden[i] << "--->" << dist[i] << endl;


  return 0;
}
////////////////////////////////////////////////////////////////////////////////7

// 1 tamaño de una lista

int main (){
  list<int> mylist;
  mylist.push_back(1);
  mylist.push_back(2);
  mylist.push_back(3);
  mylist.push_back(4);
  mylist.push_back(5);

  cout << "Size of my list: " << mylist.size() << endl;

  if(!mylist.empty())
    cout << "mi lista no esta vacia" << endl;
    else cout << "mi lista esta vacia" << endl;

  cout << "primer elemento de mi lista: " << mylist.front() << endl;
  cout << "ultimo elemento de mi lista: " << mylist.back() << endl;

  mylist.pop_front();
  mylist.pop_back();

  cout << "primer elemento de mi lista: " << mylist.front() << endl;
  cout << "ultimo elemento de mi lista: " << mylist.back() << endl;



  return 0;

}




