///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file config.h
/// @version 1.0
///
/// @author Reid Lum <reidlum@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once

#include <iomanip>    // For setw() & setfill()

/// A grammatically correct title for the program
#define PROGRAM_TITLE "Animal Farm 3"

/// A short-title for the program (used for console messages)
#define PROGRAM_NAME  "animalfarm3"

// Set to trace the flow of execution through this code
// #define TRACE

#ifdef TRACE

/// If TRACE is defined, print a message that `functionName` is doing `operation`.
///
/// #### Sample Output
/// `animalfarm3: Start push_front`
///
/// @param operation "Start", "End", "Throws", etc.
/// @param functionName The name of the function
static void TRACE_OUT( const std::string operation, const std::string functionName ) {
   std::cout << PROGRAM_NAME << ": " << operation << " " << functionName << std::endl ;
}

   #define TRACE_START TRACE_OUT( "Start", __FUNCTION__ ) ;  ///< Print `Start` of some function
   #define TRACE_END   TRACE_OUT( "End", __FUNCTION__ ) ;    ///< Print `End` of some function
#else
#define TRACE_START  ///< If TRACE is defined, print `Start` of some function
#define TRACE_END    ///< If TRACE is defined, print `End` of some function
#endif


/// Format the heading for dumping members of a class to the console
///
/// Print =====================
#define PRINT_HEADING_FOR_DUMP                                                \
    /* Print =========================================================== */   \
    std::cout << std::setw(80) << std::setfill( '=' ) << "" << std::endl


/// Format a line for dumping the members of a class to the console.
/// Setup the fields for printing (space pad, left justify, etc.)
#define FORMAT_LINE_FOR_DUMP( className, member )         \
    std::cout << std::setfill( ' ' )  /* Space pad    */  \
              << std::left            /* Left justify */  \
              << std::boolalpha  /* Print `true` or `false` for `bool`s */ \
              << std::setw( 8) << (className)             \
              << std::setw(20) << (member)                \
              << std::setw(52)  /* (data) */
