
#include "catDatabase.h"
#include "addCat.h"
#include "reportCat.h"
#include "updateCat.h"
#include "deleteCat.h"

#include <stdio.h>

int main() {
    printf("Starting Animal Farm 1\n");

    addCat( "Loki", MALE, PERSIAN, true, 8.5, BLACK, WHITE, 101 ) ;
    addCat( "Milo", MALE, MANX, true, 7, BLACK, RED, 102 ) ;
    addCat( "Bella", FEMALE, MAINE_COON, true, 18.2, BLACK, BLUE, 103 ) ;
    addCat( "Kali", FEMALE, SHORTHAIR, false, 9.2, BLACK, GREEN, 104 ) ;
    addCat( "Trin", FEMALE, MANX, true, 12.2, BLACK, PINK, 105 ) ;
    addCat( "Chili", UNKNOWN_GENDER, SHORTHAIR, false, 19.0, WHITE, BLACK, 106 ) ;

    int kali = findCat("Kali");
    printAllCats() ;
    findCat("Kali");
    updateCatName( kali, "Chili" ) ;
    printCat( kali );
    updateCatName( kali, "Capulet" ) ;
    updateCatWeight( kali, 9.9 ) ;
    fixCat( kali ) ;
    updateCatCollar1( kali, GREEN);
    updateCatCollar2(kali, GREEN);
    printCat( kali );
    printAllCats();
    deleteAllCats();
    printAllCats();

    return 0;
}
