#include "unity.h"
#include "personInfo.h"




void test_setFirstName_should_return_Jack(void)

{

 char *firstname

 firstName= setFirstName(detail, "Jack" );



 UnityAssertEqualString((const char*)("Jack"), (const char*)(firstname), (((void *)0)), (_U_UINT)10);



}



void test_setLastName_should_return_Lion(void)

{

 char *LastName

 LastName= setFirstName(detail, "Lion" );



 UnityAssertEqualString((const char*)("Lion"), (const char*)(LastName), (((void *)0)), (_U_UINT)19);



}



void test_setAge_given21_should_return21(void)

{

  int age;

  age= setAge( detail, 23)

  UnityAssertEqualString((const char*)(23), (const char*)(age), (((void *)0)), (_U_UINT)27);

  }
