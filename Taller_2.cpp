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
// string fun1(map<string,string> mmp, string k){
//
//   map<string,string>::iterator it;
//   it = mmp.find(k);
//   cout << mmp.find(k)->second << endl;
//   return it -> second;
// }
//
// //funcion extension y retorna INICIALES
// string fun2(map<string,string> mmp2, string l){
//
//   map<string,string>::iterator it;
//   it = mmp2.find(l);
//   cout << mmp2.find(l)->first;
//
//   return it -> first;
// }
//
// // funcion para correr
// int main()
// {
//   map<string,string> mymap;
//   map<string,string> mm;
//   mm["lola"]= "platuda";
//   map<string,string>::iterator it;
//
//   it = mymap.begin();
//
// // line by line
// string line ;
// string one;
// string two;
// ifstream myfile ("Prof_ext.txt");
//
// if (myfile.is_open())
// {
//   while ( getline (myfile,line) )
//   {
//     one = line.substr(0,4);
//     two = line.substr(5,line.length());
//     mymap.insert(it,pair<string,string>(one,two));
//   }
//   myfile.close();
// }
// else cout << "Unable to open file";
//
// for(it = mymap.begin(); it != mymap.end(); it++){
//   cout << it ->first << ' ' << it ->second << endl;
//
// }
//   string k;
//   cout << " INGRESE INICIALES DEL PROFESOR: " << endl;
//   cin >> k;
//
//   string l;
//   cout << "INGRESE NUMERO DE LA EXTENSION COMO STRINGS: " << endl;
//   cin >> l;
//
//   fun1(mm,k);
//   fun2(mm,l);
//
//   return 0;
// }

///////////////////////////////////////////////////////////////////////////////

// 4
// int main(){
//   map<char,string> mymap;
//   map<char,string>::iterator it;
//   string str;
//   string total;
//   mymap['A'] = ".-";
//   mymap['B'] = "-...";
//   mymap['C'] = "-.-.";
//   mymap['D'] = "-..";
//   mymap['E'] = ".";
//   mymap['F'] = "..-.";
//   mymap['G'] = "--.";
//   mymap['H'] = "....";
//   mymap['I'] = "..";
//   mymap['J'] = ".---";
//   mymap['K'] = "-.-";
//   mymap['L'] = ".-..";
//   mymap['M'] = "--";
//   mymap['N'] = "-.";
//   mymap['O'] = "---";
//   mymap['P'] = ".--.";
//   mymap['Q'] = "--.-";
//   mymap['R'] = ".-.";
//   mymap['S'] = "...";
//   mymap['T'] = "-";
//   mymap['U'] = "..-";
//   mymap['V'] = "...-";
//   mymap['W'] = ".--";
//   mymap['X'] = "-..-";
//   mymap['Y'] = "-.--";
//   mymap['Z'] = "--..";
//   mymap [' '] = "/";
//   mymap ['0'] = "-----";
//   mymap ['1'] = ".----";
//   mymap ['2'] = "..---";
//   mymap ['3'] = "...--";
//   mymap ['4'] = "....-";
//   mymap ['5'] = ".....";
//   mymap ['6'] = "-....";
//   mymap ['7'] = "--...";
//   mymap ['8'] = "---..";
//   mymap ['9'] = "----.";
//
//   cout << "Traductor de/a clave Morse" << endl;
//   while (str.empty()){
//   cout << '>';
//   getline (cin, str);
//   str += ' ';
//   if ((str[0] != '.') and (str[0] != '-')){
//     for (unsigned int i = 0; i < str.size(); i ++)
//       str[i] = toupper(str[i]);
//     for (unsigned int i = 0; i < str.size(); i++)
//       if (str[i] != ' ') cout << mymap[str[i]] << ' ';
//   }
//
//   else {
//     for (unsigned int i = 0; i < str.size(); i++){
//       if (str[i] != ' ') total += str[i];
//       else if (str[i] == ' '){
//         for (it = mymap.begin(); it != mymap.end(); ++it){
//           if (total == it -> second) cout << it -> first;
//         }
//         total.clear();
//       }
//     }
//   }
//   cout << endl;
//   str.clear();
// }
//   return 0;
// }
////////////////////////////////////////////////////////////////////////////////

//SET
// 5

// int main(){
//   set<int> myset;
//   set<int>::iterator it;
//   for(unsigned int i = 0; i < 50; i++) myset.insert(i);
//
//   it = myset.begin();
//   myset.erase(it);
//
//   if(!myset.empty()){
//     cout << "mi set no esta vacio" << endl;
//   }else cout << " mi set esta vacio " << endl;
//
//   myset.find(44);
//
//   cout << "myset contains:";
//
//   for (it=myset.begin(); it!=myset.end(); ++it)
//     cout << ' ' << *it;
//   cout << '\n';
//
//   return 0;
// }
////////////////////////////////////////////////////////////////////////////////

// 6

// int main(){
//   set<string> myset;
//   set<string>::iterator it;
//
//   myset.insert("mara");
//   myset.insert("lola");
//   myset.insert("elsa");
//   myset.insert("ana");
//   myset.insert("georgia");
//
//   // it = myset.find("lola");
//   // myset.erase(it);
//
//   it = myset.begin();
//
//   cout << *it << endl;
//
//   for (it=myset.begin(); it!=myset.end(); ++it)
//     cout << ' ' << *it;
//   cout << '\n';
// }

////////////////////////////////////////////////////////////////////////////////

// 7

// bool subset(set<int> & a, set<int> & b){
//   set<int>::iterator it;
//   set<int>::iterator ir;
//   set<int> sub;
//
//   for(it = b.begin();it != b.end(); it++){
//     for(ir = a.begin();ir != a.end(); ir++){
//       if(*it == *ir){
//         sub.insert(*it);
//         sub.insert(*ir);
//       }
//     }
//   }
//   for (it=sub.begin(); it!=sub.end(); ++it)
//        cout << ' ' << *it;
//        cout << '\n';
//
//   return true;
// }
//
// int main (){
//   set<int> con1;
//   set<int> con2;
//
//   for(unsigned int i = 0; i < 22; i++)
//     con1.insert(i);
//
//   for(unsigned int i = 0; i < 11; i++)
//     con2.insert(i);
//
//   subset(con1,con2);
//
//   return 0;
// }

////////////////////////////////////////////////////////////////////////////////

// 8
// union
set<int> aunion(vector<int> & a, vector<int> & b){
  set<int> union1;
  set<int>::iterator it;

  for(int i = 0; i < 11; i++){
    union1.insert(a[i]);
    union1.insert(b[i]);
  }
  cout << "LA UNION" << endl;
  for(it = union1.begin(); it != union1.end();it++)
    cout << *it << endl;

  return union1;
}
// interseccion

set<int> intsect(vector<int> & a, vector<int> & b){
  set<int> inter;
  set<int>:: iterator it;

  int z = a.size();
  int o = b.size();

  for(int i = 0; i <= z; i++){
    int m = a[i];
    for(int j = 0; j <= o; j++){
      if(m==b[j])
        inter.insert(m);
    }
  }
  cout << "LA INTERSECCION" << endl;
  for(it = inter.begin(); it != inter.end();it++)
    cout << *it << endl;
  return inter;
}

// diferencia

set<int> difference(vector<int> & a, vector<int> & b){
  set<int>diff;
  set<int>:: iterator it;

  int z = a.size();
  int o = b.size();


  for(int i = 0; i <= z; i++){
    int m = a[i];
    for(int j = 0; j <= o; j++){
      if(b[j]!=m){
        diff.insert(b[j]);
      }
    }
  }
  cout << "LA DIFERENCIA" << endl;
  for(it = diff.begin(); it != diff.end();it++)
    cout << *it << endl;

  return diff;
}

// funcion para correr

int main (){

  vector<int> prim;
  vector<int> seg;

  for(unsigned int i = 0; i < 6; i++)
    prim.push_back(2*i);

  for(unsigned int i = 0; i < 11; i++)
    seg.push_back(4*i);

  aunion(prim,seg);
  intsect(prim,seg);
  difference(prim,seg);

  return 0;
}
