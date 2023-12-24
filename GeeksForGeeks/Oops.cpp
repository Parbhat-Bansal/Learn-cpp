#include<iostream>
using namespace std ;

class Hero {
    private:
    int health ;

    public:
    char level ;

    int gethealth()
    {
        return health ;
    }

    char getlevel() 
    {
        return level ;
    }

    void sethealth(int h)
    {
         health = h ;
    }     

    void setlevel(char l)
    {
        level = l ;
    }

} ;

int main () {
    Hero h1 ;
    h1.sethealth(70) ;
    cout << "Hero's Health is : " << h1.gethealth() << endl ;
    h1.sethealth(70) ;
    h1.level = 'A' ;
    cout << "Level is : " << h1.level << endl ;
    
    return 0 ;
}    