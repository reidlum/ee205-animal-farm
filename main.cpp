///////////////////////////////////////////////////////////////////////////////
/// University of Hawaii, College of Engineering
/// @brief Lab 07d - Animal Farm 1 - EE 205 - Spr 2022
///
/// @file main.c
/// @version 1.0
///
/// @author Reid Lum <reidlum@hawaii.edu>
/// @date 14_Feb_2022
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <iostream>

#include "catDatabase.h"
#include "addCats.h"
#include "reportCats.h"
#include "updateCats.h"
#include "deleteCats.h"
#include "config.h"
#include "Cat.h"

#define DEBUG
/*
int main(){
    addCat( "Loki", MALE, PERSIAN, true, 8.5, BLACK, WHITE, 101 ) ;
    addCat( "Milo", MALE, MANX, true, 7.0, BLACK, RED, 102 ) ;
    addCat( "Bella", FEMALE, MAINE_COON, true, 18.2, BLACK, BLUE, 103 ) ;
    addCat( "Kali", FEMALE, SHORTHAIR, false, 9.2, BLACK, GREEN, 104 ) ;
    addCat( "Trin", FEMALE, MANX, true, 12.2, BLACK, PINK, 105 ) ;
    addCat( "Chili", UNKNOWN_GENDER, SHORTHAIR, false, 19.0, WHITE, BLACK, 106 ) ;
    printAllCats();
    int kali = findCat( "Kali" ) ;
    updateCatName( kali, "Chili" ) ; // this should fail
    printCat( kali );
    updateCatName( kali, "Capulet" ) ;
    updateCatWeight( kali, 9.9 ) ;
    updateCatCollar1( kali, WHITE );
    updateCatCollar2( kali, PINK );
    updateLicense( kali, 6942069 );
    fixCat( kali ) ;
    printCat( kali );
    printAllCats();
    deleteAllCats();
    printAllCats(); //Won't print anything beacuse I have it only printing cats that exist, not blank spaces

#ifdef DEBUG
    addCat( "", MALE, PERSIAN, true, 8.5, BLACK, WHITE, 101 ) ;
    addCat( "12345678901234567890123456789012345678901234567890", MALE, PERSIAN, true, 8.5, BLACK, WHITE, 101 ) ;
    addCat( "duplicate", MALE, PERSIAN, true, 8.5, BLACK, WHITE, 101 ) ;
    addCat( "duplicate", MALE, PERSIAN, true, 8.5, BLACK, WHITE, 101 ) ;
    addCat( "NegativeWeightCat", MALE, PERSIAN, true, -1, BLACK, WHITE, 101 ) ;
    addCat( "WeightlessCat", MALE, PERSIAN, true, 0, BLACK, WHITE, 101 ) ;

    addCat( "duplicate2", MALE, PERSIAN, true, 8.5, BLACK, WHITE, 101 ) ;
    updateCatName(1, "duplicate");
    updateCatWeight(1, -10);

    printCat(-1) ;
    printCat(5000) ;

    findCat("catnotinthedatabase");
#endif

}
*/
using namespace std;
int main(){

    cout << "Starting " << PROGRAM_TITLE << endl ;
    addCat(new Cat("Loki",MALE,PERSIAN,1.0));
    addCat(new Cat("Milo",MALE,MANX,1.1));
    addCat(new Cat("Bella",FEMALE,MAINE_COON,1.2));
    addCat(new Cat("Kali",FEMALE,SHORTHAIR,1.3));
    addCat(new Cat("Trin",FEMALE,MANX,1.4));
    addCat(new Cat("Chili",MALE,SHORTHAIR,1.5));
    printAllCats();
    deleteAllCats();
    printAllCats();
    cout << "Done with " << PROGRAM_TITLE << endl ;

#ifdef DEBUG
    cout<<endl;
    cout << "Debug time!" << endl;
    Cat testCat = Cat(); //makes test cat

    //verify default values
    cout << (testCat.getName()) << endl; //gets empty name
    cout << genderName(testCat.getGender()) << endl; //gets Unknown gender
    cout << breedName(testCat.getBreed()) << endl; //gets Unknown breed
    cout << testCat.isFixed() << endl; //gets False for being fixed
    cout << testCat.getWeight() << endl; //gets Unknown weight (-1)

    testCat.validate(); //fails because name is empty
    testCat.setName(nullptr); //fails because name is nullptr
    testCat.setName(""); //fails because name is empty
    testCat.setName("L"); //sets name to L
    cout << testCat.getName() << endl; //tests if name is L
    testCat.setName("0123456789012345678901234567890123456789012345678"); //sets to MAX_CAT_NAME
    cout << testCat.getName() << endl; //tests if name is MAX_CAT_NAME
    testCat.setName("01234567890123456789012345678901234567890123456789"); // tries to set longer than MAX_CAT_NAME, fails
    testCat.setGender(MALE); //sets gender to Male
    cout << genderName(testCat.getGender()) << endl; //tests if gender is male
    testCat.setGender(FEMALE); //tries to change gender
    testCat.setBreed(MAINE_COON); //sets breed to MAINE_COON
    cout << breedName(testCat.getBreed()) << endl; //tests if breed is MAINE_COON
    testCat.setBreed(MANX); //tries to change breed
    cout << testCat.isFixed() << endl; //tests if default cat is fixed, false
    testCat.fixCat(); //fixes cat
    cout << testCat.isFixed() << endl; //tests if default cat is fixed, true
    testCat.setWeight(0); //tries to set weight to 0
    Weight testCatWeight = (1.0 /1024); //makes Weight variable 1/1024
    testCat.setWeight((testCatWeight)); //sets weight to 1/1024
    cout << testCat.getWeight() << endl; //tests if weight was set
    cout << testCat.validate() << endl; //tests if cat is valid

    Cat testCat2 = Cat("LL",UNKNOWN_GENDER,MANX,1); //tries to make genderless cat
    Cat testCat3 = Cat("LL",MALE,UNKNOWN_BREED,1); //tries to make breedless cat
    Cat testCat4 = Cat("LL",MALE,MANX,UNKNOWN_WEIGHT); //tries to make unknown weight cat

    addCat(new Cat("Loki",MALE,PERSIAN,1.0));
    addCat(new Cat("Milo",MALE,MANX,1.1));
    addCat(new Cat("Bella",FEMALE,MAINE_COON,1.2));
    addCat(new Cat("Kali",FEMALE,SHORTHAIR,1.3));
    addCat(new Cat("Trin",FEMALE,MANX,1.4));
    addCat(new Cat("Chili",MALE,SHORTHAIR,1.5));
    cout << findCatByName("Bella") << endl; //returns pointer to Bella
    findCatByName("Belinda"); //tries to find cat not in database
    cout << deleteCat(findCatByName("Bella")) << endl; //deletes cat and returns true
    //deleteCat(findCatByName("Bella")); //tries to delete cat not in database

#endif
}