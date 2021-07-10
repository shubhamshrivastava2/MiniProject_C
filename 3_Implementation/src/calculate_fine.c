#include "library_management.h"

int calculate_fine(int id, int date, int month, int year) {
    int fine = 0, days;
    FILE *fptr;
    fptr = fopen("library_data.txt","rb");
    book_data *book_fine=(book_data*)malloc(sizeof(book_data));
    while(fread(book_fine, sizeof(book_data), 1, fptr)!='\0'){
        if(id==book_fine->book_id) {
            if(book_fine->date_of_issue[0] == 0) {
                printf("This book is not issued.\nFine is not applicable\n");
                return 0;
            }
            days = (date - book_fine->due_date[0]) + ((month - book_fine->due_date[1])*30) + ((year - book_fine->due_date[2])*365);
            if( days <= 0) {
                fine = 0;
            } else {
                fine = 5*days;
            }
            break;
        }
    }
    fclose(fptr);
    free(book_fine);
    return fine;
}