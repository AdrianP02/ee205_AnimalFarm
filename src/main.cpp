
#include <iostream>
#include "config.h"
#include "SinglyLinkedList.h"
#include "Cat.h"
#include "Weight.h"

using namespace std ;


/// The entry point for Animal Farm
int main() {
    cout << "Starting " << PROGRAM_NAME << endl ;

    SinglyLinkedList catDB ;

    catDB.push_front( new Cat( "Loki",  Color::CREAM,  true, Gender::MALE,   1.0 ) ) ;
    catDB.push_front( new Cat( "Milo",  Color::BLACK,  true, Gender::MALE,   1.1 ) ) ;
    catDB.push_front( new Cat( "Bella", Color::BROWN,  true, Gender::FEMALE, 1.2 ) ) ;
    catDB.push_front( new Cat( "Kali",  Color::CALICO, true, Gender::FEMALE, 1.3 ) ) ;
    catDB.push_front( new Cat( "Trin",  Color::WHITE,  true, Gender::FEMALE, 1.4 ) ) ;

    catDB.insert_after(catDB.get_first(), new Cat( "Chili", Color::GINGER, true, Gender::MALE,   1.5 ) );

    for( Animal* pAnimal = (Animal*)catDB.get_first() ; pAnimal != nullptr ; pAnimal = (Animal*)List::get_next( (Node*)pAnimal ) ) {
        cout << pAnimal->speak() << endl;
    }

    catDB.validate() ;
    catDB.dump() ;
    catDB.deleteAllNodes() ;
    catDB.dump() ;

    cout << "Done with " << PROGRAM_NAME ;

    return( EXIT_SUCCESS ) ;
}