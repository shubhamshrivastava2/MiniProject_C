#include "fun.h"

void add_book(struct library lib[100]){
    headMessage("ENTER YOUR DETAILS BELOW");
    printf("\nEnter book name = ");
    scanf("%s", &lib[count].book_name);
    printf("Enter author name = ");
    scanf("%s", lib[count].author);
    printf("Enter pages = ");
    scanf("%d", &lib[count].pages);
    printf("Enter price = ");
    scanf("%f", &lib[count].price);
	count++;
}