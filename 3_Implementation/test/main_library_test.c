#include "unity.h"
#include "main_library.c"

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_add_book(void) {
  libraries new_book = {"Harry", "JK", 598, 499};
  TEST_ASSERT_EQUAL(0, add_book(&new_book));

}

void test_book_info(void) {
  TEST_ASSERT_EQUAL(1, book_info()>0);

}


void test_books_by_author(void) {
  libraries new_book = {"Harry", "JK", 598, 499};
  TEST_ASSERT_EQUAL(0, books_by_author(&new_book));
  TEST_ASSERT_EQUAL(0, books_by_author(new_book.author));
}

void test_total_books(void){
    libraries new_book = {"Harry", "JK", 598, 499};
    TEST_ASSERT_EQUAL(1,add_book(&new_book));
}

int main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_add_book);
  RUN_TEST(test_book_info);
  RUN_TEST(test_books_by_author);
  RUN_TEST(test_total_books);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
