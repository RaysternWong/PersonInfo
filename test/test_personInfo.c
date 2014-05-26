#include "unity.h"
#include "personInfo.h"


void test_setFirstName_should_return_Jack(void)
{
	char *firstname
	firstName= setFirstName(detail, "Jack" );
	
	TEST_ASSERT_EQUAL_STRING("Jack",firstname);
	
}

void test_setLastName_should_return_Lion(void)
{
	char *LastName
	LastName= setFirstName(detail, "Lion" );
	
	TEST_ASSERT_EQUAL_STRING("Lion",LastName);
	
}

void test_setAge_given21_should_return21(void)
{
  int age;
  age= setAge( detail, 23)
  TEST_ASSERT_EQUAL_STRING(23,age);