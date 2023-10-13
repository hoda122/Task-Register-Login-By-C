
#include <string.h>



struct User {
    char username[20];
    char password[20];
            };
struct User users[50];
int x =0;


int main() {

    char username[20];
    char password[20];
    int choice;



    // one for register     two for login

       while (1) {
            printf("1-register\n 2-login \n \n");

        printf("Enter the choice you want one or two : ");
        scanf("%d", &choice);


   //switch case for register or login

        switch (choice) {
            case 1:
                userRegister();
                break;

            case 2:
                printf("Enter your username: ");
                scanf("%s",username);
                printf("Enter your password: ");
                scanf("%s",password);

                if(userLogin(username, password)){
                    printf("Login successful  \n\n");
                }else{
                    printf("Login failed  \n\n");  }
                break;


             default:
                printf("Invalid choice");
        } } }


   //function for the registeration
   void userRegister() {
       printf("Enter your username: ");
        scanf("%s",users[x].username);

       printf("Enter your password: ");
       scanf("%s",users[x].password);
       printf("Registration successful  \n\n");
       x++;
}


//function for login
int userLogin(char* username, char* password) {
    for(int i = 0; i<x; i++) {
        if(strcmp(username,users[i].username)==0 && strcmp(password,users[i].password)==0) {
            return 1;
            }
    }
    return 0;
}
