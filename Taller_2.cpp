#include <iostream>
#include <vector>
#include <list>
#include <satck>
#include <maps>
#include <queue>
#include <set>
#include <math.h>
using namespace std;

//    TALLER 2

/////////////////////////////////////////////////////////////////////////////

// MAP
// 1

/*int main(){
  map<char,int> mymap;
  map<char,int>::iterator it;

  mymap['a']=22;
  mymap['b']=44;
  mymap['c']=66;
  mymap['d']=88;

  it = mymap.find('b');
  mymap.erase(it);

  cout << "tamaño del mapa: " << mymap.size() << endl;

  cout << "mymap [a] is: " << mymap['a'] << endl;
  cout << "mymap [b] is: " << mymap['b'] << endl;
  cout << "mymap [c] is: " << mymap['c'] << endl;
  cout << "mymap [d] is: " << mymap['d'] << endl;

  return 0;
}*/

/////////////////////////////////////////////////////////////////////////////////

// 2

/*int main (){
  map<string,string> mymap;
  map<string,string>::iterator it;

  mymap["lulo"]="fruta acida de color cafe con interior verde";
  mymap["mora"]="fruta acida de color moprado que destiñe color";
  mymap["mango"]="fruta dulce de color amarillo";
  mymap["sandia"]="fruta aguada de color verde con interior rojo";

  cout << "mymap lulo is: " << mymap["lulo"] << endl;
  cout << "mymap mora is: " << mymap["mora"] << endl;
  cout << "mymap mango is: " << mymap["mango"] << endl;
  cout << "mymap sandia is: " << mymap["sandia"] << endl;

  cout << "size of my map: " << mymap.size() << endl;

  //it= mymap.find("sandia");
  //mymap.erase(it);

  cout << "new size of my map: " << mymap.size() << endl;

  //IMPRIMIR MAPAS

  for(it = mymap.begin(); it != mymap.end(); it++)
    cout << it ->first << ' ' << it ->second << endl;

  return 0;
}*/

///////////////////////////////////////////////////////////////////////////////

// 3
// funcion iniciales y retorna EXTENSION
short fun1(map<string,short> mmp, string k){

  map<string,short>::iterator it;

  for(it = mmp.begin(), it != mmp.end(); it++)
  {
      if(it -> first == k)
        cout << mmp[k] << endl;
  }

  return mmp[k];
}

//funcion extension y retorna INICIALES
string fun2(map<short,string> mmp2, short l){

  map<short,string>::iterator it;

  for(it = mmp.begin(), it != mmp.end(); it++)
  {
      if(it -> first == l)
        cout << mmp2[l] << endl;
  }

  return mmp2[l];
}


int main()
{
//word by word
  ifstream ifs ("Prof_ext.txt");
  string line = "";
  if(ifs.good()){
    while(!ifs.eof()){
      ifs >> line;
      cout << line << endl;
    }
  }
  ifs.close();
// line by line
  ifs.open("Prof_ext.txt");
  if(ifs.good()){
    while(!ifs.eof()){
      getline(ifs, line);
      cout << line << endl;
    }
  }
  ifs.close();


  string k;
  cout << " INGRESE INICIALES DEL PROFESOR: " << endl;
  cin >> k;

  short l;
  cout << "INGRESE NUMERO DE LA EXTENSION: " << endl;
  cin >> l;

  fun1();
  fun2();

  return 0;
}


