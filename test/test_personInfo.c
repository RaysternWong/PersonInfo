#include "unity.h"
#include "personInfo.h"





void test_setFirstName_givenJack_should_return_Jack()
{
	char result;
	Personinfo->firstname =name;
	result = setFirstName( &NameDetail, "Jack" );
	
	TEST_ASSERT_EQUAL_STRING("Jack",result);
	
}
/*
void test_setLastName_givenLion_should_return_Lion(void)
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
  }
  
 void test_setHeight  /*
 