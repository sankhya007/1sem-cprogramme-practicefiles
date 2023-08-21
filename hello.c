#include<stdio.h>
int main()
{
    int number;
    printf("enter a number: ");
    scanf("%d",&number);

    if (number > 0)
    {
        printf("the number you entered is %d\n.", number);
    }
    printf("the number is an integer.");
    return 0;
}

#include<stdio.h>
int main()
{
    int number;
    printf("enter a number: ");
    scanf("%d", &number);

    if (number > 0)
    {
        printf("the number you entered is posative.");
    }
    else
    {
        printf("the number you entered is negative.");
    }

    return 0;
}

#include<stdio.h>
int main()
{
    int number;
    printf("enter a number: ");
    scanf("%d", &number);

    if (number > 0)
    {
        printf("the number you entered is posative.");
    }
    else if (number == 0)
    {
        printf("the number you entered is zero.");
    }
    else
    {
        printf("the number you entered is negative.");
    }

    return 0;
}

#include<stdio.h>
int main()
{
    int number;
    printf("enter a number: ");
    scanf("%d",&number);

    if (number >= 0)
    {
        if (number > 0)
        {
            printf("the number is greater than zero.");
        }
        else
        {
            printf("the number is zero.");
        }
    }
    else
    {
        printf("the number is lesser than zero.");
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int i;
    
    for ( i = 1; i < 10; i++)
    {
        printf("%d\n",i);
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int number, count,sum = 0;
    printf("enter a number: ");
    scanf("%d",&number);

    for ( count = 1; count < number; count++)
    {
        sum += count;
    }
    printf("the sum of the numbers is: %d", sum);
    
    return 0;
}

#include<stdio.h>
int main()
{
    int i=1;

    while ( i <= 10)
    {
        printf("%d\n",i);
        i++;
    }
    return 0;
}

#include<stdio.h>
int main()
{
    double number,sum = 0;

    do
    {
        printf("enter a number: ");
        scanf("%lf",&number);
        sum += number;
    } 
    while (number != 0.0);

    printf("the sum of the numbers is: %.2lf",sum);
    return 0;
}

#include<stdio.h>
int main()
{
    int i;
    double number,sum = 0.0;

    for ( i = 1; i <= 10; i++)
    {
        printf("enter the number %d: ",i);
        scanf("%lf",&number);
        
    if (number < 0.0)
    {
        break;
    }
    sum += number; //sum = sum + number;
    }
    printf("sum : %lf",sum);
    return 0;
}

#include<stdio.h>
int main()
{
    int i;
    double number, sum=0.0;

    for ( i = 1; i <= 10; i++)
    {
        printf("enter the number %d: ",i);
        scanf("%lf",&number);

        if (number < 0.0)
        {
            continue;
        }
        sum += number; //sum = sum + number;
    }
    printf("sum : %.2lf",sum);
    return 0;
}

#include<stdio.h>
int main()
{
    char operation;
    double num1,num2;

    printf("enter the operation you want to do(+,-,*,/): ");
    scanf("%c",&operation);
    printf("enter the 1st number: ");
    scanf("%lf",&num1);
    printf("enter the 2st number: ");
    scanf("%lf",&num2);

    switch (operation)
    {
    case '+':
        printf("%.2lf + %.2lf = %.2lf",num1,num2,num1+num2);
        break;

    case '-':
        printf("%.2lf + %.2lf = %.2lf",num1,num2,num1-num2);
        break;

    case '*':
        printf("%.2lf + %.2lf = %.2lf",num1,num2,num1*num2);
        break;

    case '/':
        printf("%.2lf + %.2lf = %.2lf",num1,num2,num1/num2);
        break;            
    
    default:
        printf("you entered a invalid shit!! ");
        break;
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int operation;
    double num1,num2;
    printf("\n1)addition\n2)substraction\n3)multiplication\n4)division\n\nenter the operation you want to do: ");
    scanf("%d",&operation);
    printf("enter the 1st number: ");
    scanf("%lf",&num1);
    printf("enter the 2st number: ");
    scanf("%lf",&num2);

    switch (operation)
    {
    case 1:
        printf("%.2lf + %.2lf = %.2lf",num1,num2,num1+num2);
        break;

    case 2:
        printf("%.2lf - %.2lf = %.2lf",num1,num2,num1-num2);
        break;

    case 3:
        printf("%.2lf * %.2lf = %.2lf",num1,num2,num1*num2);
        break;

    case 4:
        printf("%.2lf / %.2lf = %.2lf",num1,num2,num1/num2);
        break;            
    
    default:
        printf("you entered a invalid shit!! ");
        break;
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int n,i;
    float num,sum=0,avg;

    printf("enter the ammount of number you want to calculate the sum: ");
    scanf("%d",&n);

    for ( i = 1; i <= n; i++)
    {
        printf("%d. enter the number: ",i);
        scanf("%f",&num);
        sum += num;
    }
    avg = sum / n;

    printf("the sum of the numbers is: %f\n",sum);
    printf("the average of the entered numbers are: %f",avg);

    return 0;    
}

#include<stdio.h>
int main()
{
    int number;
    printf("enter a number: ");
    scanf("%d",&number);

    if (number % 2 == 0)
    {
        printf("the number is even.");
    }
    else
    {
        printf("the number is odd.");
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int x,uppercase_alphabet,lowercase_alphabet;
    printf("enter an alphabet: ");
    scanf("%c",&x);

    lowercase_alphabet = (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u');
    uppercase_alphabet = (x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U');

    if ( lowercase_alphabet || uppercase_alphabet )
    {
        printf("the entered character is a vowel.");
    }
    else
    {
        printf("the entered character is a constant");
    }
    return 0;
}

#include<stdio.h>
int main()
{
    float num1,num2,num3;
    
    printf("enter the 1st number: ");
    scanf("%f",&num1);
    printf("enter the 2nd number: ");
    scanf("%f",&num2);
    printf("enter the 3rd number: ");
    scanf("%f",&num3);

    if (num1 > num2 && num1 > num3)
    {
        printf("the %.2f is the largest number amongst all.",num1);
    }
    else if (num2 > num1 && num2 > num3)
    {
        printf("the %.2f is the largest number amongst all.",num2);
    }
    else if (num3 > num1 && num3 > num2)
    {
        printf("the %.2f is the largest number amongst all.",num3);
    }
    
    return 0;
}

#include <math.h>
#include <stdio.h>
int main() {
    double a, b, c, discriminant, root1, root2, realPart, imagPart;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    // condition for real and different roots
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
    }

    // condition for real and equal roots
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %.2lf;", root1);
    }

    // if roots are not real
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
    }

    return 0;
}

#include<stdio.h>
int main()
{
    int year;
    printf("enter the year: ");
    scanf("%d",&year);

    if (year % 400 == 0)
    {
        printf("the year you entered is a leap year.");
    }
    else if (year % 100 == 0)
    {
        printf("the year you entered is a leap year.");
    }
    else if (year % 4 == 0)
    {
        printf("the year you entered is a leap year.");
    }
    else
    {
        printf("the year you entered is not a leap year.");
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int number;
    printf("enter a number: ");
    scanf("%d",&number);

    if (number <= 0)
    {
        if (number < 0)
        {
            printf("the number you entered is negative.");
        }
        else
        {
            printf("the number you enter is equal to zero.");
        }
    }
    else
    {
        printf("the number you entered is posative.");
    }
    return 0;
}

#include<stdio.h>
int main()
{
    char c;
    printf("enter a character: ");
    scanf("%c",&c);

    if ((c >= 'a' && c <= 'z')||(c >= 'A' && c <= 'Z'))
    {
        printf("the character you entered is an alphabet.");
    }
    else if (c >= '0' && c <= '9')
    {
        printf("the character you entered is a number.");
    }
    else
    {
        printf("the character you entered is a special character.");
    }
    return 0;
}

#include<stdio.h>
int main()
{
    double number,count,sum=0;
    printf("enter how many numbers you want to calculate the sum of: ");
    scanf("%lf",&number);

    for (count = 1; count <= number; count++)
    {
        sum += count;
    }

    printf("the sum of the numbers you entered: %lf ",sum);
    return 0;
}

#include<stdio.h>
int main()
{
    double number,count;
    unsigned long long factorial=1;
    printf("enter the number: ");
    scanf("%lf",&number);

    for (count = 1; count <= number; count++) //works but srtill don't take this seriousluy
    {
        factorial *= count;
    }
    printf("the factorial of the number you entered: %llu",factorial);
    return 0;
}

#include<stdio.h>
int main()
{
    double number,count;
    unsigned long long factorial=1;
    printf("enter the number: ");
    scanf("%lf",&number);

    if (number < 0)
    {
        printf("calculating the factorial of the number you entered is invalid !!");
    }
    else
    {
        for (count = 1; count < number; count++)
        {
            factorial *= count;
        }
        printf("the factorial of the number you entered is: %llu",factorial);
        return 0;
    }
    
}

#include<stdio.h>
int main()
{
    int number,count;
    printf("enter the number you want to see the multiplication table of: ");
    scanf("%d",&number);

    for (count = 1; count <= 10; count++)
    {
        printf("%.2d * %.2d = %.2d\n",number,count,number*count);
    }
    return 0;
}


#include <stdio.h>

int main() {
    FILE *file;
    char name[50];
    int age;

    file = fopen("information.txt", "w");
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    printf("Enter name: ");
    scanf("%s", name);
    printf("Enter age: ");
    scanf("%d", &age);

    fprintf(file, "Name: %s\n", name);
    fprintf(file, "Age: %d\n", age);

    fclose(file);
    printf("Information stored in file successfully.\n");

    return 0;
}


#include <stdio.h>

int main() {
    FILE *file;
    char line[100];

    file = fopen("information.txt", "r");
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    fclose(file);
    return 0;
}


#include <stdio.h>

int main() {
    FILE *file;
    char line[100];

    file = fopen("multiple_lines.txt", "w");
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    printf("Enter lines (press Ctrl+Z or Ctrl+D to stop):\n");

    while (fgets(line, sizeof(line), stdin) != NULL) {
        fputs(line, file);
    }

    fclose(file);
    printf("Lines written to file successfully.\n");

    return 0;
}



#include <stdio.h>

int main() {
    FILE *file;
    char line[100];
    int lineCount = 0;

    file = fopen("multiple_lines.txt", "r");
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    while (fgets(line, sizeof(line), file) != NULL) {
        lineCount++;
    }

    fclose(file);

    printf("Number of lines in the file: %d\n", lineCount);

    return 0;
}





#include <stdio.h>

int main() {
    FILE *file, *tempFile;
    char line[100];
    int lineNumber = 1, deleteLine;

    file = fopen("multiple_lines.txt", "r");
    if (file == NULL) {
    printf("Error opening the file.\n");
    return 1;
    }
tempFile = fopen("temp.txt", "w");
if (tempFile == NULL) {
    printf("Error creating temporary file.\n");
    return 1;
}

printf("Enter the line number to delete: ");
scanf("%d", &deleteLine);

while (fgets(line, sizeof(line), file) != NULL) {
    if (lineNumber != deleteLine) {
        fputs(line, tempFile);
    }
    lineNumber++;
}

fclose(file);
fclose(tempFile);

remove("multiple_lines.txt");
rename("temp.txt", "multiple_lines.txt");

printf("Line %d deleted successfully.\n", deleteLine);

return 0;
}



#include <stdio.h>

int main() {
    FILE *file;
    char line[100];

    file = fopen("multiple_lines.txt", "a");
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    printf("Enter lines to append (press Ctrl+Z or Ctrl+D to stop):\n");

    while (fgets(line, sizeof(line), stdin) != NULL) {
        fputs(line, file);
    }

    fclose(file);
    printf("Lines appended to file successfully.\n");

    return 0;
}



#include <stdio.h>

int main() {
    FILE *sourceFile, *destinationFile;
    char line[100];

    sourceFile = fopen("source.txt", "r");
    if (sourceFile == NULL) {
        printf("Error opening the source file.\n");
        return 1;
    }

    destinationFile = fopen("destination.txt", "w");
    if (destinationFile == NULL) {
        printf("Error creating the destination file.\n");
        return 1;
    }

    while (fgets(line, sizeof(line), sourceFile) != NULL) {
        fputs(line, destinationFile);
    }

    fclose(sourceFile);
    fclose(destinationFile);

    printf("File copied successfully.\n");

    return 0;
}




#include <stdio.h>

int main() {
    FILE *file1, *file2, *mergedFile;
    char line[100];

    file1 = fopen("file1.txt", "r");
    if (file1 == NULL) {
        printf("Error opening the first file.\n");
        return 1;
    }

    file2 = fopen("file2.txt", "r");
    if (file2 == NULL) {
        printf("Error opening the second file.\n");
        return 1;
    }

    mergedFile = fopen("merged_file.txt", "w");
    if (mergedFile == NULL) {
        printf("Error creating the merged file.\n");
        return 1;
    }

    while (fgets(line, sizeof(line), file1) != NULL) {
        fputs(line, mergedFile);
    }

    while (fgets(line, sizeof(line), file2) != NULL) {
        fputs(line, mergedFile);
    }

    fclose(file1);
    fclose(file2);
    fclose(mergedFile);

    printf("Files merged successfully.\n");

    return 0;
}

#include<stdio.h>
int main()
{
    int num1,num2,x;
    printf("enter the 1st number: ");
    scanf("%d",&num1);
    printf("enter the 2nd number: ");
    scanf("%d",&num2);
    printf("1)addition\n2)substraction\n3)multiplication\n4)divition\n\npick of the given options to apply on: ");
    scanf("%d",&x);

    switch(x)
    {
    case '1':
        printf("%d + %d = %d",num1,num2,num1+num2);
        break;
    
    case '2':
        printf("%d - %d = %d",num1,num2,num1-num2);
        break;

    case '3':
        printf("%d * %d = %d",num1,num2,num1*num2);
        break;

    case '4':
        printf("%d / %d = %d",num1,num2,num1/num2);
        break;

    default:
    printf("the variable you wrote is a invalid of the operation is not possible.");
        break;
    }

    return 0;
}

#include<stdio.h>

void printhello();
void printgoodbye();

int main()
{
    printhello();
    printgoodbye();
    printhello();
    printgoodbye();
    return 0;
}

void printhello(){
    printf("hello\n");
}
void printgoodbye(){
    printf("goodbye\n");
}

#include<stdio.h>

void indianuser();
void frenchuser();

int main(){
    int number;
    printf("if the user is indian type '1' and if french thenn type '2' : ");
    scanf("%d",&number);
    if (number == 1)
    {
        indianuser();
    }
    else if (number == 2)
    {
        frenchuser();
    }   
    return 0;
}

void indianuser(){
    printf("hello user !!");
}
void frenchuser(){
    printf("bonjor user !!");
}


#include<stdio.h>

int sum(int a,int b);
void printTable(int a);

int main()
{
    int a;
    printf("enter the number: ");
    scanf("%d",&a);
    
    printTable(a);
    
    return 0;
}

int sum(int a,int b){
    return a+b;
}
void printTable(int a){
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n",i*a);
    }
}

#include<stdio.h>

int sum(int a,int b);
void printTable(int n);

int main()
{
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    
    printTable(n);
    
    return 0;
}

int sum(int a,int b){
    return(a+b);
}

void printTable(int n){
    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n",n,i,i*n);
    }
    
}


#include<stdio.h>

void calculatePrize(float value);

int main()
{
    float value;
    printf("enter the value you want to calculate: ");
    scanf("%f",&value);
    calculatePrize(value);
    printf("the value is : %.2f",value);
    return 0;
}

void calculatePrize(float value){
    value = value + (value * 0.18);
    printf("final value: %.2f\n",value);
}


#include<stdio.h>
#include<math.h>
int main()
{
    printf("%.2f",pow(4,2));
    return 0;
}


#include<stdio.h>
#include<math.h>

float squareArea(float side);
float circleArea(float rad);
float rectangleArea(float a,float b);

int main()
{
    float side = 10;
    //float rad = 10;
    //float a = 10;
    //float b = 14;
    printf ("%.2f",squareArea(side));
    //printf ("%.2f",circleArea(rad));
    //printf ("%.2f",rectangleArea(a,b));
    return 0;
}

float squareArea(float side){
    return side * side;
}
float circleArea(float rad){
    return 3.14 * rad * rad;
}
float rectangleArea(float a,float b){
    return a * b;
}


#include<stdio.h>
int main()
{
    float price[3];
    printf("enter the three prizes: ");
    scanf("%f",&price[1]);
    scanf("%f",&price[2]);
    scanf("%f",&price[3]);
    printf("the final first prize is: %.2f\n",price[1]+(0.18*price[1]));
    printf("the final seciond prize is: %.2f\n",price[2]+(0.18*price[2]));
    printf("the final third prize is: %.2f\n",price[3]+(0.18*price[3]));
    return 0;
}


#include <stdio.h>

int main() {
    char input;
    int choice;

    printf("Menu:\n");
    printf("1. Check if input is an alphabet\n");
    printf("2. Check if input is a special character\n");
    printf("3. Check if input is a number\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    printf("Enter a character: ");
    scanf(" %c", &input);  

    switch (choice) {
        case 1:
            if ((input >= 'a' && input <= 'z') || (input >= 'A' && input <= 'Z'))
                printf("The input is an alphabet.\n");
            else
                printf("The input is not an alphabet.\n");
            break;
        case 2:
            if ((input >= '!' && input <= '/') || (input >= ':' && input <= '@') || (input >= '[' && input <= '`') || (input >= '{' && input <= '~'))
                printf("The input is a special character.\n");
            else
                printf("The input is not a special character.\n");
            break;
        case 3:
            if (input >= '0' && input <= '9')
                printf("The input is a number.\n");
            else
                printf("The input is not a number.\n");
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
