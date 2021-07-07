#include "fun.h"

void books_by_author(struct library lib[100]){
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