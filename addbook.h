#include<stdio.h>
#include"All_structure.h"
void add_book_to_db(struct addbook b)
{
	  
	FILE *fptr;
	
	fptr=fopen("D:\\Demo project\\Library management system.txt","a");
	
	fprintf(fptr,"%d\t%s\t%s\t%s\t%d\t%d\t%d\t%d\n",b.id,b.stname,b.name,b.Author,b.Quantity,b.price,b.count,b.rackno);

	fclose(fptr);
	
	printf("Data has been saved...\n");


}
