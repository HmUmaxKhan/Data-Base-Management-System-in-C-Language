//Header files
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<windows.h>

//functions
void gotoxy(int x, int y);
char registration();
char login();

struct login
{
    char name[40];
    char username[40];
    char password[20];
};

struct login l;


int main(void)
{
    // Store Data of Employees
    struct employee{
        char id[40];
        char name[40];
        char d_o_j[40];
        char nationality[40];
        char email[40];
        char gender[40];
        char department[40];
        char working_hours[40];
        float bs;
    };

    struct employee e; // DECLARATION

    // Store Data of Task By Manager assigned to Employee

    struct task{
        char id[40];
        char name[20];
        char task[200];
    };

    struct task t; // DECLARARTION

    struct complain{
        char id[40];
        char name[20];
        char complain[200];
    };

    struct complain c;

    static int pass=3234; // Initial pin for Manager to log in

    // Variable DECLARATION

    int pin; // Pin enter by user
    long int recsize; // for fwrite anf fread functions
    char id[20], string[1000], complain[1000], password[30]; // Enter by user
    char choice, another,another1; // Enter by user
    int i=2, j=2;

    // File Pointers

    FILE *fptr1, *fptr2, *fptr3, *fptr4, *fptr5;

    // Open file to store data by employee

    fptr1 = fopen("Employee.DAT","rb+");
    if(fptr1 == NULL)
    {
        fptr1 = fopen("Employee.DAT","wb+"); // create a file if it does'nt exist
        if(fptr1 == NULL)
        {
            printf("Connot open file");
            exit(1);
        }
    }

    // coloring text
    HANDLE hc = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hc, 0x04);

    label :
        //loop until exit or break
        while (1)
        {
            system("cls"); // clear console window

            //for console betterment:)
            for(int i=0; i<182; i++)
            {
                printf("-");
            }
            for(int i=0; i<182; i++)
            {
                printf("*");
            }

            gotoxy(70, 3);
            printf("-----------------------------------------------");
            gotoxy(70, 4);
            printf("| Database Management system ");
            gotoxy(116,4);
            printf("|");
            gotoxy(70, 5);
            printf("-----------------------------------------------\n\n");

            SetConsoleTextAttribute(hc, 0x04); // coloring text

            //for console betterment:)
            for(int i=0; i<182; i++)
            {
                printf("-");
            }
            for(int i=0; i<182; i++)
            {
                printf("*");
            }


            gotoxy(20,10);
            printf("Are you ...................");
            gotoxy(20, 11);
            printf("------------------------------------");
            gotoxy(20, 12);
            printf("| 1. Employee "); // Asking if employee or not
            gotoxy(55,12);
            printf("|");
            gotoxy(20, 13);
            printf("------------------------------------");
            gotoxy(20, 14);
            printf("------------------------------------");
            gotoxy(20, 15);
            printf("| 2. Manager "); // Asking if manager or not
            gotoxy(55,15);
            printf("|");
            gotoxy(20, 16);
            printf("------------------------------------");
            gotoxy(20, 17);
            printf("------------------------------------");
            gotoxy(20, 18);
            printf("| 3. Exit ");
            gotoxy(55,18);
            printf("|");
            gotoxy(20, 19);
            printf("------------------------------------");
            gotoxy(20,21);
            printf(">>>");
            choice = getche();//input from user


            switch(choice)
            {
            
            //For Employee
            case '1':
                system("cls"); // clear the console window

                recsize  = sizeof(t); // for fwrite and fread function
                rewind(fptr1); // move cursor to start of the file

                gotoxy(30,1);
                printf("-->Enter your Id");
                gotoxy(30,3);
                printf(">>>");
                gets(id);

                recsize = sizeof(e); // for fwrite and fread function

                //raeding employee data and displaying it
                while(fread(&e,recsize,1,fptr1)==1)
                {
                    if(strcmp(e.id,id) == 0)
                    {
                        gotoxy(30,5);
                        printf("-->Id: %s",e.id);
                        strcpy(c.id,e.id);
                        gotoxy(30,7);
                        printf("-->Name: %s",e.name);
                        strcpy(c.name,e.name);
                        gotoxy(30,9);
                        printf("-->Date of Joining: %s",e.d_o_j);
                        gotoxy(30,11);
                        printf("-->Nationality: %s",e.nationality);
                        gotoxy(30,13);
                        printf("-->Email: %s",e.email);
                        gotoxy(30,15);
                        printf("-->Gender: %s",e.gender);
                        gotoxy(30,17);
                        printf("-->Department: %s",e.department);
                        gotoxy(30,19);
                        printf("-->Working Hours: %s",e.working_hours);
                        gotoxy(30,21);
                        printf("-->Basic Salary: %f",e.bs);
                    }
                }

                //for console betterment:)
                gotoxy(100,3);
                printf("*************************************************");
                gotoxy(100,4);
                printf("|");
                gotoxy(149,4);
                printf("|");
                gotoxy(100,5);
                printf("|               $$$$$$$$$$$$$$$$$$$$");
                gotoxy(149,5);
                printf("|");
                gotoxy(100,6);
                printf("|        $$$$$$$$$$$ $$$$$$$$$$$$$$$$$$$$");
                gotoxy(149,6);
                printf("|");
                gotoxy(100,7);
                printf("|     $$$$$$$$$$$$$   $$$$$$$$$$$$$$$$$$$$$$");
                gotoxy(149,7);
                printf("|");
                gotoxy(100,8);
                printf("|  $$$$$$$$$$$$$$$     $$$$$$$$$ $$$$$$$$$$$$$");
                gotoxy(149,8);
                printf("|");
                gotoxy(100,9);
                printf("| $$$$$$$$$$$$$$$$$$$$$$$$$$$$$   $$$$$$$$$$$$$$");
                gotoxy(149,9);
                printf("|");
                gotoxy(100,10);
                printf("|$$$$$$$$$$$$$$$$$$$$$$$$$$$$$     $$$$$$$$$$$$$$");
                gotoxy(149,10);
                printf("|");
                gotoxy(100,11);
                printf("|$$$$$$$$$$$$   $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
                gotoxy(149,11);
                printf("|");
                gotoxy(100,12);
                printf("| $$$$$$$$$$$$$      $$$$$$$$$$$$$$$$$$$$$$$$$$$");
                gotoxy(149,12);
                printf("|");
                gotoxy(100,13);
                printf("|  $$$$$$$$$$$$$$$$$              $$$$$$$$$$$$$");
                gotoxy(149,13);
                printf("|");
                gotoxy(100,14);
                printf("|    $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
                gotoxy(149,14);
                printf("|");
                gotoxy(100,15);
                printf("|        $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
                gotoxy(149,15);
                printf("|");
                gotoxy(100,16);
                printf("|              $$$$$$$$$$$$$$$$$$$$");
                gotoxy(149,16);
                printf("|");
                gotoxy(100,17);
                printf("|");
                gotoxy(149,17);
                printf("|");
                gotoxy(100,18);
                printf("*************************************************");

                fclose(fptr1); // closing file

                recsize = sizeof(t); // for fwrite and fread function
                // opening task file
                fptr3=fopen("kamkr.DAT","ab+");

                rewind(fptr3); // move cursor to start of file

                if(fptr3 == NULL) // if file does not exist
                {
                    gotoxy(30,23);
                    printf("Task by Manager:");
                    gotoxy(30,25);
                    printf(">>>> Currently no task by manager");
                }

                // Displaying task by manager
                while(fread(&t,recsize,1,fptr3)==1)
                {
                    if(strcmp(t.id,id) == 0)
                    {
                        gotoxy(30,23);
                        printf("Task by Manager:");
                        gotoxy(30,25);
                        printf(">>>%s",t.task);
                    }

                }


                fclose(fptr3); // Closing task file


                fptr4 = fopen("Complain.DAT","rb+"); // Opening complain file

                if(fptr4 == NULL) // if file does not exist
                {
                    fptr4 = fopen("Complain.DAT","wb+"); // create a file if it does'nt exist
                    if(fptr4 == NULL)
                        {
                            printf("Connot open file");
                            exit(1);
                        }
                }

                fseek(fptr4,0,SEEK_END); // move cursor to end of file

                gotoxy(30,27);
                printf("-------------------------------------------------------------");
                gotoxy(30, 28);
                printf("| Want to send any Complain and queiries, (y/n)...."); 
                gotoxy(90,28);
                printf("|");
                gotoxy(30, 29);
                printf("-------------------------------------------------------------");
                gotoxy(30,31);
                printf(">>>");

                choice = getche(); // input from keyboard

                recsize = sizeof(c); // for fwrite and fread

                if (choice == 'y') // Want to report any complain etc.
                {
                    system("cls");

                    //for console betterment:)
                    gotoxy(30,10);
                    printf("Enter complain.....");
                    gotoxy(70,10);
                    printf(" 0 0 0    . . .");
                    gotoxy(70,11);
                    printf("0 . . 0  . o o .");
                    gotoxy(70,12);
                    printf("0 --- 0  . \\_/ .");
                    gotoxy(70,13);
                    printf(" 0 0 0    . . .");
                    gotoxy(70,14);
                    printf("OHHHH!!! I see complains..");
                    gotoxy(30,12);
                    printf(">>>");
                    gets(c.complain);
                    system("cls");
                    gotoxy(70,10);
                    printf(" _________");
                    gotoxy(70,11);
                    printf("/         \\");
                    gotoxy(70,12);
                    printf("|  /\\ /\\  |");
                    gotoxy(70,13);
                    printf("|    -    |");
                    gotoxy(70,14);
                    printf("|  \\___/  |");
                    gotoxy(70,14);
                    printf("\\_________/");
                    gotoxy(70,15);
                    printf("But, no worry I know your location :)");
                    gotoxy(30,15);


                    printf("Press any key to continue..."); // return to main interface

                }

                fwrite(&c,recsize,1,fptr4); // write the record in the file
                fflush(stdin);

                fclose(fptr4); // closing complain file

                getche(); // input from keybord return to main interface
                break;

            // For Manager 
            case '2':
                system("cls");//Clear console window

                gotoxy(30,11);
                printf("------------------------------------");
                gotoxy(30, 12);
                printf("| 1. Registration "); // Asking for registration
                gotoxy(65,12);
                printf("|");
                gotoxy(30,13);
                printf("------------------------------------");
                gotoxy(30,15);
                printf("------------------------------------");
                gotoxy(30, 16);
                printf("| 2. Login "); // Asking for login
                gotoxy(65,16);
                printf("|");
                gotoxy(30,17);
                printf("------------------------------------");
                gotoxy(30,19);
                printf("------------------------------------");
                gotoxy(30, 20);
                printf("| 3. Return "); // returning to main interface
                gotoxy(65,20);
                printf("|");
                gotoxy(30,21);
                printf("------------------------------------");

                gotoxy(30,23);
                printf(">>>");
                choice = getche();

                switch(choice)
                {
                case '1':
                    another1 = registration();
                    break;

                case '2':
                    another1 = login();
                    break;
                
                case '3':
                    goto label;
                    break;

                }

                if (another1 == '0')
                {
                    //loop until break or exit
                    while(1)
                    {
                        system("cls"); //clear the console window


                        gotoxy(20,4); 
                        printf("1. Add Record"); // option for add record
                        gotoxy(20,6);
                        printf("2. List Records"); // option for showing existing record
                        gotoxy(20,8);
                        printf("3. Modify Records"); // option for editing record
                        gotoxy(20,10);
                        printf("4. Delete Records"); // option for deleting record
                        gotoxy(20,12);
                        printf("5. Assign Task"); // option for assigning task
                        gotoxy(20,14);
                        printf("6. Complains and Queries"); // option for checking complain and queries
                        gotoxy(20,16);
                        printf("7. Change password or username"); // option for changing pin
                        gotoxy(20,18);
                        printf("8. Return to main interface"); // return to main interface
                        gotoxy(20,20);
                        printf("9. Exit"); // exit from the program
                        gotoxy(20,22);
                        printf("Your Choice: "); // enter the choice 1, 2, 3, 4, 5, 6, 7, 8, 9

                        fflush(stdin); // flush the input buffer

                        choice  = getche(); // get the input from keyboard

                        switch(choice)
                        {
                        // Adding record
                        case '1':
                            system("cls"); // clear the console window

                            fseek(fptr1,0,SEEK_END); // search the file and move cursor to end of the file
                            // here 0 indicates moving 0 distance from the end of the file

                            another = 'y';
                            while(another == 'y')  // if user want to add another record
                            {
                                system("cls"); // clear the console

                                gotoxy(30,4);
                                printf("Enter Id: "); // Adding Id
                                gets(e.id);
                                gotoxy(30,6);
                                printf("Enter Name: "); // Adding Nmae
                                gets(e.name);
                                gotoxy(30,8);
                                printf("Enter Date of joining: "); // Adding Date of joining
                                gets(e.d_o_j);
                                gotoxy(30,10);
                                printf("Enter Nationality: "); // Adding Nationality
                                gets(e.nationality);
                                gotoxy(30,12);
                                printf("Enter email: "); // Adding Email Address
                                gets(e.email);
                                gotoxy(30,14);
                                printf("Enter Gender: "); // Adding Gender
                                gets(e.gender);
                                gotoxy(30,16);
                                printf("Enter department: "); // Adding Department of Employee
                                gets(e.department);
                                gotoxy(30,18);
                                printf("Enter working hours per week of employee: "); // Adding Working hours per week
                                gets(e.working_hours);
                                gotoxy(30,20);
                                printf("Enter basic salary: "); // Adding Basic salary of employee
                                scanf("%f",&e.bs);

                                recsize = sizeof(e); // for fwrite

                                fwrite(&e,recsize,1,fptr1); // write the record in the file

                                gotoxy(30,22);
                                printf("------------------------------------");
                                gotoxy(30, 23);
                                printf("| Add another record(y/n)");
                                gotoxy(65,23);
                                printf("|");
                                gotoxy(30,24);
                                printf("------------------------------------");
                                gotoxy(30,25);
                                printf(">>>");

                                fflush(stdin); // flush the input buffer
                                another = getche(); // Get the input from keyboard

                            }
                            break;
                        
                        // List the Record
                        case '2':
                            system("cls"); // clear the console window

                            rewind(fptr1); // this moves file cursor to start of the file

                            
                            // Heading of record
                            gotoxy(1,1);
                            printf("Id");
                            gotoxy(10,1);
                            printf("Name");
                            gotoxy(24,1);
                            printf("Date of Joining");
                            gotoxy(45,1);
                            printf("Nationality");
                            gotoxy(65,1);
                            printf("Email Address");
                            gotoxy(100,1);
                            printf("Gender");
                            gotoxy(110,1);
                            printf("Department");
                            gotoxy(130,1);
                            printf("Working Hours per week");
                            gotoxy(155,1);
                            printf("Basic Salary\n");

                            recsize = sizeof(e);// for fwrite

                            while(fread(&e,recsize,1,fptr1)==1)  /// read the file and fetch the record one record per fetch
                            {
                                // Actual Data of emplpoyee
                                gotoxy(1,i);
                                printf("%s",e.id);
                                gotoxy(10,i);
                                printf("%s",e.name);
                                gotoxy(24,i);
                                printf("%s",e.d_o_j);
                                gotoxy(45,i);
                                printf("%s",e.nationality);
                                gotoxy(65,i);
                                printf("%s",e.email);
                                gotoxy(100,i);
                                printf("%s",e.gender);
                                gotoxy(110,i);
                                printf("%s",e.department);
                                gotoxy(130,i);
                                printf("%s",e.working_hours);
                                gotoxy(155,i);
                                printf("%f",e.bs);


                                i++; // to increase coloumn number


                            }

                            getch(); // Press any key to return
                            break;

                        // Edit Existing record
                        case '3':
                            system("cls"); // clear the console window

                            another = 'y';
                            while(another == 'y') // Edit another employee
                            {
                                gotoxy(30,4);
                                printf("------------------------------------");
                                gotoxy(30, 5);
                                printf("| Enter id of employee you want to modify");
                                gotoxy(65,5);
                                printf("|");
                                gotoxy(30,6);
                                printf("------------------------------------");
                                gotoxy(30,7);
                                printf(">>>");
                                gets(id);

                                rewind(fptr1); // move cursor in file to Start of file

                                recsize = sizeof(e); // for fwrite

                                while(fread(&e,recsize,1,fptr1)==1)  /// fetch all record from file
                                {
                                    if(strcmp(e.id,id) == 0)  ///if entered name matches with that in file
                                    {
                                        gotoxy(30,10);
                                        printf("Enter Id: "); // Adding Id
                                        gets(e.id);
                                        gotoxy(30,12);
                                        printf("Enter Name: "); // Adding Nmae
                                        gets(e.name);
                                        gotoxy(30,14);
                                        printf("Enter Date of joining: "); // Adding Date of joining
                                        gets(e.d_o_j);
                                        gotoxy(30,16);
                                        printf("Enter Nationality: "); // Adding Nationality
                                        gets(e.nationality);
                                        gotoxy(30,18);
                                        printf("Enter email: "); // Adding Email Address
                                        gets(e.email);
                                        gotoxy(30,20);
                                        printf("Enter Gender: "); // Adding Gender
                                        gets(e.gender);
                                        gotoxy(30,22);
                                        printf("Enter department: "); // Adding Department of Employee
                                        gets(e.department);
                                        gotoxy(30,24);
                                        printf("Enter working hours per week of employee: "); // Adding Working hours per week
                                        gets(e.working_hours);
                                        gotoxy(30,26);
                                        printf("Enter basic salary: "); // Adding Basic salary of employee
                                        scanf("%f",&e.bs);


                                        fseek(fptr1,-recsize,SEEK_CUR); /// move the cursor 1 step back from current position
                                        fwrite(&e,recsize,1,fptr1); /// override the record
                                        break;
                                    }
                                }
                                gotoxy(30,28);
                                printf("------------------------------------");
                                gotoxy(30, 29);
                                printf("| Modify another record(y/n)");
                                gotoxy(65,29);
                                printf("|");
                                gotoxy(30,30);
                                printf("------------------------------------");
                                gotoxy(30,31);
                                printf(">>>");


                                fflush(stdin); // flush the input buffer
                                another = getche(); // Input from keyboard
                            }
                            break;
                        
                        // Delete Record of a Specific employee
                        case '4':
                            system("cls"); // clear the console window


                            another = 'y'; // Delete another record
                            while(another == 'y')
                            {
                                gotoxy(30,10);
                                printf("Enter ID of employee to delete: ");
                                gets(id);

                                fptr2 = fopen("Temp.dat","wb");  // create a intermediate file for temporary storage
                                rewind(fptr1); // move record to starting of file

                                recsize = sizeof(e); // for fread

                                while(fread(&e,recsize,1,fptr1) == 1)  // read all records from file
                                {
                                    if(strcmp(e.id,id) != 0)  // if the entered record match
                                    {
                                        fwrite(&e,recsize,1,fptr2); // move all records except the one that is to be deleted to temp file
                                    }
                                }
                                fclose(fptr1); // closing the employee file
                                fclose(fptr2); // closing the temporary file
                                remove("Employee.DAT"); // remove the orginal file
                                rename("Temp.dat","Employee.DAT"); // rename the temp file to original file name

                                fptr1 = fopen("Employee.DAT", "rb+"); // reopening file

                                gotoxy(30,12);
                                printf("------------------------------------");
                                gotoxy(30, 13);
                                printf("| Delete another record(y/n)");
                                gotoxy(65,13);
                                printf("|");
                                gotoxy(30,14);
                                printf("------------------------------------");
                                gotoxy(30,16);
                                printf(">>>");

                                fflush(stdin); // flush the input buffer
                                another = getche(); // input from keyboard
                            }
                            break;
                        
                        // Assign task to employee
                        case '5':
                            // opening task file
                            fptr3 = fopen("kamkr.DAT","rb+");
                            if(fptr3 == NULL)
                            {
                                fptr3 = fopen("kamkr.DAT","wb+"); // Create file if does not exist
                                if(fptr3 == NULL)
                                {
                                    printf("Connot open file");
                                    exit(1);
                                }
                            }

                            fseek(fptr3,0,SEEK_END); // seting cursor posituon to end of file
                            
                            another1 ='y'; 
                            while (another1 == 'y') // Assign another task
                            {
                                system("cls"); // clear the console window
                                gotoxy(30,10);
                                printf("Enter Id and name of person you want to assign task"); 
                                gotoxy(30,12);
                                printf("-->Id:");
                                gets(t.id);
                                gotoxy(30,14);
                                printf("-->Name:");
                                gets(t.name);
                                gotoxy(30,16);
                                printf("Enter task.");
                                gotoxy(30,18);
                                printf(">>>");
                                gets(t.task);

                                recsize = sizeof(t); // for fwrite 

                                fwrite(&t,recsize,1,fptr3); // Entering the task data to file

                                gotoxy(30,20);
                                printf("------------------------------------"); 
                                gotoxy(30, 21);
                                printf("| Add another task(y/n)");
                                gotoxy(65,21);
                                printf("|");
                                gotoxy(30,22);
                                printf("------------------------------------");
                                gotoxy(30,24);
                                printf(">>>");

                                fflush(stdin); // flush the input buffer
                                another1 = getche(); // input from keyboard
                            }

                            fclose(fptr3); // closing task file
                            break;
                        
                        // Complain box by employee
                        case '6':
                            system("cls");

                            fptr4 = fopen("Complain.DAT","rb+");
                            if (fptr4 == NULL)
                            {
                                gotoxy(10,4);
                                printf("Currently no queries.....");
                                exit(1);
                            }
                            rewind(fptr4);

                            recsize = sizeof(c);// for fwrite

                            gotoxy(1,1);
                            printf("Id");
                            gotoxy(10,1);
                            printf("Name");
                            gotoxy(24,1);
                            printf("Complain or Queires");

                            while(fread(&c,recsize,1,fptr4)==1)  /// read the file and fetch the record one record per fetch
                            {
                                gotoxy(1,j);
                                printf("%s",c.id);
                                gotoxy(10,j);
                                printf("%s",c.name);
                                gotoxy(24,j);
                                printf("%s",c.complain);
                                j++;
                            }
                            fclose(fptr4);

                            getche();
                            break;
                        
                        //Change the pin
                        case '7':
                            system("cls"); // clear the console window

                            printf("You have to do registration again......");
                            printf("To change the password");
                            printf("This return to login screen again");
                            printf("Press any key to continue.......");
                            getche(); // input from keyboard
                            registration();

                            //goto label;
                            break;

                        // returning to interface
                        case '8':
                            goto label;
                            break;
                        
                        
                        // Exiting the program
                        case '9':
                            fclose(fptr1);  // close the file
                            exit(0); // exit from the program
                        }
                    }
                break;
            case '3':
                fclose(fptr1);  // close the file
                exit(0); // exit from the program
                }
            }
        }
}

// functions

// function that set pointer to desire position on screen
void gotoxy(int x, int y){
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

char registration()
{
    char name[40];
    FILE *log;
    log=fopen("login.DAT","wb+");

    system("cls");

    gotoxy(30,4);
    printf("Registration forum......");
    gotoxy(30,6);
    printf("Enter Name:");
    gotoxy(30,8);
    printf(">>>");
    gets(l.name);

    gotoxy(30,10);
    printf("Thank you.");
    gotoxy(30,12);
    printf("Now please choose a username and password as credentials for system login.");


    gotoxy(30,14);
    printf("Enter Username:");
    gotoxy(30,16);
    printf(">>>");
    gets(l.username);
    gotoxy(30,18);
    printf("Enter Password:");
    gotoxy(30,20);
    printf(">>>");
    gets(l.password);


    strcpy(name, l.name);


    fwrite(&l,sizeof(l),1,log);
    fclose(log);

    gotoxy(30,22);
    printf("Confirming details...");
    gotoxy(30,24);
    printf("....");
    gotoxy(30,26);
    printf("Welcome, %s",name);
    gotoxy(30,28);
    printf("Registration Successful!");
    gotoxy(30,30);
    printf("Press any key to continue...");
    getchar();
    system("CLS");
    login();
    return '0';
}

char login()
{
    char username[40],password[20];
    FILE *log;
    log=fopen("login.DAT","rb+");
    struct login l;
    rewind(log);

    system("cls");

    gotoxy(30,10);
    printf("Please Enter your login credentials below");
    gotoxy(30,12);
    printf("Username:  ");
    gotoxy(30,14);
    printf(">>>");
    gets(username);
    gotoxy(30,16);
    printf("Password: ");
    gotoxy(30,18);
    printf(">>>");
    gets(password);

    while(fread(&l,sizeof(l),1,log))
        {
        while(((strcmp(username,l.username)!=0) || (strcmp(password,l.password)!=0)))

            {   
                system("cls");

                gotoxy(30,8);
                printf("Wrong credentials.....");
                gotoxy(30,10);
                printf("Please! Try again");
                gotoxy(30,12);
                printf("Username:  ");
                gotoxy(30,14);
                printf(">>>");
                gets(username);
                gotoxy(30,16);
                printf("Password: ");
                gotoxy(30,18);
                printf(">>>");
                gets(password);

            }
        }

fclose(log);

return '0';

}