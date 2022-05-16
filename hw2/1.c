#define PASSWD_SZ 31
#define TRUE 1
#define FALSE 0

char quit[] = "quit";
char special_letters[] = "!%_&#+-*/"; 

int check_passwd(char* password, int passwd_len);

void q1(void)
{
	int res = FALSE;
	char password[PASSWD_SZ];

	while (1) {
		printf("Create your password (up to 30 letters): ");
		scanf("%s", password);

		// Your code here
		
		if (res == TRUE)
			printf("Good password!\n");
		else
			printf("Bad password!\n");			
	}

}
