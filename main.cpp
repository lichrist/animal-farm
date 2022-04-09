///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_010d_animal_farm_2 - EE 205 - Spr 2022
///
/// @file main.cpp
/// @version 1.0
///
///
///
/// @author Christian Li <lichrist@hawaii.edu>
/// @date   03_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include "addCats.h"
#include "reportCats.h"
#include "deleteCats.h"
#include "Cat.h"

using namespace std;

int main(){

    cout << " Starting Animal Farm 2 " << endl;
    addCat(new Cat("Loki", MALE, PERSIAN, 1.0));
    addCat(new Cat("Milo", MALE, MANX, 1.1));
    addCat(new Cat("Bella", FEMALE, MAINE_COON, 1.2));
    addCat(new Cat("Kali", FEMALE, SHORTHAIR, 1.3));
    addCat(new Cat("Trin", FEMALE, MANX, 1.4));
    addCat(new Cat("Chili", MALE, SHORTHAIR, 1.5));
    printAllCats();
    deleteAllCats();
    printAllCats();
    cout << " Done with Animal Farm 2 " << endl;

#ifdef DEBUG
    Cat testCat = Cat();

    //Default values set
    cout << (testCat.getName()) << endl;
    cout << genderName(testCat.getBreed()) << endl;
    cout << testCat.isFixed() << endl;
    cout << testCat.getWeight();

    testCat.print();
    testCat.validate();
    testCat.setName(nullptr);
    testCat.setName("");
    testCat.validateGender(UNKNOWN_GENDER);
    testCat.validateBreed(UNKNOWN_BREED);
    testCat.setGender(MALE);
    cout << genderName(testCat.getGender()) << endl;
    testCat.setGender(FEMALE);
    testCat.setBreed(PERSIAN);
    cout << breedName(testCat.getGender()) << endl;
    testCat.setBreed(SHORTHAIR);
    cout << testCat.isFixed() << endl;
    testCat.fixCat();
    cout << testCat.isFixed() << endl;
    testCat.setWeight(0);
    Weight testCatWeight = (1/1024);
    testCat.setWeight(testCatWeight);
    cout << testCat.getWeight() << endl;
    cout << testCat.validate() << endl;

    Cat testCat1 = Cat("Cat1", UNKNOWN_GENDER, SHORTHAIR, 1);
    Cat testCat2 = Cat("Cat2", FEMALE, UNKNOWN_BREED, 1);
    Cat testCat3 = Cat("Cat3", MALE, MANX, UNKNOWN_WEIGHT);

#endif

/*
    cout << " Starting Animal Farm 2 " << endl;

    addCat( "Loki", MALE, PERSIAN, true, 8.5, BLACK, WHITE, 101 ) ;
    addCat( "Milo", MALE, MANX, true, 7.0, BLACK, RED, 102 ) ;
    addCat( "Bella", FEMALE, MAINE_COON, true, 18.2, BLACK, BLUE, 103 ) ;
    addCat( "Kali", FEMALE, SHORTHAIR, false, 9.2, BLACK, GREEN, 104 ) ;
    addCat( "Trin", FEMALE, MANX, true, 12.2, BLACK, PINK, 105 ) ;
    addCat( "Chili", UNKNOWN_GENDER, SHORTHAIR, false, 19.0, WHITE, BLACK, 106 ) ;

#ifdef DEBUG
    // Test for empty name
       assert( addCat( "", UNKNOWN_GENDER, SHORTHAIR, false, 19.0, BLACK, WHITE, 101 ) == BAD_CAT ) ;
       // Test for max name
       assert( addCat( MAX_NAME1, UNKNOWN_GENDER, SHORTHAIR, false, 19.0, WHITE, RED, 107 ) != BAD_CAT ) ;
       // Test for name too long
       assert( addCat( ILLEGAL_NAME, UNKNOWN_GENDER, SHORTHAIR, false, 19.0, WHITE, BLUE, 108 ) == BAD_CAT ) ;
       // Test for duplicate cat name
       assert( addCat( "Chili", UNKNOWN_GENDER, SHORTHAIR, false, 0, WHITE, GREEN, 109 ) == BAD_CAT ) ;
       // Test for weight <= 0
       assert( addCat( "Neo", UNKNOWN_GENDER, SHORTHAIR, false, 0, WHITE, PINK, 110 ) == BAD_CAT ) ;
       // Test for printCat( -1 ) ;
       printCat( -1 ) ;
       // Test for out of bounds
       printCat( 2000 ) ;
       // Test finding a cat...
       assert( findCat( "Bella" ) == 2 ) ;
       // Test not finding a cat
       //assert( findCat( "Bella's not here" ) == BAD_CAT ) ;
       // Test addCat details
       size_t testCat = addCat( "Oscar", UNKNOWN_GENDER, SHORTHAIR, false, 1.1, RED, BLACK, 111 ) ;
       printCat( testCat );
       assert( testCat != ERROR );
       assert( testCat < MAX_CATS );
       // Test setting a large name
       assert( updateCatName( testCat, MAX_NAME2 ) == NOERROR ) ;
       printCat( testCat ) ;
       // Test setting an out-of-bounds name
       assert( updateCatName( testCat, ILLEGAL_NAME ) == ERROR ) ;
       printCat( testCat ) ;
       // Test setting an illegal cat weight
       assert( updateCatWeight( testCat, -1 ) == ERROR ) ;
#endif


    printAllCats();

    int kali = findCat( "Kali" ) ;
    assert(updateCatName( kali, "Chili" ) == 1) ; // this should fail
    printCat( kali );
    assert(updateCatName( kali, "Capulet" ) == 0) ;
    assert(updateCatWeight( kali, 9.9 ) == 0) ;
    assert(fixCat( kali ) == 0) ;
    assert(updateCatCollar1( kali, GREEN) == 0);
    assert(updateCatCollar2( kali, GREEN) == 0);
    assert(updateCatLicense( kali, 201) == 0);
    printCat( kali );

    printAllCats();
    deleteAllCats();
    printAllCats();
    printf("Done with Animal Farm 2 \n");
    return 0;
#endif
*/
}