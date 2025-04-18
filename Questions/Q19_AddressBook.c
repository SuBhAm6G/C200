// Address Book Management:
//      Define a structure for Contact (name, address, phone number, email address).
//      Create functions to:
//      Read contact information from a text file (each line represents a contact).
//      Add new contacts to the text file.
//      Search for contacts by name.
// Implement error handling for file operations (e.g., file not found, invalid input).
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 30
//Declare Structure
    struct Contact{
        char name[MAX];
        char address[MAX];
        char number[11];
        char email[MAX];
    };
//Declare global structure
    struct Contact con;

    void readContacts();
    void addContact();
    void searchContact();
//Operation with switch cases
    void Operations(int n){
        switch (n)
        {
        case 1:
            readContacts();
            break;
        case 2:
            addContact();
            break;
        case 3:
            searchContact();
            break;
        case 4:
            exit(0);
        default:
            printf("\nInvalid Input");
            exit(1);
        }
    }

int main() {
    int n;
    printf("Please Enter the operation you want to perform--->\n\tRead Contacts--->1\n\tAdd Contacts--->2\n\tSearch Contacts--->3\n\tExit--->4\n");
    scanf("%d", &n);
    Operations(n);
    return 0;
}

void readContacts(){
    FILE *fp;
    fp=fopen("contacts.txt", "r+");
    if (fp==NULL)
    {
        perror("Error");
    }
    fseek(fp, 0, SEEK_SET);
    while (fscanf(fp,"%s %s %s %s", con.name, con.address, con.number, con.email)!=EOF)
    {
        printf("\nName: %s |Address: %s |Number: %s |email: %s", con.name, con.address, con.number, con.email);
    }
    fclose(fp);
}

void addContact(){
    FILE *fp;
    fp=fopen("contacts.txt", "w");
    if (fp==NULL)
    {
        perror("Error");
    }
    printf("Enter the new name : ");
    scanf("%s", con.name);
    printf("Enter the new address : ");
    scanf("%s", con.address);
    printf("Enter the new number : ");
    scanf("%10s", con.number);
    printf("Enter the new email : ");
    scanf("%s", con.email);
    fseek(fp, 0, SEEK_SET);
    if (fprintf(fp, "%s %10s %s %s\n", con.name, con.address, con.number, con.email)<0)
    {
        perror("Error");
    }
    else
    {
        printf("Contact added successfully\n");
    }
    fclose(fp);
}

void searchContact(){
    FILE *fp;
    fp=fopen("contacts.txt", "a+");
    if (fp==NULL)
    {
        perror("Error");
    }
    char name2[MAX];
    char hold_to_compare[MAX];
    printf("Enter the name you want to search for: ");
    scanf("%s",name2);
    int found=0;
    // fseek(fp, 0, SEEK_SET);
    while (fscanf(fp, "%s", hold_to_compare)!=EOF)
    {
        if (strcmp(name2, hold_to_compare)==0)
        {
            found=1;
            fscanf(fp, "%s %s %s", con.address, con.number, con.email);
            printf("\nName: %s |Address: %s |Number: %s |email: %s", name2, con.address, con.number, con.email);
            break;
        }
    }
    if (found==0)
    {
        printf("The contact is not there\n");
    }
    fclose(fp);
    
}
