/* Include guard: */
#ifndef PASSWORD_GENERATOR_C
#define PASSWORD_GENERATOR_C

/* Importations: */
#include <cutils.h>
#include <stdio.h>
#include <stdlib.h>


/* Main code: */
int main()
{
	/* Password Generator version variables: */
	#define PASSWORD_GENERATOR_FULL_VERSION  100.0L                                                                           /* Password Generator full version variable.                          */
	#define PASSWORD_GENERATOR_MAJOR_VERSION   1.0L                                                                           /* Password Generator major version variable.                         */
	#define PASSWORD_GENERATOR_MINOR_VERSION   0.0L                                                                           /* Password Generator minor version variable.                         */
	#define PASSWORD_GENERATOR_PATCH_VERSION   0.0L                                                                           /* Password Generator patch version variable.                         */

	/* Start seed: */
	srand((unsigned)time(NULL));

	/* Local variables: */
	#define MINIMUM_PASSWORD_LENGHT            3                                                                              /* Minimum password lenght variable.                                  */
	#define MAXIMUM_PASSWORD_LENGHT           20                                                                              /* Maximum password lenght variable.                                  */
	int number = 0;                                                                                                           /* Ammount of characters in the password variable.                    */
	int times = 0;                                                                                                            /* Times to generate random characters for the password.              */
	char snumber[8192] = "";                                                                                                  /* String number variable.                                            */
	char characters[95] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789-=_+!@#$%^&*()[]{};:'\"\\|/?,.<>`~"; /* Variable to store all the possible characters to be in a password. */
	char password[21] = "";                                                                                                   /* Variable to store the generated password.                          */

	while(number < MINIMUM_PASSWORD_LENGHT || number > MAXIMUM_PASSWORD_LENGHT)
	{
		printf("Type the ammount of digits that you want to have in the password (Minimum: %d; Maximum: %d): ", MINIMUM_PASSWORD_LENGHT, MAXIMUM_PASSWORD_LENGHT);
		scanf("%8191s", snumber);
		number = atoi(snumber);
	}

	for(times = 0; times < number; ++times)
	{
		password[times] = characters[rand() % 95];
	}

	printf("Generated password: %s\n", password);

	return 0;
}

/* End code: */
#endif
