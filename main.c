/*
 county library management system
 by Titus Njiru
 Feb 2022
 MIT license
 C89 Compiler
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

struct Patron {
    char name[100];
    char email[50];
    char password[30];
    int is_staff;
};

// Function declarations
void add_patron();
int menu();
void execute_action(int action);
void save_patron(struct Patron);

int main()
{
    while(1) {
        printf("COUNTY LIBRARY SYSTEM\n");
        printf("Welcome Mr. Titus\n");
        execute_action(menu());
        printf("Press any key to continue");
        getch();
        system("cls");
    }
    return 0;
}

void add_patron() {
    struct Patron patron;
    printf("Enter name: ");
    getchar();
    gets(patron.name);
    printf("Enter Email: ");
    gets(patron.email);
    printf("Enter initial password: ");
    gets(patron.email);
    printf("Enter 1 if staff 0 otherwise");
    scanf("%d",&patron.is_staff);
    printf("%s added\n",patron.name);
}

int menu() {
    int action;
    printf("Select an action below\n");
    printf("1. Add new Patron\n");
    printf("2. View all patrons\n");
    printf("3. View all Books\n");
    printf("4. Add new Book\n");
    printf("Your action: ");
    scanf("%d",&action);
    if(action < 1 || action > 4) {
        printf("Invalid Action. Try again\n");
    }
    return action;
}

void execute_action(int action) {
    switch(action) {
    case 1:
        add_patron();
        break;
    case 2:
        printf("list of all patrons\n");
        break;
    case 3:
        printf("list of all books\n");
        break;
    case 4:
        printf("adding a new book\n");
        break;
    default: printf("Invalid action.\n");
    }
}
