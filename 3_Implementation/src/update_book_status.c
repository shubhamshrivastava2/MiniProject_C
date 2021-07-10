
#include "library_management.h"

test_values update_record(int id, char new_status[], int new_date_of_issue[], int new_due_date[], char new_member_first_name[],char new_member_last_name[], int new_member_id){
    FILE *fptr1;
    FILE *fptr2;
    fptr1 = fopen("library_data.txt","rb");
    fptr2 = fopen("temp_data.txt","wb");
    if(fptr1==NULL){
        printf("Unable to open the file\n");
        fclose(fptr2);
        return fail;
    }else{
        book_data *update_status=(book_data*)malloc(sizeof(book_data));
        while(fread(update_status, sizeof(book_data), 1, fptr1)!='\0'){
            if(id==update_status->book_id){
                strcpy(update_status->status,new_status);
                update_status->date_of_issue[0] = new_date_of_issue[0];
                update_status->date_of_issue[1] = new_date_of_issue[1];
                update_status->date_of_issue[2] = new_date_of_issue[2];
                update_status->due_date[0] = new_due_date[0];
                update_status->due_date[1] = new_due_date[1];
                update_status->due_date[2] = new_due_date[2];
                strcpy(update_status->member_first_name,new_member_first_name);
                strcpy(update_status->member_last_name,new_member_last_name);
                update_status->member_id=new_member_id;
            }
            fwrite(update_status, sizeof(book_data), 1, fptr2);            
        }
        fclose(fptr1);
        fclose(fptr2);
        free(update_status);
        remove("library_data.txt");
        rename("temp_data.txt", "library_data.txt");
    }
    return pass;   
}