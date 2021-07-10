#include"library_management.h"
#include"unity_internals.h"
#include"unity.h"

/* Required by the unity test framework */
void setUp(){}

/* Required by the unity test framework */
void tearDown(){}


void test_enter_new_record(void){
    TEST_ASSERT_EQUAL(pass,enter_new_record(900, "Wings of freedom"));
}

void test_view_all_records(void){
    TEST_ASSERT_EQUAL(pass,view_all_records());
}

void test_view_a_record(void){
    TEST_ASSERT_EQUAL(fail,view_a_record(-2));
    TEST_ASSERT_EQUAL(pass,view_a_record(900));
}

void test_update_record(void){
    int test_date_issue[3] = {21, 01, 2021}, test_date_due[3] = {31, 01, 2021};
    TEST_ASSERT_EQUAL(pass,update_record(900, "issued", test_date_issue, test_date_due, "Anupam","Gupta", 123));
}

void test_delete_record(void){
    TEST_ASSERT_EQUAL(pass,delete_record(900));
}

/*void test_calculate_fine(void) {
    TEST_ASSERT_EQUAL(10, calculate_fine(301, 30, 01, 2021));
    TEST_ASSERT_EQUAL(0, calculate_fine(301, 22, 01, 2021));
    TEST_ASSERT_EQUAL(0, calculate_fine(3011, 30, 01, 2021));
}*/

int main(){
    UNITY_BEGIN();

    RUN_TEST(test_enter_new_record);
    RUN_TEST(test_view_a_record);
    RUN_TEST(test_update_record);
    RUN_TEST(test_delete_record);
    RUN_TEST(test_view_all_records);
   // RUN_TEST(test_calculate_fine);
    
    return UNITY_END();
}