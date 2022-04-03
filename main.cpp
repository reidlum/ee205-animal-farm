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
/*
#define DEBUG

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
    addCat(new Cat("Loki",MALE,PERSIAN,1.5));
    addCat(new Cat("Milo",MALE,MANX,1.1));
    addCat(new Cat("doodoo",MALE,MANX,1.1));
    //printAllCats();
    //Cat* testCat = catDatabaseHeadPointer;
    //Cat* testCat2 = testCat->next;
    //deleteCat(testCat2);
    //testCat2->print();
    //printAllCats();
    //deleteAllCats();
    deleteCat(findCatByName("Miloo"));
    printAllCats();
    cout << "Done with " << PROGRAM_TITLE << endl ;
}