#include "stdio.h"
#include "personInfo.h"




int setFirstName(PersonInfo *info, char *name)
{    
   
   info->name=name;

  
  return name;
  
}  
/*
int setLastName(PersonInfo *info, char *name)
{
  char *LastName;
  
  if (name[]=0){
   printf("Wrong Name");
   return 0; 
   }
   	
  else {
  LastName= name;
  Printf("Name : %s\n", firstname;);
  
  return LastName;}
  
}  

int setAge( PersonInfo *info, int age)
{
  
  
  if ( age <1 || age>149){
    printf("Invalid age\n");
	return 0;
	}
  else 
    return age;
}  /*


  
  
