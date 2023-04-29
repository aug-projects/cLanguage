#include<stdio.h>

#include<conio.h>

#include<stdlib.h>

#include<string.h>

/*========================================*/
void text_welcome();
void main_interface();
void login();
void menu();
void footer_menu();
void add_patients_record();
void list_patients_record();
void search_patients_record();
void edit_patients_record();
void remove_patients_record();
int choice;
int size = 0;
/*========================================*/
struct hospital {
  char fname[30],
    lname[30],
    gr[30],
    age[30],
    ad[30],
    ph[30],
    prob[30],
    mail[30],
    dr[30];
}
hop[100];

/*=========================================
User interface ---> login ---> menu--->
1--> add
2--> list view
3--> search
4--> edit
5--> remove
6--> close

Username : h
password : h
===========================================*/

/*=========================================
0 = Black   8 = Gray
1 = Blue    9 = Light Blue
2 = Green   A = Light Green
3 = Aqua    B = Light Aqua
4 = Red     C = Light Red
5 = Purple  D = Light Purple
6 = Yellow  E = Light Yellow
7 = White   F = Bright White 

===========================================*/

/*========================================*/
//	-->	Main function 
/*========================================*/
void main() {
  text_welcome();
  main_interface();
}

/*========================================*/
//	--> InterFace
/*========================================*/
void main_interface() {
  system("color D0");
  char key;
  printf("\n \t \t \t \t \t \t press any key to continue ");
  getch();
  system("cls");
  text_welcome();
  login();
}
/*========================================*/
//	-->	Login Form
/*========================================*/
void login() {
  char user[10], pas[10];
  int p;
  printf("\n \t \t \t \t \t \t Enter your username and password \n");
  sp();
  printf(" \t \t \t \t \t \t username:");
  scanf("%s", user);
  sp();
  printf(" \t \t \t \t \t \t password:");
  do {
    pas[p] = getch();
    if (pas[p] != '\r') {
      printf("*");
    }
    p++;
  } while (pas[p - 1] != '\r');
  pas[p - 1] = '\0';

  if (strcmp(user, "h") == 0 && strcmp(pas, "h") == 0)
    menu();
  else {
    system("color 40");
    printf("\n\n  \t \t \t \t \t \t ---[Error login try again]--- \n\a\a");
    sp();
    login();
  }
}
/*========================================*/
//	-->	Main Menu
/*========================================*/
void menu() {
  do {
    system("cls");
    system("color 30");
    text_welcome();
    printf("\n \t \t \t \t \t \t 1- Add Patients Record \n");
    printf("\n \t \t \t \t \t \t 2- List  Patients Record \n");
    printf("\n \t \t \t \t \t \t 3- Search  Patients Record \n");
    printf("\n \t \t \t \t \t \t 4- Edit Patients Record \n");
    printf("\n \t \t \t \t \t \t 5- delete Patients Record \n");
    printf("\n \t \t \t \t \t \t 6- Exit \n\n\n");
    printf("\n \t \t \t \t \t \t Choice from 1 - 6 \n");
    scanf("%d", & choice);
    switch (choice) {
    case 1:
      add_patients_record();
      break;
    case 2:
      list_patients_record();
      break;
    case 3:
      search_patients_record();
      break;
    case 4:
      edit_patients_record();
      break;
    case 5:
      remove_patients_record();
      break;
    case 6:
      close_pg();
      break;
    default:
      close_pg();
    }
  } while (1);
}
/*========================================*/
//	-->	Add
/*========================================*/
void add_patients_record() {
  char yrn;
  int at = 0;
  do {
    system("cls");
    text_welcome();
    printf("\n \t \t \t \t \t \t----( Add Patients )--- \n ");
    sp();
    fflush(stdin);
    do {
      printf("\n \t \t \t \t \t \t first name :");
      scanf("%s", & hop[size].fname);
      if (strlen(hop[size].fname) > 2 && strlen(hop[size].fname) < 15) at = 1;
      if (at == 1) break;
      else printf("\n \t \t \t \t \t \t Error entry the max value 2-15");
    } while (1);

    do {
      printf("\n \t \t \t \t \t \t lest name :");
      scanf("%s", & hop[size].lname);
      if (strlen(hop[size].lname) > 2 && strlen(hop[size].lname) < 15) at = 2;
      if (at == 2) break;
      else printf("\n \t \t \t \t \t \t Error entry the max value 3-15");
    } while (1);

    do {
      printf("\n \t \t \t \t \t \t Gander :");
      scanf("%s", & hop[size].gr);
      if (strcmp(hop[size].gr, "m") == 0 || strcmp(hop[size].gr, "M") == 0 || strcmp(hop[size].gr, "f") == 0 || strcmp(hop[size].gr, "F") == 0) {
        at = 3;
      }
      if (at == 3) break;
      else printf("\n \t \t \t \t \t \t Error entry the  value M or F");
    } while (1);

    printf("\n \t \t \t \t \t \t Age :");
    scanf("%s", & hop[size].age);

    do {
      printf("\n \t \t \t \t \t \t address :");
      scanf("%s", & hop[size].ad);
      if (strlen(hop[size].ad) >= 4 && strlen(hop[size].ad) < 15) at = 5;
      if (at == 5) break;
      else printf("\n \t \t \t \t \t \t Error entry the max value 5-15");
    } while (1);

    do {
      printf("\n \t \t \t \t \t \t phone :");
      scanf("%s", & hop[size].ph);
      if (strlen(hop[size].ph) == 10) at = 6;
      if (at == 6) break;
      else printf("\n \t \t \t \t \t \t Error entry the max value 10");
    } while (1);

    printf("\n \t \t \t \t \t \t problem :");
    scanf("%s", & hop[size].prob);

    do {
      printf("\n \t \t \t \t \t \t E-mail :");
      scanf("%s", & hop[size].mail);
      if (strlen(hop[size].mail) >= 10) at = 7;
      if (at == 7) break;
      else printf("\n \t \t \t \t \t \t Error entry write nmae@domin.com ");
    } while (1);

    printf("\n \t \t \t \t \t \t Doctor :");
    scanf("%s", & hop[size].dr);
    ++size;
    fflush(stdin);
    printf("\n \t \t \t \t \t \t Do you went to  add new student [y/n]: ");
    scanf("\n \t \t \t \t \t \t%c", & yrn);

  } while (yrn == 'y' || yrn == 'Y');
  if (yrn != 'y' || yrn != 'Y') menu();
  getch();
}
/*========================================*/
//	-->	List
/*========================================*/
void list_patients_record() {
  int i;
  system("cls");
  text_welcome();
  printf("\n \t \t \t \t \t \t----( List Patients )--- \n ");
  sp();
  printf(" Full Name");
  printf("\t| Gander");
  printf("\t| Age");
  printf("\t| Address");
  printf("  | Phone ");
  printf("\t| Email");
  printf("\t\t     | Problem");
  printf("  |Doctor Name");
  sp();
  border_1();
  for (i = 0; i < size; ++i) {
    printf(" %s %s ", hop[i].fname, hop[i].lname);
    printf("  | %s", hop[i].gr);
    printf("\t\t| %s", hop[i].age);
    printf("\t| %s", hop[i].ad);
    printf("  | %s", hop[i].ph);
    printf("\t| %s", hop[i].mail);
    printf(" | %s", hop[i].prob);
    printf("\t| %s\n", hop[i].dr);
  }
  sp();
  sp();
  footer_menu();
  getch();
}
/*========================================*/
//	-->	Search
/*========================================*/
void search_patients_record() {
  char sh[100];
  int i, at;
  system("cls");
  text_welcome();
  printf("\n \t \t \t \t \t \t----( Search Patients )--- \n ");
  sp();
  printf("\n \t \t \t \t \t \t Enter the first name to search it : ");
  scanf("\n%s", sh);
  for (i = 0; i < size; ++i)
    if (strcmp(hop[i].fname, sh) == 0) {
      at = 1;
      break;
    }
  if (at == 1) {
    printf("\n \t \t \t \t \t \t full name: %s %s\n", hop[i].fname, hop[i].lname);
    printf("\n \t \t \t \t \t \t gander : %s\n", hop[i].gr);
    printf("\n \t \t \t \t \t \t Age : %s\n", hop[i].age);
    printf("\n \t \t \t \t \t \t Address : %s\n", hop[i].ad);
    printf("\n \t \t \t \t \t \t phone : %s\n", hop[i].ph);
    printf("\n \t \t \t \t \t \t problem: %s\n", hop[i].mail);
    printf("\n \t \t \t \t \t \t full name: %s\n", hop[i].prob);
    printf("\n \t \t \t \t \t \t Doctor name: %s\n", hop[i].dr);
  } else printf("\n \t \t \t \t \t \t this { %s } User Not found try again......", sh);
  sp();
  sp();
  footer_menu();
  getch();
}

/*========================================*/
//	-->	Edit
/*========================================*/
void edit_patients_record() {
  system("cls");
  sp_text();
  text_welcome();
  printf("\n \t \t \t \t \t \t----( Edit Patients )--- \n ");
  sp();
  char ed[100];
  int i, at;
  printf("\n \t \t \t \t \t \t Enter your first name: ");
  scanf("\n%s", & ed);
  for (i = 0; i < size; ++i)
    if (strcmp(hop[i].fname, ed) == 0) {
      at = 1;
      break;
    }
  if (at == 1) {
    printf("\n \t \t \t \t \t \t first name :");
    scanf("%s", & hop[i].fname);
    printf("\n \t \t \t \t \t \t lest name :");
    scanf("%s", & hop[i].lname);
    printf("\n \t \t \t \t \t \t Gender :");
    scanf("%s", & hop[i].gr);
    printf("\n \t \t \t \t \t \t Address:");
    scanf("%s", & hop[i].ad);
    printf("\n \t \t \t \t \t \t Phone :");
    scanf("%s", & hop[i].ph);
    printf("\n \t \t \t \t \t \t Email :");
    scanf("%s", & hop[i].mail);
    printf("\n \t \t \t \t \t \t Problem :");
    scanf("%s", & hop[i].prob);
    printf("\n \t \t \t \t \t \t Doctor :");
    scanf("%s", & hop[i].dr);
    printf("\n \t \t \t \t \t \t  Press U you to save your editing U ");
    fflush(stdin);
    char u_edit;
    scanf("%c", & u_edit);

    if (u_edit == 'u' || u_edit == 'U') {
      printf("\n \t \t \t \t \t \t  Updated is successfully ");
      footer_menu();
    } else {
      printf("\n \t \t \t \t \t \t Updated is filed ");
    }
  } else {
    sp();
    sp();
    sp();
    sp();
    printf("\n \t \t \t \t \t this { %s } User Not found......", ed);
    sp();
    sp();
    sp();
    sp();
    footer_menu();
  }

}
/*========================================*/
//	-->	remove 
/*========================================*/

void remove_patients_record() {
  system("cls");
  sp_text();
  text_welcome();
  printf("\n \t \t \t \t \t \t----( remove Patients )--- \n ");
  sp();
  char dl[100], null[100];
  int i, at;
  printf("\n \t \t \t \t \t \t Enter your frist name: ");
  scanf("\n%s", & dl);
  for (i = 0; i < size; ++i)
    if (strcmp(hop[i].fname, dl) == 0) {
      at = 1;
      break;
    }
  if (at == 1) {
    strcpy(hop[i].fname, null);
    strcpy(hop[i].lname, null);
    strcpy(hop[i].age, null);
    strcpy(hop[i].ph, null);
    strcpy(hop[i].gr, null);
    strcpy(hop[i].mail, null);
    strcpy(hop[i].prob, null);
    strcpy(hop[i].dr, null);
    strcpy(hop[i].ad, null);
    --size;
    printf("\n \t \t \t \t \t \t Deleting is uccessfully........");
    sp();
    sp();
    footer_menu();
  } else {
    printf("\n \t \t \t \t \t \t this { %s } User Not found try again......", dl);
    sp();
    sp();
    footer_menu();
  }
  getch();

}

/*========================================*/
//	Helpers
/*========================================*/

void text_welcome() {
  system("cls");
  sp();
  border_2_50();
  printf(" \t \t \t \t \t \t  <--| Gaza Hospital |-->\n ");
  printf(" \t \t \t \t\t  <--| Developed by Haytham Akram Salama |-->\n ");
  border_2_50();

}
close_pg() {
  system("color E0");
  text_welcome();
  printf("\n \t \t \t \t \t \t\t *_*  THANK YOU  *_* \n\n ");
  border_2_50();
  sp();
  sp();
  sp();
  sp();
  exit(1);
}
sp() {
  printf("\n");
}
sp_text() {
  printf("\n \t\t ");
}
border() {
  printf("\n -------------------------------------------------------------------------------------------------------------------\n");
}
border_1() {
  printf("====================================================================================================================\n");
}
border_2() {
  printf("*********************************************************************************************************************\n");
}
border_2_50() {
  printf("\n\t\t\t\t  *********************************************************** \t \t \t \t \t \n");
}
void footer_menu() {
  border();
  printf("\t1- Home page ");
  printf("     2- Add ");
  printf("     3- list ");
  printf("     4- Search");
  printf("     5- Edit");
  printf("     6- delete");
  printf("     7- Exit ");
  printf("     <---- Choice  ");
  border();
  scanf("%d", & choice);
  switch (choice) {
  case 1:
    menu();
    break;
  case 2:
    add_patients_record();
    break;
  case 3:
    list_patients_record();
    break;
  case 4:
    search_patients_record();
    break;
  case 5:
    edit_patients_record();
    break;
  case 6:
    remove_patients_record();
    break;
  case 7:
    close_pg();
    break;
  default:
    close_pg();
  }
}