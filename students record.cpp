#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
  
// Variable to keep track of number of students
int i = 0;
  
// Structure to store the student
struct sinfo {
    char fname[50];
    char lname[50];
    int roll;
    float cgpa;
    int cid[10];
    char name[50];
	long long adno[10];
	int grade;
	char ftname[50];
	char mtname[50];
	long long phno[10];
	char address[100];
}stu[100],t;
void  dis_info()
{
	int n,i=0,j=0,a;
	long long duefees,totfees,paidfees;
	int  tests;
	int l1,l2,l3,m,sc,so;//marks in subject wise -language1,language2,language3,maths,science,social;	
	FILE *fp;
	FILE *DUE;
	FILE *marksheet;
	fp=fopen("project.txt","a+");
	if(fp!=NULL)
	{
		printf("File opened successfully\n");
	}
	printf("DETAILS OF THE SCHOOL STUDENTS\nTotal number of students studying in school : ");
	scanf("%d",&n);
	scanf("%d %d %d %d %d %d %d",&a,l1,l2,l3,m,sc,so);
    
		for(i=0;i<n;i++)
		{
			printf("\n%d.Name of the student : ",i+1);
			scanf("%s",stu[i].name);
			printf("\n  Admission number of the student : ");
			scanf("%lld",&stu[i].adno);
			printf("\n  Class studying : ");
			scanf("%d",&stu[i].grade);
			printf("\n  Father name : ");
			scanf("%s",stu[i].ftname);
			printf("\n  Mother name : ");
			scanf("%s",stu[i].mtname);
			printf("\n  Mobile number : ");
			scanf("%lld",&stu[i].phno);
			printf("\n  Address of the student : ");
			scanf("%s",stu[i].address);
		
		  if(stu[i].grade==1)
		  {
		  	totfees=20000;
		  	printf("\n  Fees paid by the student : ");
		  	scanf("%lld",&paidfees);
		  	duefees=totfees-paidfees;
		  	printf("\n  due amount to be paid : %lld",duefees);
		  }
		  else if(stu[i].grade==2)
		  {
		  	totfees==22000;
		  	printf("\n  Fees paid by the student : ");
		  	scanf("%lld",&paidfees);
		  	duefees=totfees-paidfees;
		  	printf("\n  due amount to be paid : %lld",duefees);
		  }
		  else if(stu[i].grade==3)
		  {
		  	totfees=24000;
		  	printf("\n  Fees paid by the student : ");
		  	scanf("%lld",&paidfees);
		  	duefees=totfees-paidfees;
		  	printf("\n  due amount to be paid : %lld",duefees);
		  }
		  else if(stu[i].grade==4)
		  {
		  	totfees=26000;
		  		printf("\n  Fees paid by the student : ");
		  	scanf("%lld",&paidfees);
		  	duefees=totfees-paidfees;
		  	printf("\n  due amount to be paid : %lld",duefees);
		  }
		  else if(stu[i].grade==5)
		  {
		  	totfees=28000;
		  		printf("\n  Fees paid by the student : ");
		  	scanf("%lld",&paidfees);
		  	duefees=totfees-paidfees;
		  	printf("\n  due amount to be paid : %lld",duefees);
		  }
		  else if(stu[i].grade==6)
		  {
		  	totfees=30000;
		  		printf("\n  Fees paid by the student : ");
		  	scanf("%lld",&paidfees);
		  	duefees=totfees-paidfees;
		  	printf("\n  due amount to be paid : %lld",duefees);
		  }
		  else if(stu[i].grade==7)
		  {
		  	totfees=32000;
		  		printf("\n  Fees paid by the student : ");
		  	scanf("%lld",&paidfees);
		  	duefees=totfees-paidfees;
		  	printf("\n  due amount to be paid : %lld",duefees);
		  }
		  else if(stu[i].grade==8)
		  {
		  	totfees=34000;
		  		printf("\n  Fees paid by the student : ");
		  	scanf("%lld",&paidfees);
		  	duefees=totfees-paidfees;
		  	printf("\n  due amount to be paid : %lld",duefees);
		  }
		  else if(stu[i].grade==9)
		  {
		  	totfees=36000;
		  		printf("\n  Fees paid by the student : ");
		  	scanf("%lld",&paidfees);
		  	duefees=totfees-paidfees;
		  	printf("\n  due amount to be paid : %lld",duefees);
		  }
		  else
		  {
		  	totfees=38000;
		  		printf("\n  Fees paid by the student : ");
		  	scanf("%lld",&paidfees);
		  	duefees=totfees-paidfees;
		  	printf("\n  due amount to be paid : %lld",duefees);
		  }
		  printf("\n  No of tests given by student : ");
		  scanf("%d",&tests);
		  switch(tests)
		  {
		  	case 1: printf("\n  No of tests taken = %d  (only quaterfinal examations completed by him)",tests);
		  	break;
		  	case 2: printf("\n  No of tests taken = %d  (quaterfinal and semifinal examinations completed)",tests);
		  	break;
		  	case 3: printf("\n  No of tests taken = %d  (quaterfinal and semifinak and final exams completed)",tests);
		  	break;
		  	deafault : printf("\n  No tests taken or error");
		  }
		  }
		for(i=0;i<n;i++)
	    {
	    	for(j=0;j<n;j++);
	    	{
	    		if(strcmp(stu[i].name,stu[j].name)>0){
	    		t=stu[i];
	    		stu[i]=stu[j];
	    		stu[j]=t;}
			}
		fprintf(fp,"%d.%s %lld %d %s %s %lld %s\n",i+1,stu[i].name,stu[i].adno,stu[i].grade,stu[i].ftname,stu[i].mtname,stu[i].phno,stu[i].address);
	    }
    fclose(fp);
    DUE=fopen("fees.txt","a+");
    if(DUE!=NULL){
    	printf("\nDuefees file created successfully\n");
	}
    printf("\nFEES DETAILS OF THE STUDENTS ");
   	printf("\n   S.NO      NAME          FEES-DUE  \n");
	for(i=0;i<n;i++)
	{	
		if( paidfees!=totfees)
		{
			printf("    %d      %s               %lld\n",i+1,stu[j].name,duefees);
		}
		else
		{
			printf("    %d      %s               No due raised\n",i+1,stu[j].name);
		}
	}
     fclose(DUE);
     marksheet=fopen("marksheet.txt","a+");
     if(marksheet!=NULL)
     {
     	printf("Marksheet file created successfully\n");
	 }
	 while(tests>0)
	 {   printf("\nSUBJECT WISE MARKS LIST ");
	     for(i=0;i<n;i++)
	     {
	 	   if(tests==1)
		   {
		   printf("\nQuarter final exam results \nMark sheet by student [%d] : %s",i+1,stu[j].name);
		   printf("\n   SUBJECT        MARKS");
		   printf("\n   Language1     %d\n   Language2     %d\n   Language3     %d\n   Maths     %d\n   Science     %d\n   social     %d",l1,l2,l3,m,sc,so);
		   }
		   else if(tests==2)
		   {
		   	printf("\nQuarter final exam results \nMark sheet by student [%d] : %s",i+1,stu[j].name);
		   printf("\n   SUBJECT        MARKS");
		   printf("\n   Language1     %d\n   Language2     %d\n   Language3     %d\n   Maths     %d\n   Science     %d\n   social     %d",l1,l2,l3,m,sc,so);
		   printf("\nsemi final exam results \nMark sheet by student [%d] : %s",i+1,stu[j].name);
		   printf("\n   SUBJECT        MARKS");
		   printf("\n   Language1     %d\n   Language2     %d\n   Language3     %d\n   Maths     %d\n   Science     %d\n   social     %d",l1,l2,l3,m,sc,so);
		   }
		   else 
		   {
		   	printf("\nQuarter final exam results \nMark sheet by student [%d] : %s",i+1,stu[j].name);
		   printf("\n   SUBJECT        MARKS");
		   printf("\n   Language1     %d\n   Language2     %d\n   Language3     %d\n   Maths     %d\n   Science     %d\n   social     %d",l1,l2,l3,m,sc,so);
		   printf("\nSemi final exam results \nMark sheet by student [%d] : %s",i+1,stu[j].name);
		   printf("\n   SUBJECT        MARKS");
		   printf("\n   Language1     %d\n   Language2     %d\n   Language3     %d\n   Maths     %d\n   Science     %d\n   social     %d",l1,l2,l3,m,sc,so);
		   printf("\nFinal exam results \nMark sheet by student [%d] : %s",i+1,stu[j].name);
		   printf("\n   SUBJECT        MARKS");
		   printf("\n   Language1     %d\n   Language2     %d\n   Language3     %d\n   Maths     %d\n   Science     %d\n   social     %d",l1,l2,l3,m,sc,so);
		   }
	    }
     } 
	 fclose(marksheet);
}

  
// Function to add the student
void add_student()
{
  
    printf("Add the Students Details\n");
    printf("-------------------------\n");
    printf("Enter the first name of student\n");
    scanf("%s", stu[i].fname);
    printf("Enter the last name of student\n");
    scanf("%s", stu[i].lname);
    printf("Enter the Roll Number\n");
    scanf("%d", &stu[i].roll);
    printf("Enter the CGPA you obtained\n");
    scanf("%f", &stu[i].cgpa);
    printf("Enter the course ID of each course\n");
    for (int j = 0; j < 5; j++) {
        scanf("%d", &stu[i].cid[j]);
    }
    i = i + 1;
}
  
// Function to find the student by the roll number
void find_rl()
{
    int x;
    printf("Enter the Roll Number of the student\n");
    scanf("%d", &x);
    for (int j = 1; j <= i; j++) {
        if (x == stu[i].roll) {
            printf("The Students Details are\n");
            printf("The First name is %s\n",stu[i].fname);
            printf("The Last name is %s\n",stu[i].lname);
            printf("The CGPA is %f\n",stu[i].cgpa);
            printf("Enter the course ID of each course\n");
        }
        for (int j = 0; j < 5; j++) {
            printf(
                "The course ID are %d\n",
                stu[i].cid[j]);
        }
        break;
    }
}
  
// Function to find the studentby the first name
void find_fn()
{
    char a[50];
    printf("Enter the First Name of the student\n");
    scanf("%s", a);
    int c = 0;
  
    for (int j = 1; j <= i; j++) {
        if (!strcmp(stu[j].fname, a)) {
  
            printf("The Students Details are\n");
            printf("The First name is %s\n",stu[i].fname);
            printf("The Last name is %s\n",stu[i].lname);
            printf("The Roll Number is %d\n ",stu[i].roll);
            printf("The CGPA is %f\n",stu[i].cgpa);
            printf("Enter the course ID of each course\n");
  
            for (int j = 0; j < 5; j++) {
                printf("The course ID are %d\n",stu[i].cid[j]);
            }
            c = 1;
        }
        else
            printf(
                "The First Name not Found\n");
    }
}
  
// Function to find the students enrolled in a particular course
void find_c()
{
    int id;
    printf("Enter the course ID \n");
    scanf("%d", &id);
    int c = 0;
  
    for (int j = 1; j <= i; j++) {
        for (int d = 0; d < 5; d++) {
            if (id == stu[j].cid[d]) {
  
                printf("The Students Details are\n");
                printf("The First name is %s\n",stu[i].fname);
                printf("The Last name is %s\n",stu[i].lname);
                printf("The Roll Number is %d\n ",stu[i].roll);
                printf("The CGPA is %f\n",stu[i].cgpa);
  
                c = 1;
  
                break;
            }
            else
                printf(
                    "The First Name not Found\n");
        }
    }
}
  
// Function to print the total number of students
void tot_s()
{
    printf("The total number of Student is %d\n",i);
    printf("\n you can have a max of 50 students\n");
    printf("you can have %d more students\n",50 - i);
}
  
// Function to delete a student by the roll number
void del_s()
{
    int a;
    printf("Enter the Roll Number"
           " which you want "
           "to delete\n");
    scanf("%d", &a);
    for (int j = 1; j <= i; j++) {
        if (a == stu[j].roll) {
            for (int k = j; k < 49; k++)
                stu[k] = stu[k + 1];
            i--;
        }
    }
    printf("The Roll Number is removed Successfully\n");
}
  
// Function to update a students data
void up_s()
{
  
    printf("Enter the roll number"
           " to update the entry : ");
    long int x;
    scanf("%ld", &x);
    for (int j = 0; j < i; j++) {
        if (stu[j].roll == x) {
            printf("1. first name\n"
                   "2. last name\n"
                   "3. roll no.\n"
                   "4. CGPA\n"
                   "5. courses\n");
            int z;
            scanf("%d", &z);
            switch (z) {
            case 1:
                printf("Enter the new "
                       "first name : \n");
                scanf("%s", stu[j].fname);
                break;
            case 2:
                printf("Enter the new "
                       "last name : \n");
                scanf("%s", stu[j].lname);
                break;
            case 3:
                printf("Enter the new "
                       "roll numnber : \n");
                scanf("%d", &stu[j].roll);
                break;
            case 4:
                printf("Enter the new CGPA : \n");
                scanf("%f", &stu[j].cgpa);
                break;
            case 5:
                printf("Enter the new courses \n");
                scanf("%d%d%d%d%d", &stu[j].cid[0],&stu[j].cid[1], &stu[j].cid[2], &stu[j].cid[3], &stu[j].cid[4]);
                break;
            }
            printf("UPDATED SUCCESSFULLY.\n");
        }
    }
}
  
// Driver code
int main( )
  
{
    int choice, count;
    while (i = 1) {
        printf("The Task that you want to perform\n");
        printf("1. Add the Student Details\n");
        printf("2. Find the Student Details by Roll Number\n");
        printf("3. Find the Student Details by First Name\n");
        printf("4. Find the Student Details by Course Id\n");
        printf("5. Find the Total number of Students\n");
        printf("6. Delete the Students Details by Roll Number\n");
        printf("7. Update the Students Details by Roll Number\n");
        printf("8.displaying and entering the student details\n");
        printf("9. To Exit\n");
        printf("Enter your choice to find the task\n");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            add_student();
            break;
        case 2:
            find_rl();
            break;
        case 3:
            find_fn();
            break;
        case 4:
            find_c();
            break;
        case 5:
            tot_s();
            break;
        case 6:
            del_s();
            break;
        case 7:
            up_s();
            break;
        case 8:
        	 dis_info();
        	 break;
        case 9:
            exit(0);
            break;
        }
    }return 0;
}
