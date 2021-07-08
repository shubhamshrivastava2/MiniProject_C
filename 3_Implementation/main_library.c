// C program for the E-library
// Management System
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
// Create a instance

char ar_nm[30], bk_nm[30];

// Keep the track of the number of
// of books available in the library
int  input=0, count=0;
// Create Structure of Library
typedef struct library {
	char book_name[20];
	char author[20];
	int pages;
	float price;
}libraries;
void headMessage(const char *message)
{
    printf("\n   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\t\t%s",message);
    printf("\n   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
}
void add_book(libraries lib[100]){
    headMessage("ENTER YOUR DETAILS BELOW");
    printf("\nEnter book name = ");
    scanf("%s", lib[count].book_name);
    printf("Enter author name = ");
    scanf("%s", lib[count].author);
    printf("Enter pages = ");
    scanf("%d", &lib[count].pages);
    printf("Enter price = ");
    scanf("%f", &lib[count].price);
	count++;
}
void book_info(libraries lib[100]){
    
    printf("\n\t\t\t Displaying... \n\n");
    sleep(1);
    int flag=1;
    if(count)
    {
        headMessage("You have entered the following information");
	    for (int i = 0; i < count; i++) {
	        printf("\n\nName of the Book = %s\n",lib[i].book_name);
            printf("Author of the Book = %s",lib[i].author);
            printf("\nNo. of pages = %d",lib[i].pages);
            printf("\nPrice of the Book = %.2f Rupees\n",lib[i].price);
            flag=0;
	    }
    }
	if(flag==1)
	    printf("  You Entered Nothing\n\n");
}
void Books_by_author(libraries lib[100]){
    headMessage("Retrieving Books by Author");
    printf("\n\nEnter author name : ");
	scanf("%s", ar_nm);
	int flag=1;
	//printf("\n\t\t%s",ar_nm);
	for (int i = 0; i < count; i++) {
	    if (strcmp(ar_nm,lib[i].author)== 0){
	        printf("\n\t\tAuthor: %s",ar_nm);
	        printf("\nBook Name = %s \nPages in this Book = %d \nPrice of this book= %f\n\n",
                lib[i].book_name,lib[i].pages,lib[i].price);
            flag=0;
		}
    }
    if(flag==1){
		printf("\n\t\tAuthor: %s",ar_nm);
        printf("\nNo Books found\n\n");
    }
}
void total_books(){
    printf("\nNumber of books in this library : %d Books\n",count);
}
void welcomeMessage(){
    printf("\n\n\t\t**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    printf("\n\t********######  WELCOME TO E-LIBRARY #####********\n");
    printf("\n\t\t**-**-**-**-**-**-**-**-**-**-**-**-**\n\n");
    
}
void menu(){
    libraries lib[100];
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
		    add_book(&lib[100]);
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
}
// Driver Code
int main()
{
    welcomeMessage();
	menu();
	return 0;
}
