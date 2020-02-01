#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <fstream>
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
string fun1(map<string,string> mmp, string k){

  map<string,string>::iterator it;
  string m ="jo";

  for(it = mmp.begin(), it != mmp.end(); ++it){
        it = mmp.find(k);
        cout << it -> second << endl;
  }


  return m;
}

//funcion extension y retorna INICIALES
/*string fun2(map<short,string> mmp2, short l){

  map<short,string>::iterator it;

  for(it = mmp.begin(), it != mmp.end(); it++)
  {
      if(it -> first == l)
        cout << mmp2[l] << endl;
  }

  return mmp2[l];
}*/


int main()
{
  map<string,string> mymap;
  map<string,string>::iterator it;

  it = mymap.begin();

// line by line
string line ;
string one;
string two;
ifstream myfile ("Prof_ext.txt");

if (myfile.is_open())
{
  while ( getline (myfile,line) )
  {
    //cout << line << '\n';
    one = line.substr(0,4);
    two = line.substr(5,line.length());
    mymap.insert(it,pair<string,string>(one,two));
  }
  myfile.close();
}
else cout << "Unable to open file";

for(it = mymap.begin(); it != mymap.end(); it++){
  cout << it ->first << ' ' << it ->second << endl;

}
  string k;
  cout << " INGRESE INICIALES DEL PROFESOR: " << endl;
  cin >> k;

  // short l;
  // cout << "INGRESE NUMERO DE LA EXTENSION: " << endl;
  // cin >> l;

  fun1(mymap,k);
  //fun2();

  return 0;
}
