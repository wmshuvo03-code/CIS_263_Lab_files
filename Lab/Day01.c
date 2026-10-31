
// one line comment

/* multi line comment
   hellooow*/

   #include <stdio.h>
   int main() {
       int a; // add this line to declare a variable a of type int
       printf("Enter a: \n");
       scanf("%d", &a);
       printf("a: %d \n" ,a);
       printf("hellooow\n");

       float cgpa =3.78;
       char c = 'A';
       printf("cgpa: %f , grade: %c\n", cgpa, c);

       // multi reading values
       int day, month, year;
       printf("Enter day, month, year: \n");
       scanf("%d %d %d" , &day, &month, &year);
       printf("day: %d, month: %d, year: %d\n", day, month, year);
       return 0;
   }
