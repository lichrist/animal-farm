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
#include "Cat.h"
#include "SinglyLinkedList.h"

using namespace std;

int main() {
    cout << "Starting " << PROGRAM_TITLE << endl ;
    SinglyLinkedList catDB ;
    catDB.push_front( new Cat( "Loki", Color::CREAM, true, Gender::MALE, 1.0 ) ) ;
    catDB.push_front( new Cat( "Milo", Color::BLACK, true, Gender::MALE, 1.1 ) ) ;
    catDB.push_front( new Cat( "Bella", Color::BROWN, true, Gender::FEMALE, 1.2 ) ) ;
    catDB.push_front( new Cat( "Kali", Color::CALICO, true, Gender::FEMALE, 1.3 ) ) ;
    catDB.push_front( new Cat( "Trin", Color::WHITE, true, Gender::FEMALE, 1.4 ) ) ;
    catDB.insert_after(catDB.get_first(), new Cat( "Chili", Color::GINGER, true,
                                                   Gender::MALE, 1.5 ) );
    for( Animal* pAnimal = (Animal*)catDB.get_first() ; pAnimal != nullptr ; pAnimal =
                                                                                     (Animal*)List::get_next( (Node*)pAnimal ) ) {
        cout << pAnimal->speak() << endl;
    }
    catDB.validate() ;
    catDB.dump() ;
    catDB.deleteAllNodes() ;
    catDB.dump() ;
    cout << "Done with " << PROGRAM_TITLE ;
    return( EXIT_SUCCESS ) ;
}

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
