

/*Write a program that first asks the user for an integer and after that, a floating-point number. Finally, the program prints both numbers on the screen. The floating-point number shall be printed with two decimal places of precision.
                                                                                                              
                                                                                                              
Example output:                                                                                               
Enter an integer: 14                                                                                          
Enter a decimal number:3.123                                                                                  
                                                                                                              
You entered the integer: 14                                                                                   
You entered the decimal number, rounded to two decimal places: 3.12                                           
The verification of program output does not account for whitespace characters like "\n", "\t" and "           
*/                                                                                                            
                                                                                                              
#include <stdio.h>                                                                                            
                                                                                                              
int main (){                                                                                                  
                                                                                                              
int num;                                                                                                      
float fnum;                                                                                                   
printf("Enter an integer: ");                                                                                 
scanf("%d", &num);                                                                                           
printf("Enter a decimal number: ");                                                                           
scanf("%f", &fnum);                                                                                          
                                                                                                              
printf("You entered the integer: %d\n You entered the decimal number, rounded to two decimal places: %.2f",num, fnum);
                                                                                                              
return 0;                                                                                                     
}       

/*Write a program that prompts the user for an amount in Finnish markka and converts it to euro. 
Finally, the program prints the amount on the screen in euro with two decimal places of precision. The euro conversion factor is 5.94573.
*/
 #include <stdio.h>

int main (){
float FMI;

	
	printf("Enter an amount in FIM:");
	scanf("%f", &FMI);
	float e = 1.0f * FMI /5.94573 ;
	printf("FIM converted to euro: %.2f", e);
	
	



return 0                                                                                                          


/*Write a program that prompts the user for two integers and prints the sum
, difference and product of the numbers on the screen.*/

#include <stdio.h>

int main (){
	int num_one;
	int num_two;
	
	
printf("Enter the first number: ");
	scanf("%d", &num_one);
printf("Enter the second number: ");
	scanf("%d", &num_two);
	
int sum = num_one + num_two;
int dif = num_one - num_two;	
int prod = num_one * num_two;
printf("%d+%d = %d\n",num_one, num_two, sum );
printf("%d-%d = %d\n",num_one, num_two, dif );	
printf("%d*%d = %d\n",num_one, num_two, prod );	
return 0;
}

/*Write a program that prompts the user for an integer and checks whether it is even or odd. 
If the number is even, print the value 0, and if it is odd, print the value 1.*/

#include <stdio.h>

int main (){
	int num;
printf("Enter an integer: ");
	scanf("%d", &num);
if (num % 2 == 0){
printf("The number is 0");
	
}else {
printf("The number is 1");
}	

return 0;
}

/*Write a program that prompts the user for an integer and checks whether it is even or odd. 
If the number is even, print "Number 2 is even.", if it is odd, print "Number 1 is odd.".*/

#include <stdio.h>

int main (){
	int num;
printf("Enter an integer: ");
	scanf("%d", &num);
if (num % 2 == 0){
printf("Number %d is even.", num);
	
}else if( num % 2 == 1) {
printf("Number %d is odd.", num);
}else{
printf("Error");
}	

return 0;
}
/*
Write a program that first asks the user whether they drink coffee or tea and then how many cups a day. 
Finally, the program prints a statement in accordance with the following instructions: 
Coffee 0 to 2 cups: "You don't drink a lot of coffee, do you?", coffee 3-20 cups: 
"You drink a lot of coffee!", Tea 0-2 cups: "You do not drink a lot of tea.", 
tea 3-20 cups: "You drink a lot of tea!", Otherwise "An error occurred in the program!" 
The number of cups shall be processed as an integer variable and the drink as a character variable (c/t). 
You do not need to account for upper case letters.
*/
#include <stdio.h>

int main (){
char choice;
int cups;	
printf("Do you drink coffee or tea (c/t)?");
	scanf("%c", &choice);
printf("How many cups do you drink daily:");	
	scanf("%d", &cups);
if (choice == 'c' && cups <= 2)
	printf("You don't drink a lot of coffee, do you?");
	else if(choice == 'c' && cups >= 3 && cups <= 20)
		printf("You drink a lot of coffee!");
	
else if (choice == 't' && cups <= 2)
	printf("You do not drink a lot of tea.");
	else if(choice == 't' && cups >= 3 && cups <= 20)
		printf("You drink a lot of tea!");
	
else {
printf("An error occurred in the program!");
}

return 0;
}
/*Write a simple calculator program that calculates 
the difference, sum or product of two numbers. 
First, the program asks which calculation to perform. 
After this, the program prompts for the numbers,
 performs the calculation and prints the result. 
 The selection within the program has to be done using a switch() statement.
*/
#include <stdio.h>

int main(){
printf("1: subtraction\n");
printf("2: addition\n");
printf("3: multiplication\n");
int funct;
int fnum;
int snum;	
	printf("Select function:");
	scanf("%d", &funct);
	printf("Enter the first number:");
	scanf("%d", &fnum);
	printf("Enter the second number:");
	scanf("%d", &snum);	
int sum = fnum + snum;
int dif = fnum - snum;
int product =  fnum*snum;	
switch(funct){
	case 1:
		{printf("%d - %d=%d",fnum,snum,dif);
		break;
		}
	case 2:
		{printf("%d + %d=%d",fnum,snum,sum);
		break;
		}
	case 3:
		{printf("%d*%d=%d",fnum,snum,product);
		break;
		}
	default:
		{printf("Your input is outside the allowed range.");
		}
return 0;
}
}

/*Write a program that prompts the user for an integer n (n>0) and 
prints the numbers 1,2,3...n on the screen one below the other. 
Write the program using the FOR statement.*/

#include <stdio.h>

int main(){
int num;
int i;
printf("Enter an integer: ");
	scanf("%d", &num);
	for (i = 1; i <= num; i++)
	{
	printf("%d\n", i);
	}
return 0;
}

/*Write a program that prompts the user for an integer n (n>0) and prints the factorial 
of the number on the screen. For example, the factorial of n is designated n!, 
which means the number calculated as follows: 1*2*3...*n*/
#include <stdio.h>
int main() {
    int n, i;
    unsigned long fact = 1;
    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("The factorial of %d is %llu", n, fact);
    }

    return 0;
}
/*Write a program that asks for the students' exam scores 
(using integers 4 to 10) and calculates the average. 
The program must accept scores until entry is terminated by
a negative integer. 
Finally, the program prints out the number of
scores and the calculated average with two decimal places of precision.*/

#include <stdio.h>
int main() {
    int n;
	int s =0;
	int count = -1;
	do{
    printf("Enter score (4-10):");
    scanf("%d", &n);	
	count++;
	s+=n;	
	} 
	while (n>0);
	s-=n;
	
	printf("You entered %d scores.\n", count);
	float avr = 1.0*s/count;
	printf("Average score: %.2f", avr);

    return 0;
}



/*Write a calculator program that calculates the sum, difference or product of two integers.
 * The program asks for the type of calculation first (1 = sum, 2 = difference, 3 = product).
 * After calculation, the result is printed on the screen and the program returns to prompt for the next calculation.

You should write a function for each calculation, prompting for the numbers,
 performing the desired calculation and printing the answer on the screen.
 The program is terminated by entering a negative number just like in the previous exercise.*/

#include <stdio.h>

void sum (void);
void dif (void);
void prod (void);
int numOne;
int numTwo;
int main (){

int choice;


do{

printf ("1: sum of two numbers\n2: difference of two numbers\n3: product of two numbers\n<0: terminate the program\n");
printf("Select calculation:");
scanf("%d",&choice);
if(choice == 1){
sum();
}else if(choice == 2){
dif();
}else if(choice == 3){
prod();
}else{
    printf("You entered an invalid number.\n\n");
}
}while(choice>0);

return 0;
}
void sum(void){
    int summ = numOne + numTwo;
printf("Enter the first number:");
scanf("%d", &numOne);
printf("Enter the second number:");
scanf("%d", &numTwo);
printf("%d + %d = %d", numOne, numTwo, summ);
}
void dif(void){
    int diff = numOne - numTwo;
printf("Enter the first number:");
scanf("%d", &numOne);
printf("Enter the second number:");
scanf("%d", &numTwo);
printf("%d - %d = %d", numOne, numTwo, diff);
}
void sum(void){
    int prodd = numOne * numTwo
printf("Enter the first number:");
scanf("%d", &numOne);
printf("Enter the second number:");
scanf("%d", &numTwo);
printf("%d * %d = %d", numOne, numTwo, prodd);
}

/*Write a program that takes three integers as input and prints the smallest and largest of these numbers.
 * The main program must prompt for integers and read them. Write the functions largest() and smallest()
 * that receive the entered numbers as their parameters.
 * Correspondingly, the functions shall return values corresponding to their names.
*/

#include <stdio.h>
int largest(int num1,int num2,int num3);
int smallest(int num1,int num2, int num3);

int main(){
int num1;
int num2;
int num3;
printf("Enter the 1. number:");
scanf("%d", &num1);
printf("Enter the 2. number:");
scanf("%d", &num2);
printf("Enter the 3. number:");
scanf("%d", &num3);
int lar = largest(num1,num2,num3);
int sma = smallest(num1,num2,num3);
printf("Among the numbers you entered,\nthe largest was %d and the smallest was %d.", lar, sma);


return 0;
}
int largest(int num1, int num2,int num3){
	int lar;
if (num1>num2 && num1>num3){
		lar = num1;
	
}else if (num2>num1 && num2>num3){
	lar = num2;
}else if(num3>num1 && num3>num2){
	lar = num3;
}
return lar;
}


int smallest(int num1,int num2,int num3){
	int sma;
if (num1<num2 && num1<num3){
		sma = num1;
	
}else if (num2<num1 && num2<num3){
	sma = num2;
}else if(num3<num1 && num3<num2){
	sma = num3;
}
return sma;
}





/*Write a program that calculates the number of hours worked within
a specific period and prints the total number of hours, 
the average length of a day and an itemisation of the hours entered. 
First, the program must ask how many days of working hours shall be entered (max 30 days). 
After this, the program asks for the daily working hours. 
The program output shall have one decimal place of precision.*/


#include <stdio.h>
int main(){
	int days = 0;
	float total=0;
	int enter = 1;
	printf("The program calculates the total hours worked during\na specific period and the average length of a day.\n\n");
	printf("How many days:");
	scanf("%d", &days);
	float hours[days];
	for(int i = 0; i<days; i++){
		printf("Enter the working hours for day %d:", enter);
		scanf("%f", &hours[i]);
		total+= hours[i];
		enter++;
		
	}
	float avg = total/days;
	printf("\nTotal hours worked: %.1f\n", total);
	printf("Average length of day: %.1f\n", avg);
	printf("Hours entered:");
	for (int k = 0; k<days; k++){
		printf(" %.1f", hours[k]);
	}
	return 0;
}


/*The following is the initialisation of a 5 x 5 integer array:

int matrix[5][5] =
{
4, 6, 25, 88, 5,
34, 5, 300, 4, 65,
78, 43, 11, 90, 125,
98, 585, 12, 63, 21,
45, 35, 9, 5, 1
};

Copy the initialisation into a program that prints the array on 
the screen and calculates the sum of the elements. 
Each line shall be followed by a newline character.*/


#include <stdio.h>
int main (){
	int matrix[5][5] =
		{4, 6, 25, 88, 5, 
		34, 5, 300, 4, 65, 
		78, 43, 11, 90, 125, 
		98, 585, 12, 63, 21, 
		45, 35, 9, 5, 1};
	int x;
	int y;
	int sum=0;
	int i;
	printf("In the array:\n");
	for(y = 0; y<5;y++){
		for(x=0;x<5;x++)
		{
		sum = sum + matrix[y][x];
			if(x==4){
				printf("%d\n", matrix[y][x]);
				
			}else{
				printf("%d ", matrix[y][x]);
			}
		}
		
	}
	
	printf("\n\nthe sum of the elements is %d", sum);
return 0;
}


/*Write a program that prints the text "Hello world!" into
 the file "hello.usr". The file does not exist, 
 so it must be created. Finally, 
 the program must print a message on the screen 
 indicating that writing to the file was successful.*/


#include <stdio.h>

int main(){
	FILE*typer = fopen("hello.usr","w");
	fprintf(typer, "Hello world!\n");
	fclose(typer);
	printf("Writing to the file was successful.\nClosing the program.\n");
	return 0;
}

/*The file "numbers.s" contains 4 integers. 
The numbers are on the first line of the file, 
separated by spaces. Write a program that reads 
the integers from the file and calculates their sum.
Finally, the program prints the numbers and the sum 
 on the screen.*/

#include <stdio.h>

int main(){
	int num1, num2, num3, num4;
	FILE*numline = fopen("numbers.s", "r");
	fscanf(numline, "%d %d %d %d", &num1, &num2, &num3, &num4);
	fclose(numline);
	int sum = num1+num2+num3+num4;
	printf("Numbers found in the file numbers.s:\n");
	printf("%d, %d, %d and %d\n\n", num1, num2, num3, num4);
	printf("Sum of the numbers: %d\n", sum);
	return 0;
}
	
/*The files "mata.txt" and "matb.txt" contain integer 
matrices of size 10 x 10. Write a program that 
calculates the sum of the matrices in a new matrix. 
The resulting sum matrix shall be saved to the file 
"sum.usr". 
*/	

#include <stdio.h>

int main(){
		int y,x;
	int matrix1[10][10];
	int matrix2[10][10];
	FILE*mat1 = fopen("mata.txt","r");
	FILE*mat2 = fopen("matb.txt","r");
	for(y = 0; y<10; y++){
		for(x = 0; x<10; x++){
			if (x == 9){
			fscanf(mat1, "%d", &matrix1[y][x]);
			fscanf(mat2, "%d", &matrix2[y][x]);
			}else{
			fscanf(mat1, "%d ", &matrix1[y][x]);
			fscanf(mat2, "%d ", &matrix2[y][x]);
			}
		}
	}
	fclose(mat1);
	fclose(mat2);
	int summatr[10][10];
	for(y = 0; y<10; y++){
		for(x = 0; x<10; x++){
			 summatr[y][x]=matrix1[y][x]+matrix2[y][x];
		}
	}
	
	FILE*typer = fopen("sum.usr","w");
	for(y = 0; y<10; y++){
		for(x = 0; x<10; x++){
			if(x==9){
				fprintf(typer, "%d\n", summatr[y][x]);
			}else{
				fprintf(typer, "%d ", summatr[y][x]);
			}
		}
	}
	
	fclose(typer);
	printf("The sum of the matrices has been calculated into the file sum.usr.\n");
	return 0;
}

/*Write a program that asks for the user's first and 
last name and saves these into a file named by the user.

The program must start by asking for the first name. 
The last name is entered next, followed by the desired file name.
The first part of the file name may have a maximum of 8 characters 
and the second part may have 3 (for example: personal.usr). 
The file must reside in the same directory as the program.

The last name can have a maximum of 20 characters, the first name 15.*/

#include <stdio.h>
int main(){
	char fname[16], sname[21], filename[13];
	printf("The program saves your first and last name into a file.\n");
	printf("Enter your first name:");
	scanf("%s", &fname[0]);
	printf("Enter your last name:");
	scanf("%s", &sname[0]);
	printf("File where you want to save your name:");
	scanf("%s", filename);
	
	

	
	FILE*type= fopen(filename, "w");
	fprintf(type, "%s %s", fname, sname);
	fclose(type);
	
	printf("\n\nSuccessfully saved the data!");
	
	return 0;
}

/*Write a program that prompts the user for a word 
(max 15 lower-case letters) and calculates the number 
of vowels (a, e, i, o, u, y) in the word. Hint:
You have learned to compare the value of a character 
variable to 'a', for example. You can use an index to refer
to single characters in a string array. 
(char[] = "word"; word[1] == 'a';)

*/
#include <stdio.h>
int main()
{
  int c = 0, count = 0;
  char s[16];
  printf("The program calculates the number of vowels.\n");

  printf("Enter a word:");
  gets(s);

  while (s[c] != '\0') {
    if (s[c] == 'a' || s[c] == 'A' || s[c] == 'e' || s[c] == 'E' || s[c] == 'i' || s[c] == 'I' || s[c] =='o' || s[c]=='O' || s[c] == 'u' || s[c] == 'U')
      count++;
    c++;
  }

  printf("The word contains %d vowels.", count);

  return 0;
}


/*In this chapter, we create independent programs that are closely associated with each other. 
All the programs are components of a phone directory program. 
The intention is that you can continue your programming exercises by programming a phone directory. 
The exercises in this chapter can easily be converted into functions for a larger entity. 

The name and number data for the phone directory
 are contained in the file "phonedir.txt" which has the following format: 

4 
Firstname Lastname 050-3500980 
John Doe 041-3478924 
Brian Smith 040-3980982 
Brita Smith 05-4567393 

The first line of the file indicates the number of names added to the directory as an integer. 
The first name, last name and telephone number are processed in text format. 
The data items are separated by spaces in the file, and the length of an individual item (such as a first name) 
may be no more than 20 characters. Each line includes the information for one person only. The directory may contain 
a maximum of 50 people. Your first task is to write a program for adding a new telephone number to the directory. 
Upon execution, the program must first ask for a first name, after which it prompts for a last name and a telephone number.
When data is saved, the value on the first line of the file must increase by one. Note that in order to simplify the exercise,
 the data to be entered may not include a newline character, for example. 
 Each personal data item is stored on its own line. (Remember the newline character.)*/

#include <stdio.h>

int main(){
	int count;
	int i;
	struct phonebook{

		char firstname [20];
		char lastname [20];
		char phonenum [20];
	};
	struct phonebook person[50];
	FILE* phones = fopen("phonedir.txt","w");
	
	printf("Enter first name:");
	scanf("%s", &person[0].firstname[0]);
	printf("Enter last name:");
	scanf("%s", &person[0].lastname[0]);
	printf("Enter telephone number:");
	scanf("%s", &person[0].phonenum[0]);
	count++;
	fprintf(phones, "%d\n %s %s %s\n",count, person[0].firstname,person[0].lastname,person[0].phonenum);

	
	fclose(phones);
	printf("Successfully saved the data.\n");
	return 0;
}

/*Write a program that prints all the numbers in the phone 
directory to the screen. The file for reading the numbers 
is the same as in the previous exercise (phonedir.txt). 
Upon execution, the program opens the file, 
reads the data and prints it.*/
	

#include <stdio.h>

int main(){
	int i, k;

	struct phonebook{	
		char firstname [20];
		char lastname [20];
		char phonenum [20];
	};
	struct phonebook person[50];
FILE* phones = fopen("phonedir.txt","r");
	char buffer[100];
	fgets(buffer, 100,phones);
	
for(i=0;i< 20;i++){
fscanf(phones,"%s %s %s", &person[i].firstname, &person[i].lastname,&person[i].phonenum);
}	


for(k = 0; k<20;k++){
printf("%s %s %s\n", person[k].firstname, person[k].lastname,person[k].phonenum);	
}
	fclose(phones);
	return 0;
}


/*Write a program for removing a specific person's data 
from the directory. The program asks for a first name 
followed by a last name. The program checks if the person's 
data can be found. If the person is in the directory, 
the data is removed. Otherwise print an error message.
*/
#include <stdio.h>
#include <string.h>

int main(){
	
int ret, i;
	struct phonebook{	
		char firstname [20];
		char lastname [20];
		char phonenum [20];
	};
	struct phonebook person[50];
	struct phonebook check[1];
FILE* phones = fopen("phonedir.txt","r");
	char buffer[100];
	fgets(buffer, 100,phones);
	
for(i=0;i< 20;i++){
fscanf(phones,"%s %s %s", &person[i].firstname, &person[i].lastname,&person[i].phonenum);
}		

	printf("Enter first name:");
	scanf("%s", &check[0].firstname[0]);
	printf("Enter last name:");
	scanf("%s", &check[0].lastname[0]);	
ret = strcmp(check, person);
	if(ret < 0) {
      printf("Error");
   } else {
      printf("Data removed from the directory.\n");
   }
	
	

fclose(phones);	
	return 0;
}

