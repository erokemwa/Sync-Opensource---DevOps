#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

char name[10];
char pswd[10];

    printf("\t\t------------------------------------------------\n");
    printf("\t\tWelcome To The ALX Hospital Management System\n");
    printf("\t\t------------------------------------------------\n");
do{
    printf("\n\t\t\t\t Login to continue\n");
    printf("\t\t\t\t -----------------\n");
    printf("\n\t\t\t User Name: ");
    scanf("%s", &name);
    if(strcmp(name, "admin") != 0)
    {
    printf("\n\t\t\tUser doesn't exist");
    }
}while(strcmp(name, "admin") != 0);

    if(strcmp(name,"admin") == 0){

    printf("\n\t\t\t Password: ");

    scanf("%s", &pswd);

    if(strcmp(pswd,"123") == 0)
    {
        printf("\t\t------------------------------------------------\n");

        printf("\n\t\t\tWelcome %s Login Success!\n\n", name);

    printf("\t\t================================================\n");

        printf("\t\t\t\t   *MENU*\n\n");

        printf("\t\t\t[1] Add new patient record.\n\n");
        printf("\t\t\t[2] Search or edit patient record.\n\n");
        printf("\t\t\t[3] List record of patients.\n\n");
        printf("\t\t\t[4] Delete patient records.\n\n");
        printf("\t\t\t[5] Exit from the system.\n\n");

    printf("\t\t================================================\n");
    }
    else
    {
       printf("\n\t\t\tWrong Password");

    }
    }
    else{
    printf("\nUser doesn't exist");
    }

    return 0;
}


