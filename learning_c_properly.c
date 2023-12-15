// #include<stdio.h>

// int main(){
//     printf("hello world !!");
//     return 0;

// }




// #include<stdio.h>

// int main(){

//     int len;
//     int height;
//     int area;

//     printf("enter the length of the square : ");
//     scanf("%d",&len);
//     printf("enter the height of the square : ");
//     scanf("%d",&height);

//     area = len * height;
//     printf("the area of the rectangle is : %d ",area);

//     return 0;
// }




// #include<stdio.h>

// int main(){

//     float rad; 
//     float area;

//     printf("enter the radius of the circle : ");
//     scanf("%f",&rad);

//     area = 3.14 * rad * rad ;

//     printf("the area of the circle is : %f",area);
//     return 0;

// }





// #include<stdio.h>

// int main(){

//     int num;

//     printf("enter a number : ");
//     scanf("%d",&num);
    
//     if (num % 2 == 0)
//     {
//         printf("the number you written is divisible by 2 .");
//     }
//     else if (num % 2 != 0)
//     {
//         printf("tthe number you written is not divisible by 2 .");
//     }
//     else
//     {
//         printf("invalid input !!");
//     }
    
//     return 0;

// }




// #include<stdio.h>

// int main(){
    
//     float num_1;
//     float num_2;
//     float num_3;
//     float avg;

//     printf("enter the 1st number : ");
//     scanf("%f",&num_1);
//     printf("enter the 2nd number : ");
//     scanf("%f",&num_2);
//     printf("enter the 3rd number : ");
//     scanf("%f",&num_3);

//     avg = (num_1 + num_2 + num_3)/3;

//     printf("the average of the 3 numbers you have written are : %.2f",avg);
//     return 0;

// }




// #include<stdio.h>

// int main(){

//     char character;

//     printf("enter a character : ");
//     scanf("%c",&character);

//     if (character >= 'a' && character <= 'z')
//     {
//         printf("the input is a character .");
//     }
//     else if (character >= 'A' && character <= 'Z')
//     {
//         printf("the input is a character .");
//     }
//     else if (character >= '1' && character <= '9')
//     {
//         printf("the input is a number .");
//     }
//     else
//     {
//         printf("the input is a special character .");
//     }
    
//     return 0;

// }




// #include<stdio.h>

// int main(){
    
//     float num_1;
//     float num_2;

//     printf("enter the 1st number : ");
//     scanf("%f",&num_1);
//     printf("enter the 2nd number : ");
//     scanf("%f",&num_2);

//     if(num_1 < num_2)
//     {
//         printf("the 1st number is smaller. ");
//     }
//     else
//     {
//         printf("the 2dd number is smaller. ");
//     }

//     return 0;
// }





// #include<stdio.h>

// int main(){
    
//     float num_1;
//     float num_2;
//     float num_3;

//     printf("enter the 1st number : ");
//     scanf("%f",&num_1);
//     printf("enter the 2nd number : ");
//     scanf("%f",&num_2);
//     printf("enter the 3rd number : ");
//     scanf("%f",&num_3);
    

//     if(num_1 < num_2 && num_1 < num_3)
//     {
//         printf("the 1st number is smaller. ");
//     }
//     else if(num_2 < num_1 && num_2 < num_3)
//     {
//         printf("the 2nd number is smaller. ");
//     }
//     else if(num_3 < num_2 && num_3 < num_1) 
//     {
//         printf("the 3rd number is smaller. ");
//     }
//     else
//     {
//         printf("Invalid Input !! ");
//     }

//     return 0;
// }




// #include<stdio.h>

// int main(){

//     int quantity; 
//     float price;
//     int discount;
//     float total;

//     printf("enter the price of each item : ");
//     scanf("%f",&price);
//     printf("enter the ammount of units you are going to buy : ");
//     scanf("%d",&quantity);

//     if (quantity > 1000)
//     {
//         discount = 10;
//     }
//     else
//     {
//         discount = 0;
//     }

//     total = (price * quantity) - ((quantity * price * discount)/100);
//     printf("the ammount of epences you are going to have is : %f",total);

//     return 0;
    
// }





// #include<stdio.h>

// int main(){
    
//     float base_salary;
//     float HRA;
//     float DA;
//     float gross_salary;

//     printf("enter the base salary of the man : ");
//     scanf("%f",&base_salary);

//     if (base_salary < 1500)
//     {
//         HRA = (base_salary * 10)/100;
//         DA = (base_salary *90)/100;
//     }
//     else
//     {
//         HRA = 500;
//         DA = (base_salary * 98)/100;
//     }

//     gross_salary = base_salary + HRA + DA ;

//     printf("the HRA of that man is : %f\n",HRA);
//     printf("the DA of that man is : %f\n",DA);
//     printf("the gross salary of that man is : %f\n",gross_salary);
//     return 0;
    
// }




// #include<stdio.h>

// int main(){

//     int n_products;
//     float cost_prize;
//     float selling_prize;
//     float total_cost;
//     float total_income;
//     float profit;
//     float loss;
    
//     printf("enter the number of products the company have bought : ");
//     scanf("%d",&n_products);
//     printf("enter the cost of each item : ");
//     scanf("%f",&cost_prize);
//     printf("enter the selling prize of each item : ");
//     scanf("%f",&selling_prize);

//     total_cost = n_products * cost_prize;
//     total_income = n_products * selling_prize;

//     if(total_cost > total_income)
//     {
//         loss = total_cost - total_income;
//         printf("the ammount of money the company has lost is : %f",loss);
//     }
//     else
//     {
//         profit = total_income - total_cost;
//         printf("the ammount of money the company has made is : %f",profit);
//     }

//     return 0;
// }





// #include<stdio.h>

// int main(){

//     int year;

//     printf("enter the year you want to check : ");
//     scanf("%d",&year);

//     if (year % 400 == 0)
//     {
//         printf("the year you entered is a leap year.");
//     }
//     else if (year % 100 == 0)
//     {
//         printf("the year you entered is a leap year.");
//     }
//     else if (year % 4 == 0)
//     {
//         printf("the you entered is a leap year .");
//     }
//     else 
//     {
//         printf("the year you entered is not a leap year .");
//     }
//     return 0;
    
// }




// #include<stdio.h>

// int main(){

//     int num;

//     printf("enter a number : ");
//     scanf("%d",&num);

//     if (num % 2 == 0)
//     {
//         printf("the number you entered is a even number .");
//     }
//     else 
//     {
//         printf("the number you entered is a odd number .");
//     }
//     return 0;
// }





// #include<stdio.h>

// int main(){

//     int d_1;
//     int d_2;
//     int d_3;
//     int d_4;
//     int d_5;

//     printf("enter the 1st dighit of the number : ");
//     scanf("%d",&d_1);
//     printf("enter the 1st dighit of the number : ");
//     scanf("%d",&d_2);
//     printf("enter the 1st dighit of the number : ");
//     scanf("%d",&d_3);
//     printf("enter the 1st dighit of the number : ");
//     scanf("%d",&d_4);
//     printf("enter the 1st dighit of the number : ");
//     scanf("%d",&d_5);

//     if ( d_1 == d_5 && d_2 == d_4)
//     {
//         printf("the original number is qual to the number when it is revised.");
//     }
//     else 
//     {
//         printf("nopee madafaka fumk off !!");
//     }

//     return 0;
// }





// #include<stdio.h>

// int main(){
    
//     float angle_1;
//     float angle_2;
//     float angle_3;
    

//     printf("enter the 1st angle of the triangle : ");
//     scanf("%f",&angle_1);
//     printf("enter the 2nd angle of the triangle : ");
//     scanf("%f",&angle_2);
//     printf("enter the 3rd angle of the triangle : ");
//     scanf("%f",&angle_3);

//     if ((angle_1 + angle_2 + angle_3) == 180)
//     {
//         printf("the triangle you have entered is valid .");
//     }
//     else
//     {
//         printf("the triangle you have entered is not valid .");
//     }
//     return 0;
    
// }





// #include<stdio.h>

// int main(){
    
//     float number;
    
//     printf("enter a number : ");
//     scanf("%f",&number);

//     if (number < 0) {
//         number = number * (-1);
//         printf("the absolute value of the number is : %f",number);
//     }
//     else
//     {
//         printf("the absolute value of the number is : %f",number);
//     }
    
//     return 0 ;
// }






// #include<stdio.h>
// int main(){

//     float length, width, peremeter, area;
//     printf("enter the length of the rectangle : ");
//     scanf("%f",&length);
//     printf("enter the width of the rectangle : ");
//     scanf("%f",width);

//     peremeter = 2*(length + width);
//     area = length * width;

//     if (peremeter < area)
//     {
//         printf("the peremeter of the given example is smaller than the area. ");
//     }
//     else if (peremeter = area)
//     {
//         printf("the peremeter of the given example id equal to the area. ");
//     }
//     else
//     {
//         printf("the area of the given example is smaller that the peremeter.");
//     }
    
//     return 0;
        
// }






// #include<stdio.h>
// int main(){

//     float x1,x2,x3,y1,y2,y3;
//     float slope_1,slope_2;

//     printf("enter the coordinate of the 1st point: ");
//     scanf("%f%f",&x1,&y1);
//     printf("enter the coordinate of the 2nd point: ");
//     scanf("%f%f",&x2,&y2);
//     printf("enter the coordinate of the 3rd point: ");
//     scanf("%f%f",&x3,&y3);

//     slope_1 = (y2 - x2)/(y1 - x1);
//     slope_2 = (y3 - x3)/(y2 - x2);

//     if (slope_1 = slope_2)
//     {
//         printf("the points are in a straight line. ");
//     }
//     else
//     {
//         printf("the points are nit in a straight line. ");
//     }
    
//     return 0;

// }







// #include<stdio.h>
// int main(){

//     int x,y;

//     printf("enter the coordinate : ");
//     scanf("%d%d",&x,&y);

//     if (x == 0)
//     {
//         printf("the coordinate you written lies in the y axis ");
//     }
//     else if (y == 0)
//     {
//         printf("the coordinate you written lies on the x axis ");
//     }
//     else if (x == 0 && y == 0)
//     {
//         printf("the coordinate you entered is the prime median. ");
//     }
//     else
//     {
//         print("the coordinated you entered is not on the axies. ");
//     }
    
//     return 0;
    
// }






// #include<stdio.h>
// int main(){

//     int character;

//     printf("enter a character in the keyboard : ");
//     scanf("%c",&character);

//     if (character > 'a' && character < 'z')
//     {
//         printf("the character yopu entered is a small letter alphabet. ");
//     }
//     else if (character > 'A' && character < 'Z')
//     {
//         printf("the character you entered is a capital letter alphabet. ");
//     }
//     else if (character > '0' && character < '9')
//     {
//         printf("the character you entered is a number. ");
//     }
//     else
//     {
//         printf("the character you enterd is a special character. ");
//     }
    
//     return 0;
    
// }






