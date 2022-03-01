#include <stdio.h>
#include <stdlib.h>

int menu()
{
  int action;
  printf("Select an action:\n");
  printf("1. Add new patron\n");
  printf("2. View Patrons\n");
  printf("3. View Books\n");
  printf("4. Add New Book\n");
  printf("Your Action: ");
  scanf("%d",&action);
  if(action < 1 || action > 4) {
    printf("Invalid action. Try again\n");
  }
  return action;
}

void execute_action(int action) {
    switch(action) {
    case 1:
        printf("adding a new Patron\n");
        break;
    case 2:
        printf("Here is a list of patrons\n");
        break;
    case 3:
        printf("Here is a list of all books");
        break;
    case 4:
        printf("adding a new Book\n");
        break;
    default:
        printf("Invalid action.\n");
    }
}



int main()
{
    printf("COUNTY LIBRARY SYSTEM!\n");
    printf("Welcome Mr. Titus!\n");
    execute_action(menu());
    return 0;
}
