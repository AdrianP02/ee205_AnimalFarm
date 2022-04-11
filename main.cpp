
#include "catDatabase.h"
#include "addCat.h"
#include "reportCat.h"
#include "updateCat.h"
#include "deleteCat.h"
#include "Cat.h"

#include <stdio.h>
#include <assert.h>
#include <cstring>
#include <iostream>

using namespace std;



int main() {
    printf("Starting Animal Farm 2\n");

    /// Create a default cat
//    Cat debugCat = Cat();
//    cout << "Default name is: " << debugCat.getName() << endl;
//    cout << "Default gender is: " << debugCat.getGender() << endl;
//    cout << "Default breed is: " << debugCat.getBreed() << endl;
//    cout << "Default fixed is: " << debugCat.getFixed() << endl;
//    cout << "Default weight is: " << debugCat.getWeight() << endl;

    /// Make sure the default cat is not valid
//    debugCat.validate();

    /// Set the name to nullptr
//    debugCat.setName(nullptr);

    /// Set the name to ""
//    debugCat.setName("");

    /// Set a 1 character name
//    debugCat.setName("A");
//    debugCat.getName();         // Uncomment the Debug line for getName()

    /// Set a MAX_CAT_NAME_CHARACTERS - 1 (49 characters)
//    #define max_name_less "1234567890123456789012345678901234567890123456789"
//    debugCat.setName(max_name_less);
//    debugCat.getName();                   // Uncomment the Debug line for getName()

    /// Set a MAX_CAT_NAME_CHARACTERS + 1 (51 characters)
//    #define max_name_more "123456789012345678901234567890123456789012345678901"
//    debugCat.setName(max_name_more);
//    debugCat.getName();                   // Uncomment the Debug line for getName()

    /// Set a gender from a default cat then try to change an existing gender
//    debugCat.getGender();                 // Uncomment the Debug line for getGender()
//    debugCat.setGender(MALE);
//    debugCat.getGender();
//    debugCat.setGender(FEMALE);

    /// Set a breed from a default cat then try to change to a different breed
//    debugCat.getBreed();                     // Uncomment the Debug line for getBreed()
//    debugCat.setBreed(MANX);
//    debugCat.getBreed();
//    debugCat.setBreed(MAINE_COON);

    /// Fix a default cat and check it's status before and after
//    debugCat.getFixed();            // Uncomment the Debug line for getFixed()
//    debugCat.setFixed();
//    debugCat.getFixed();

    /// Set the weight to 0
//    debugCat.setWeight(0);

    /// Set the weight to 1/1024
//    debugCat.setWeight(1/1024);           // For some reason, when setting the weight to the fraction, it counts as <=0
//    debugCat.setWeight(9.76e-4);    // This is ~1/1024
//    debugCat.getWeight();               // Uncomment the Debug line for getWeight()

    /// Verify that the cat created with these new values are valid
//    #define max_name_less "1234567890123456789012345678901234567890123456789"
//    debugCat.setName(max_name_less);
//    debugCat.setGender(MALE);
//    debugCat.setBreed(MANX);
//    debugCat.getFixed();
//    debugCat.setWeight(9.76e-4);
//    debugCat.validate();

    /// Verify that the if you try to create a cat with all unknown values, it should fail
//    addCat( new Cat("Mystery_Cat", UNKNOWN_GENDER, UNKNOWN_BREED, UNKNOWN_WEIGHT));


    addCat( new Cat( "Loki", MALE, PERSIAN, 1.0 )) ;
    addCat( new Cat( "Milo", MALE, MANX , 1.1 )) ;
    addCat( new Cat( "Bella", FEMALE, MAINE_COON, 1.2 )) ;
    addCat( new Cat( "Kali", FEMALE, SHORTHAIR, 1.3 )) ;
    addCat( new Cat( "Trin", FEMALE, MANX, 1.4 )) ;
    addCat( new Cat( "Chili", MALE, SHORTHAIR, 1.5 )) ;

    /// Find a cat (like Bella) by name
//    findCatByName("Bella");     // Uncomment debug line for findCatByName

    /// Find a cat (like Belinda) by name. This should not work because there is no cat named Belinda
//    findCatByName("Belinda");

    /// Delete a cat
//    Cat* Trin = findCatByName("Trin");
//    deleteCat(Trin);


    printAllCats();
    deleteAllCats();
    printAllCats();

    printf("Done with Animal Farm 2\n");

    return 0;
}
