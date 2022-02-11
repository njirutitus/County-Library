/*
 county library management system
 by Titus Njiru
 Feb 2022
 MIT license
 C89 Compiler
*/
#include <stdio.h>
#include <stdlib.h>

int menu() {
    int action;
    printf("Select an action below\n");
    printf("1. Add new Patron\n");
    printf("2. View all patrons\n");
    printf("3. View all Books\n");
    printf("4. Add new Book\n");
    printf("Your action: ");
    scanf("%d",&action);
    return action;
}

int main()
{
    printf("COUNTY LIBRARY SYSTEM\n");
    printf("Welcome Mr. Titus\n");
    printf("You selected action %d",menu());
    return 0;
}
