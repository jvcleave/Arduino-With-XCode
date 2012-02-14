/*
 *  Screen.h
 *  Example
 *
 *  Created by Van Cleave, Jason on 2/14/12.
 *  Copyright 2012 __MyCompanyName__. All rights reserved.
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int i;
	printf ("Checking if processor is available...");
	if (system(NULL)) puts ("Ok");
    else exit (1);
	printf ("Executing command DIR...\n");
	i=system ("dir");
	printf ("The value returned was: %d.\n",i);
	return 0;
}