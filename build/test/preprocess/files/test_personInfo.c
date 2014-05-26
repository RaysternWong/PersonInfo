#include "unity.h"
#include "personInfo.h"


typedef struct PersonInfo_t{

  char firstName[21];

  char lastName[21];

  int age;

  float height;

  unsigned long int telephone;

  } PersonInfo *info detail;









void test_setFirstName_should_return_Jack(void)

{

 char *firstname

 firstName= setFirstName(detail, "Jack" );



 UnityAssertEqualString((const char*)("Jack"), (const char*)(firstname), (((void *)0)), (_U_UINT)20);



}
