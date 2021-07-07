#include "fun.h"

void book_info(struct library lib[100]){
    
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