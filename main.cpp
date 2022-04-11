
#include "catDatabase.h"
#include "addCat.h"
#include "reportCat.h"
#include "updateCat.h"
#include "deleteCat.h"
#include "Cat.h"

#include <stdio.h>

int main() {
    printf("Starting Animal Farm 2\n");

    addCat( new Cat( "Loki", MALE, PERSIAN, 1.0 )) ;
    addCat( new Cat( "Milo", MALE, MANX , 1.1 )) ;
    addCat( new Cat( "Bella", FEMALE, MAINE_COON, 1.2 )) ;
    addCat( new Cat( "Kali", FEMALE, SHORTHAIR, 1.3 )) ;
    addCat( new Cat( "Trin", FEMALE, MANX, 1.4 )) ;
    addCat( new Cat( "Chili", MALE, SHORTHAIR, 1.5 )) ;

    printAllCats();
    deleteAllCats();
    printAllCats();

    printf("Done with Animal Farm 2\n");

    return 0;
}
