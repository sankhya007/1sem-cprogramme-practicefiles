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







// #include<stdio.h>
// int main(){

//     int side_1,side_2,side_3;
//     int long_side,sum_side;

//     printf("enter the length of the 1st side of the triangle : ");
//     scanf("%d",&side_1);
//     printf("enter the length of the 2nd side of the triangle : ");
//     scanf("%d",&side_2);
//     printf("enter the length of the 3rd side of the triangle : ");
//     scanf("%d",&side_3);

//     if (side_1 > side_2 && side_1 > side_3)
//     {
//         long_side = side_1;
//         sum_side = side_2 + side_3;
        
//         if (sum_side > long_side)
//         {
//             printf("the triangle side input is valid ");
//         }
//         else
//         {
//             printf("invalid input !!");
//         }
        
//     }

//     else if (side_2 > side_1 && side_2 > side_3)
//         {
//             long_side = side_2;
//             sum_side = side_1 + side_3;

//             if (sum_side > long_side)
//             {
//                 printf("the triangle side input is valid ");
//             }
//             else
//             {
//                 printf("invalid input !!");
//             }            
//         }
    
//     else if (side_3 > side_1 && side_3 > side_2)
//     {
//         long_side = side_3;
//         sum_side = side_1 + side_2;

//         if (sum_side > long_side)
//             {
//                 printf("the triangle side input is valid ");
//             }
//             else
//             {
//                 printf("invalid input !!");
//             }
//     }
//     else if (side_1 == side_2 && side_2 == side_3)
//     {
//         printf("the triangle input is valid");
//     }
//     else if (side_1 == side_2)
//     {
//         printf("the triangle side input is valid. ");
//     }
//     else if (side_1 == side_3)
//     {
//         printf("the triangle side input is valid. ");
//     }
//     else if (side_2 == side_3)
//     {
//         printf("the triangle side input is valid. ");
//     }
    
//     else
//     {
//         printf("the triangle side input is valid. ");
//     }
    
//     return 0;
    
// }







// #include <stdio.h>

// int main() {
//     float side_a, side_b, side_c;

//     printf("Enter the length of side a: ");
//     scanf("%f", &side_a);
//     printf("Enter the length of side b: ");
//     scanf("%f", &side_b);
//     printf("Enter the length of side c: ");
//     scanf("%f", &side_c);

//     if (side_a + side_b > side_c || side_a + side_c > side_b || side_b + side_c > side_a)    // checking if the triangle is valid or not. 
//     {
//         printf("thr triangle input you did is valid. ");

//         if (side_a == side_b && side_b == side_c)      //all the sides of the trianglke is equal
//         {
//             printf("the triangle you entered is a erquilatral triangle. ");
//         }
//         else if (side_a == side_b || side_b == side_c || side_c == side_a)      // two of the side of the triangle are aequal that means it could be a right angle one and also a isoscelies one.
//         {
//             if (pow(side_a, 2) + pow(side_b, 2) == pow(side_c , 2) ||
//                 pow(side_b, 2) + pow(side_c, 2) == pow(side_a , 2) ||
//                 pow(side_c, 2) + pow(side_a, 2) == pow(side_b , 2))
//             {
//                 printf("the triangle you entered is a right angle triangle. ");
//             }
//             else
//             {
//                 printf("the triangle you entered is a isosceles triangle. ");
//             }
//         }
//         else       //this is when none of the lengths are same in the ttriangle either they can be a right angle triangle like down below or....
//         {
//             if (pow(side_a, 2) + pow(side_b, 2) == pow(side_c , 2) ||
//                 pow(side_b, 2) + pow(side_c, 2) == pow(side_a , 2) ||
//                 pow(side_c, 2) + pow(side_a, 2) == pow(side_b , 2))
//             {
//                 printf("the triangle you entered is a right angle triangle.");
//             }
//             else       //or they can be a acalene trangle(the left overs of the right angle traiangle)
//             {
//                 printf("the triangle you entered is a scalene trangle. ");
//             }
//         }
//     }
//     else      // when the smaler ones dosent adds up more that the greather one amongst them all. 
//     {
//         printf("the data you entered is not a valid trangle");
//     }
    
//     return 0;

// }






// #include <stdio.h>

// int main() {

//     int red, green, blue;
//     float white, cyan, magenta, yellow, black;

//     printf("Enter the RGB value of the color you have: ");
//     scanf("%d%d%d", &red, &green, &blue);

//     // we hate to normalize the values 
//     float r = red / 255.0;
//     float g = green / 255.0;
//     float b = blue / 255.0;

// // we are going to use a nested fmax because the fmax function dosent work with 3 values 
//     white = fmax(r, fmax(g, b));
//     cyan = (white - r) / white;
//     magenta = (white - g) / white;
//     yellow = (white - b) / white;
//     black = 1 - white;

//     // Print the result in CMYK format
//     printf("After calculation, the (CMYK) format of the color you just entered is: %.2f, %.2f, %.2f, %.2f\n", cyan, magenta, yellow, black);

//     return 0;
// }





// #include<stdio.h>
// int main(){

//     float hardness;
//     float carbon_content;
//     float tenstile_strength;

//     float perfect1 = 50;  //greater than
//     float perfect2 = 0.7;   //lesser than
//     float perfect3 = 5600;    //gteater than

//     printf("enter the hardness of the steel : ");
//     scanf("%f",&hardness);
//     printf("enter the carbon_content of the steel : ");
//     scanf("%f",&carbon_content);
//     printf("enter the tenstile_strength of the steel : ");
//     scanf("%f",&tenstile_strength);

//     if (hardness > perfect1 && carbon_content < perfect2)
//     {
//         if (tenstile_strength > perfect3)
//         {
//             printf("this is a grade 10 steel. ");    //means all of em are right 
//         }
//         else
//         {
//             printf("this is a grade 9 steel. ");     //means only 1 and 2 are right 
//         }
//     }
//     else if (carbon_content < perfect2 && tenstile_strength > perfect3)
//     {
//         printf("this is a grade 8 steel. ");      //only 2 and 3 are right 
//     }
//     else if (carbon_content > perfect3 && hardness > perfect1)
//     {
//         printf("this is a grade 7 steel. ");        // only 1 and 3 are right 
//     }
//     else if (hardness > perfect1 ||
//              carbon_content < perfect2 ||
//              tenstile_strength > perfect3)
//     {
//         printf("this is a grade 6 steel. ");       // only one of the criterias can be right 
//     }
//     else if (hardness < perfect1 ||
//              carbon_content > perfect2 ||
//              tenstile_strength < perfect3)
//     {
//         printf("this is aa grade 5 steel. ");      //none of those criterias are right 
//     }
//     else
//     {
//         printf("invalid fucking input like the fuck are you doing nigga not a single one right likee jeezee bitch !! fuck off ");    //you are litrally a  dumb fuck like how !?
//     }
    
//     return 0;
    
// }







// //bmi calculaator
// #include<stdio.h>
// int main(){

//     float weight;
//     float height;
//     float BMI;

//     printf("enter the weight of the person : ");
//     scanf("%f",&weight);
//     printf("enter the height of the person (in meters): ");
//     scanf("%f",&height);

//     BMI = weight / (height * height);

//     printf("the BMI of the person is : %.2f\n",BMI);

//     if (BMI <= 15)
//     {
//         printf("your BMI catagory is : starvation");
//     }
//     else if (BMI < 17.5 && BMI > 15.1)
//     {
//         printf("your BMI catagory is : anorexic");
//     }
//     else if (BMI < 18.5 && BMI > 17.6)
//     {
//         printf("your BMI catagory is : underweight");
//     }
//     else if (BMI < 24.9 && BMI > 18.6)
//     {
//         printf("your BMI catagory is : ideal");
//     }
//     else if (BMI < 29.9 && BMI > 25)
//     {
//         printf("your BMI catagory is : overweight");
//     }
//     else if (BMI < 30.9 && BMI > 30)
//     {
//         printf("your BMI catagory is : obese");
//     }
//     else if (BMI >= 40)
//     {
//         printf("your BMI catagory is : morbidly obese");
//     }

//     return 0;    
    
// }



// #include<stdio.h>
// int main(){

//     int i;

//     for ( i = 0; i < 5; i++){
//         printf("hello world !!\n");
//     }
//     return 0;
// }



// #include<stdio.h>
// int main(){

//     int i;

//     for ( i = 0; i <= 10; i++)
//     {
//         printf("%d\n",i);
//     }
//     return 0;
// }



// #include<stdio.h>
// int main(){
//     int i = 0;
//     while (i < 11)
//     {
//         printf("hello world !! %d\n",i);
//         i ++;
//     }
//     return 0;
// }



// #include<stdio.h>
// int main(){

//     for (int i = 0; i <= 50; i++)
//     {
//         if (i % 2 == 0)
//         {
//             printf("%d\n",i);
//         }
        
//     }
//     return 0;
// }



// #include<stdio.h>
// int main(){

//     int i,num,number;

//     printf("enter how many numbers you want to enter : ");
//     scanf("%d",&num);

//     for ( i = 0; i < num; i++)
//     {
//         printf("enter a number : ");
//         scanf("%d",&number);
//         if (number % 2 == 0)
//         {
//             break;
//         }
        
//     }
//     return 0;
// }



// #include<stdio.h>
// int main(){

//     int sum = 0;
//     for (int i = 0; i < 10; i++)
//     {
//         sum += i;
//     }
//     printf("%d",sum);
//     return 0;
// }



// #include<stdio.h>
// int main(){

//     int i,sum = 0;
//     int number,num;

//     printf("enter how many numbers yu want to add: ");
//     scanf("%d",&num);

//     for ( i = 0; i < num; i++)
//     {
//         printf("enter a number : ");
//         scanf("%d",&number);

//         sum += number;
//     }

//     printf("the sum of the numbers you written are : %d",sum);
//     return 0;
    
// }



// #include<stdio.h>
// int main()
// {
//     int i;
//     double number,sum = 0.0;

//     for ( i = 1; i <= 10; i++)
//     {
//         printf("enter the number %d: ",i);
//         scanf("%lf",&number);
        
//     if (number < 0.0)
//     {
//         break;
//     }
//     sum += number; //sum = sum + number;
//     }
//     printf("sum : %lf",sum);
//     return 0;
// }




// #include<stdio.h>
// int main(){

//     int i,sum = 0;
//     int number,num;

//     printf("enter how many numbers you want to add: ");
//     scanf("%d",&num);

//     for ( i = 0; i < num; i++)
//     {
//         printf("enter a number(negatives are going to break the programme): ");
//         scanf("%d",&number);

//         if (number < 0 )
//         {
//             break;
//         }
//         sum += number;
//     }

//     printf("the sum of the numbers you written are : %d",sum);
//     return 0;
    
// }



// #include<stdio.h>
// int main(){

//     int i,sum = 0;
//     int number,num;

//     printf("enter how many numbers you want to add: ");
//     scanf("%d",&num);

//     for ( i = 0; i < num; i++)
//     {
//         printf("enter a number(negatives are going to be skipped): ");
//         scanf("%d",&number);

//         if (number < 0 )
//         {
//             continue;;
//         }
//         sum += number;
//     }

//     printf("the sum of the numbers you written are : %d",sum);
//     return 0;
    
// }



// #include <stdio.h>
// int main() {
//     int num, i;
//     unsigned long long fact = 1;

//     printf("Enter a number to get the factorial : ");
//     scanf("%d", &num);

//     if (num < 0)
//         printf("Error! Factorial of a negative number doesn't exist.");

//     else {
//         for (i = 1; i <= num; ++i) {
//             fact *= i;
//         }
//         printf("Factorial of %d = %llu", num, fact);
//     }
//     return 0;
// }



// #include<stdio.h>
// int main(){
//     int est_time = 40;
//     int overtime;
//     int total_time;
//     int rate = 12;
//     int payment;
//     int i,count;

//     printf("how many workers are there : ");
//     scanf("%d",&count);

//     for (i = 0; i < count; i++)
//     {
//         printf("enter how many hours the worker has worked in the week : ");
//         scanf("%d",&total_time);

//         overtime = total_time - est_time;
//         payment = overtime * rate;

//         printf("the payment that employe gets for the over time is : %d\n",payment);
//     }
    
//     return 0;

// }



