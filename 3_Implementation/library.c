// C program for the E-library
// Management System
#include <stdio.h>
#include "fun.h"
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char ar_nm[30], bk_nm[30];

// Keep the track of the number of
// of books available in the library
int input=0, count=0;
// Create Structure of Library
struct library {
	char book_name[20];
	char author[20];
	int pages;
	float price;
};
void headMessage(const char *message)
{
    printf("\n   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\t\t%s",message);
    printf("\n   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
}



void total_books(){
    printf("\nNumber of books in this library : %d Books\n",count);
}
void welcomeMessage(){
    printf("\n\n\t\t**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    printf("\n\t********######  WELCOME TO E-LIBRARY #####********\n");
    printf("\n\t\t**-**-**-**-**-**-**-**-**-**-**-**-**\n\n");
    
}
// Driver Code
int main()
{
    welcomeMessage();
	struct library lib[100];
	// Iterate the loop
	while (input != 5) {
        headMessage("MAIN MENU");
        printf("\n1. Add book information\n");
        printf("2. Display book information\n");
		printf("3. List all books of given author\n");
		printf("4. List the count of books in the library\n");
		printf("5. Exit");

		// Enter the book details
		printf("\n\nEnter one of the above: ");
		scanf("%d", &input);

		// Process the input
		switch (input) {

		// Add book
		case 1:
		    add_book(&lib[100],count);
			break;

		// Print book information
		case 2:
		    book_info(&lib[100]);
			break;

		// Take the author name as input
		// List all books of given author
		case 3:
		    Books_by_author(&lib[100]);
			break;

		// Print total count
		case 4:
		    total_books();
			break;
		case 5:
            printf("\n\n\n\t\t\t\tThank you!!!\n\n\n\n\n");
			exit(0);
            break;
        default:
            printf("\n\t\t\tINVALID INPUT!!! Try again...\n");
		}
	}
	return 0;
}
