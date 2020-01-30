#include <iostream>
#include <vector>
#include <list>
#include <satck>
#include <queue>
#include <math.h>
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

/*int main(){
  vector<string> listafrutas;
  string fruta;
  cout << "Ingrese la fruta: " << endl;
  cin >> fruta;
  listafrutas.push_back(fruta);

  cout << "La lista de frutas contiene: " ;
  for(int i = 0; i < listafrutas.size(); i++)
    cout << listafrutas[i] << endl;

  return 0;
}*/

////////////////////////////////////////////////////////////////////////////////

// 4

/*int main(){

  list<string> lista = {"casa1", "casa2", "casa3", "casa4"};
  vector<string> iden(lista.begin(), lista.end());

  list<int> lista2 ={1,2,3,4};
  vector<int> dist(lista2.begin(),lista2.end());

  for(int i = 0; i < iden.size(); i++)
    cout << iden[i] << "--->" << dist[i] << endl;


  return 0;
}*/
////////////////////////////////////////////////////////////////////////////////

//LISTA

// 5 tamaño de una LISTA

/*int main (){
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

}*/
///////////////////////////////////////////////////////////////////////////////

// 6

//PREGUNTAR

/*int main (){

  list<int> mylist;

  for(int i = 1; i < 11; i++)
    mylist.push_back(pow(3,i));

  while(!mylist.empty())

    cout << mylist.front() << mylist.pop_front() << endl;

  return 0;
}*/
///////////////////////////////////////////////////////////////////////////////

// 7

// lista que reciba los numeros reales los sume y los imprima

/*int main(){

  list<float> mylista;
  list<float>:: iterator it;
  float sum;
  it = mylista.begin();

  for(float i = 0; i < 30; i++)
    mylista.push_back(i/7);

  for(it = mylista.begin(); it != mylista.end(); it++)
    sum += *it;

  cout << " SUMA 1: " << sum << endl;

  for(it = mylista.begin(); it != mylista.end(); it++)
    cout << ' ' << *it << endl;

  while(sum < 62)
    sum += *it++;

  cout << "SUMA 2: " << sum << endl;
  return 0;
}*/
/////////////////////////////////////////////////////////////////////////////////

// 8

// intercambiar el primer y el ultimo numero

/*list<int> reorg (list<int> mylist){

  list<int>:: iterator it;

  int primer = mylist.front();
  int segundo = mylist.back();

  mylist.pop_back();
  mylist.pop_front();

  mylist.push_front(segundo);
  mylist.push_back(primer);

  for(it = mylist.begin(); it != mylist.end(); it++)
    cout << "LISTA REORGANIZADA: " << *it << endl;

  return mylist;

}

int main (){

  list<int> myint;
  list<int>:: iterator it;

  for(int i = 0; i < 41; i++)
    myint.push_back(i);

    for(it = myint.begin(); it != myint.end(); it++)
      cout << "LISTA NORMAL: " << *it << endl;

  reorg(myint);

  return 0;
}*/
////////////////////////////////////////////////////////////////////////////////

// 9 STACK

/*int main (){
  stack<int> mystack;

  for(int i =0; i < 11; i++)
    mystack.push(i);

  cout << "Tamaño de la pila: " << mystack.size() << endl;

  if(mystack.empty())
    cout << "La pila esta vacia" << endl;
    else cout << "La pila no esta vacia" << endl;

  cout << "El elemento mas arriba de la pila es: " << mystack.top() << endl;

  mystack.pop();

  cout << "Eliminando el elemento mas arriba de la pila: " << mystack.top() << endl;

  mystack.push(88);

  cout << "Agregando un elemento a la pila: " << mystack.top() << endl;

  return 0;
}*/

/////////////////////////////////////////////////////////////////////////////////
// 10

/*int main (){
  stack<int> mystack;

  for(int i = 0; i < 11; i++)
    mystack.push(pow(3,i));

  cout << mystack.top() << endl;

  cout << "Eliminando elementos de la pila..." << endl;

//eliminar elementos e imprimir

  while(! mystack.empty())
  {
    cout << mystack.top() << ' ' << endl;
    mystack.pop();
  }

  return 0;
}*/
//////////////////////////////////////////////////////////////////////////////////

// 11

// recibe un array de caracteres al derecho y con stack los imnprime al reves

/*int main (){

  stack<char> mystack;
  array<char,4> Palabra = {'h','o','l','a'};

  for(unsigned int i = 0; i < Palabra.size();i++)
    mystack.push(Palabra[i]);

  for(unsigned int i =0; i < Palabra.size();i++)
    cout << Palabra[i] << ' ';

  cout << endl;

  while(! mystack.empty())
  {
    cout << mystack.top() << ' ' ;
    mystack.pop();
  }

  cout << endl;

  return 0;
}*/
//////////////////////////////////////////////////////////////////////////////////

// 12
//PREGUNTAR

////////////////////////////////////////////////////////////////////////////////

//QUEUE

// 13

// queue solo agregar e insertar en un Eliminando
//deque insertar y agregar en los dos lados, al comienzo y al final
//determinar input y output del problema

/*int main (){
  queue<int> myqueue;

  for(int i = 0; i < 21; i++)
    myqueue.push(i);
// tamaño de la cola
  cout << "El tamaño de la cola es: " << myqueue.size() << endl;;

//determinar si esta vacia
  if(myqueue.empty())
    cout << " la cola esta vacia" << endl;
    else cout << "la lista no esta vacia" << endl;

//acceder al elemento al frente de la cola

  cout << myqueue.front() << endl;

//eliminar el elemento al frente de la cola

  myqueue.pop();
  cout << myqueue.front() << endl;

// agregar un elemento al final de la cola
// se añade al final

  myqueue.push(99);
  while(!myqueue.empty())
  {
    cout << myqueue.front() << endl;
    myqueue.pop();
  }
  
  return 0;
}*/
/////////////////////////////////////////////////////////////////////////////////

// 14

/*int main (){

  queue<int> myqueue;

  for(int i = 0; i < 11; i++)
    myqueue.push(pow(3,i));

  cout << "objeto el comienzo de la cola: " << myqueue.front() << endl;

  while(!myqueue.empty())
  {
    cout << myqueue.front() << endl;
    myqueue.pop();
  }

  return 0;
}*/












