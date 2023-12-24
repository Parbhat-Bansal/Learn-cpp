#include <iostream>
#include <string>
using namespace std ;

class student {
   public :

   string name , UID ;
   int age ;


student() {
  name = " " ;
  age = 0 ;
  UID = " " ;
} 
};

class identy: public student {
  public: 
      char gender ;  

};

int main () {
    identy id ;
    string str ;
    char ch ;
    int a ;
    string UD ;

    cout << "Enter you name : " << endl ;
    cin >> str ;

    cout << "Enter your age  : " << endl ;
    cin >> a ;

    cout << "Enter your UID : " << endl ;
    cin >> UD ;

    cout << "Enter your Gender : " << endl ;
    cin >> ch ;

    id.age = a ;
    id. name = str ; 
    id.UID = UD ;
    id.gender = ch ; 
  

    cout << "Your age is : " << id.age << endl ; 
    cout << "Your name is : " << id.name << endl ;
    cout << "Your mobile number  is : " << id.UID << endl ;
    cout << "Your gender is : " << id.gender  << endl ;
    return 0 ;
}
 
