
#ifndef _LIBRARY_MANAGEMENT_H_
#define _LIBRARY_MANAGEMENT_H_

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 * @brief structure for book records
 * 
 */
typedef struct book_data {
    int book_id;
    char book_title[20];
    char status[10];
    char member_first_name[10];
    char member_last_name[10];
    int member_id;
    int date_of_issue[3];
    int due_date[3];
}book_data;

/**
 * @brief return type for funtions for unit testing
 * 
 */
typedef enum test_values {
    pass = 1,
    fail = 0
}test_values;

/**
 * @brief function to find a book by its ID
 * 
 * @param id 
 * @return test_values 
 */
test_values view_a_record(int id);

/**
 * @brief function to add new books to the library
 * 
 * @return test_values 
 */
test_values enter_new_record(int id, char title[]);

/**
 * @brief function to update the status of a book
 * 
 * @param id 
 * @return test_values 
 */
test_values update_record(int id, char new_status[], int new_date_of_issue[], int new_due_date[], char new_member_first_name[],char new_member_last_name[], int new_member_id);

/**
 * @brief funtion to denote discarded books
 * 
 * @param id 
 * @return test_values 
 */
test_values delete_record(int id);

/**
 * @brief function to view all the books
 * 
 * @return test_values 
 */
test_values view_all_records();

/**
 * @brief function to calculate fine
 * 
 * @param id 
 * @param date 
 * @param month 
 * @param year 
 * @return int 
 */
int calculate_fine(int id, int date, int month, int year);

#endif