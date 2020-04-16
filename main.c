#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int showinterface(){ //display user interface
  int flag = 0;
  int i = 0;
  char choice[50]; //User's pick
  i = 0;
    printf("\n0. Set directory    \n");
    printf("1. Insert new books \n");
    printf("2. Seach a book     \n");
    printf("3. Delete a book    \n");
    printf("4. Move a book      \n");
    printf("5. Rename a book    \n");
    printf("6. Show information \n");

  while (flag == 0){
    printf("\nEnter selection >  ");
    scanf("%s",choice);
    if (strlen(choice) > 1) //if user write more than 1 character it ask to pick again
      continue;
    if (isdigit(choice[0])){ //check if user wrote an integer or a character
      flag = 1;
      i = (int) choice[0] - 48 ; //convert character in an effective integer
      if (i < 0 || i > 6){ //check if user choice is out of range
        flag = 0;
      }
    }
  }
  return i;
}

void set directory(){ //set library directory
  
}



/*void deletebooks; //delete a book
void movebooks; //move a book into another folder
void searchbooks; //Search a book
void insertbooks; //Insert a new book from given folder
void information; //show information like author and number of page
*/
int main(){
  int choice;
  choice = showinterface();
  return 0;
}
