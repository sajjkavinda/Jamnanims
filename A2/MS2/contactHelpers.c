//==============================================
// Name:           Full name here
// Student Number: #########
// Email:          userID@myseneca.ca
// Section:        XXX
// Date:           
//==============================================
// Assignment:     2
// Milestone:      2
//==============================================

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "contactHelpers.h"

// This source file needs to "know about" the functions you prototyped
// in the contact helper header file.
// HINT: Put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
//       #include your contactHelpers header file on the next line:


//--------------------------------
// Function Definitions
//--------------------------------

// +-------------------------------------------------+
// | ====== Assignment 2 | Milestone 2 =======       |
// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-1 |
// |        empty function definitions below and     |
// |        complete the definitions as per the      |
// |        Milestone-2 specifications               | 
// |                                                 |
// | - The clearKeyboard function is done for you    |
// +-------------------------------------------------+


// Clear the standard input buffer
void clearKeyboard(void)
{
    while (getchar() != '\n'); // empty execution code block on purpose
}

// pause function definition goes here:
// pause: Empty function definition goes here:
void pause(void){

  printf("Press Enter to continue");
  void clearKeyboard();
}

// getInt function definition goes here:
// getInt: Empty function definition goes here:
int getInt(void){
  char NL;
  int Value;

  while (NL != '\n'){

  scanf("%d%c", &Value, &NL);
  if (NL != '\n'){
    void clearKeyboard();
    printf("*** INVALID INTEGER *** <Please enter an integer>: ");
  }
  }

return Value;
}

// getIntInRange function definition goes here:
// getIntInRange: Empty function definition goes here:

int getIntInRange(int min, int max){

  int x = getInt();

  if (x <= min && x >= max) {
    return x;
  }
  else {
    printf("*** OUT OF RANGE *** <Enter a number between [param-1] and [param-2]>:");
  }

}

// yes function definition goes here:
// yes: Empty function definition goes here:
int yes(void){
  char ch;
  char NL;

  while (ch == 'y' || ch == 'Y' || ch == 'n' || ch == 'N') {
  printf("Enter single character: ");
  scanf("%c%c", &ch, &NL);
  }

  if ((ch == 'y' || ch == 'Y' || ch == 'n' || ch == 'N') && NL == '\n'){
    if (ch == 'y' || ch == 'Y' ){
      return 1;
    }
    else {
      return 0;
    }
  }
  
}

// menu function definition goes here:
// menu: Empty function definition goes here:
int menu(void){

  int x;

  printf("Contact Management System \n ------------------------- \n 1. Display contacts \n 2. Add a contact \n 3. Update a contact \n 4. Delete a contact \n 5. Search contacts by cell phone number \n 6. Sort contacts by cell phone number \n 0. Exit");
  
  do {
    printf("Select an option: ");
  scanf("%d", &x);
  } while (x <= 6 && x >= 0);

return x;
}

// contactManagerSystem function definition goes here:
// contactManagerSystem: Empty function definition goes here:
void contactManagerSystem(void){

  int y = menu();

  if (y == 1){
    printf("<<< Feature 1 is unavailable >>>");
    int menu();
  }
  else if (y == 2){
    printf("<<< Feature 2 is unavailable >>>");
    int menu();
  }
  else if (y == 3){
    printf("<<< Feature 3 is unavailable >>>");
    int menu();
  }
  else if (y == 4){
    printf("<<< Feature 4 is unavailable >>>");
    int menu();
  }
  else if (y == 5){
    printf("<<< Feature 5 is unavailable >>>");
    int menu();
  }
  else if (y == 6){
    printf("<<< Feature 6 is unavailable >>>");
    int menu();
  }
  else {
    char c;
    printf("Exit the program? (Y)es/(N)o: ");
    scanf("%c", &c);

    if (c == 'Y' || c == 'y'){
      printf("Contact Management System: terminated");
    }
    else {
      int menu();
    }

  }

}
