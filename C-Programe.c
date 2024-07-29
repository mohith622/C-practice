1.#include<stdio.h>
void main()
{                                                  
     int a=34,b=45,c;
     c=a+b;printf("the sum of two values are %d  ",c);
     c=a*b,c=a/b
    
}
#include<stdio.h>
void main()
{            
	 int a,b,c;
	 printf("\n Enter A value :");
	 scanf("%d",&a);
	 printf("\n Enter B value :");
	 scanf("%d",&b);

	 c=a-b;
	 printf("\nThe Subraction of Two values C=%d",c);
	 printf("\n\n")
}	 

2.// to print a mattter(char) 
(1.#include<stdio.h>
void main()
{
   char name[100];
   printf("\n enter which you want to print\n\n");
   scanf("%S",name);
   printf("the given name is %S",name);

}

2.#include<stdio.h>
  void main()
  {

   char name[10]="Mohith";
   //printf("\n Enter Any Name :");
   //scanf("%s",name);


   printf("\n\n given name is %s",name);


  }	


3.//float values(float)

#include<stdio.h>
void main()

{

float a,b;
printf("\n enter a and b values");
scanf("%f%f",&a,&b);

a=a+b;
printf("\n\n dfhsufg %f",a);

}



4.//simple biggest number(if) 

1.#include<stdio.h>
void main()

{


int a=40,b=20;
if (a>b)
printf("\n A is big %d",a);


}

2.#include<stdio.h>
void main()

{


int a=40,b=100;
if (a>b)
printf("\n A is big %d",a);
else
    printf("\n b is big %d",b);

}

5.//subjects
#include<stdio.h>
void main()

{
float tel,hin,eng,mat,sci,soc,total,avg;

int highestMarks,lowestMarks;

printf("Enter tel Marks :");
scanf("%f",&tel);
printf("Enter hin Marks :");
scanf("%f",&hin);
printf("Enter eng Marks :");
scanf("%f",&eng);
printf("Enter mat Marks :");
scanf("%f",&mat);
printf("Enter sci Marks :");
scanf("%f",&sci);
printf("Enter soc Marks :");
scanf("%f",&soc);

total=tel+hin+eng+mat+sci+soc;

avg=(tel+hin+eng+mat+sci+soc)/6;

    highestMarks = tel;
    lowestMarks = tel;


if(tel<35)
printf("\n tel sub fail");

if(hin<35)
printf("\n hin sub fail");

if(eng<35)
printf("\n eng sub fail");

if(mat<35)
printf("\n mat sub fail");

if(sci<35)
printf("\n sci sub fail");

if(soc<35)
printf("\n soc sub fail");

if (eng > highestMarks) highestMarks = eng;
if (mat > highestMarks) highestMarks = mat;
if (sci > highestMarks) highestMarks = sci;
if (soc> highestMarks) highestMarks = soc;
if (hin > highestMarks) highestMarks = hin;

if (eng< lowestMarks) lowestMarks = eng;
if (mat < lowestMarks) lowestMarks = mat;
if (sci < lowestMarks) lowestMarks = sci;
if (soc < lowestMarks) lowestMarks = soc;
if (hin< lowestMarks) lowestMarks = hin;


printf("\n Highest Marks: %d\n", highestMarks);
printf("\n\n Lowest Marks: %d\n", lowestMarks);



printf("\n The sum of all subjects total=%f",total);

printf("\n The avg of all subjects avg=%f",avg);


}


6.//ODD.EVEN
#include<stdio.h>
#include<stdlib.h>

void main()
{

  int num;
  printf("\n\n Enter Any Number");
  scanf("%d",&num);

  if(num%2==0)
    printf("\n\n Given Number is Even %d",num);
    else
    printf("\n\n Given Number is Odd %d",num);
        getch();

}


7.//n-natural number print by using while
#include<stdio.h>

int main()
{
int i=1,j
printf("Enter How Many Numbers Do You Want :");
scanf("%d",&j);
while(i<=j)
{
printf("\n%d",i);
i++;
}
return 0;
}


8.//n-natural number print by using do/while
#include<stdio.h>

int main()
{
int i=1,j;
printf("Enter How Many Numbers Do You Want :");
scanf("%d",&j);
do
{
printf("\n%d",&i);
i++;
}while(i<=j);
return 0;
}

9.//write a c-program to claculate sum of digits of a number
#include<stdio.h>
void main ()
{
int i,j,sum=0;
printf("Enter Any Number :");
scanf("%d",&i);
do
{
 j=i%10;
 sum+=j;
 i/=10;
}while(i!=0);
printf("\n %d",sum);
i++;
return 0;
}


10.//for-loop
#include<stdio.h>
void main ()
{

int i,n;
printf("enter any value :");
scanf("%d",&n);

for(i=0;i<=n;i++)
{
printf("\n %d",i);
}

}

11.//write a c-program to print multip lication of table
1.#include<stdio.h>
void main ()
{
 int i,j;
 for(i=2;i<=2;i++)
 {

     for(j=1;j<=10;j++)
     {
         printf("%d * %d =%d",i,j,i*j);
         printf("\n");
     }
     printf("\n");

 }

}

2.#include<stdio.h>
void main ()
{
 int i,j,table,end;
 printf("\n Enter Which Table do you want :");
 scanf("%d",&table);
 printf("\n Enter how many numbers you want :");
 scanf("%d",&end);


 for(i=table;i<=table;i++)
 {
    

     for(j=1;j<=end;j++)
     {
         printf("%d * %d =%d",i,j,i*j);
         printf("\n");
     }

 }


}

 12.//sum of n natural numbers 
#include<stdio.h>
void main ()
{

int i,n,sum=0;
printf("\n Enter how many numbers you to sum :");
scanf("%d",&n);

for(i=0;i<=n;i++)
{
    sum+=i;
    
}
   printf("\n the sum of first n natural numbers are %d",sum);

  }


13.//even numb btw 1 to any numb
  #include<stdio.h>
void main ()
{
    int i,n;
    printf("\n Enter Any Number :");
    scanf("%d",&n);
    int a;
    for(i=2;i<=n;i+=2)
    {
        printf("\n %d",i);
    }

}

14.//factorial number
#include<stdio.h>
void main ()
{
    int i,n,factorial=1;
   printf("\n Enter Any Number :");
   scanf("%d",&n);

   for(i=1;i<=n;i++)
   {

       factorial *=i;
   }

    printf("\n the factorial of %d is : %d\n",n,factorial);

}

15.//Fibonacci series
#include <stdio.h>

int main() {
    int i,N, a = 0, b = 1, nextTerm;
    printf("Enter N: ");
    scanf("%d", &N);

    printf("Fibonacci Series: ");
    for (int i = 1; i <= N; ++i) {
        printf("%d ", a);
        nextTerm = a + b;
        a = b;
        b = nextTerm;
    }
    return 0;
}


16.//to check prime 

#include <stdio.h>

int main() {
    int i,N, isPrime = 1;
    printf("Enter N: ");
    scanf("%d", &N);

    for (int i = 2; i <= N / 2; ++i) {
        if (N % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (isPrime) {
        printf("%d is prime.\n", N);
    } else {
        printf("%d is not prime.\n", N);
    }
    return 0;
}

17.//switch-case 
#include<stdio.h>
void main ()
{
   int option,a,b,c;
  printf("\n choose any option :");
  printf("\n 1.Add ");
  printf("\n 2.Sub ");
  printf("\n 3.Multiplication ");
  printf("\n 4.Division ");

  printf("\n\n\n Enter Any Option :");
  scanf("%d",&option);


  switch(option)
    {

  case 1:
    printf("\n\n You Have Chosen Sum Of Two Values ");
    printf("\n Enter a value :");
    scanf("%d",&a);
    printf("\n Enter b value :");
    scanf("%d",&b);
    c=a+b;
    printf("\n\n The Sum Of The Two values are %d",c);
    break;
  case 2:
    printf("\n\n You have Chosen Sub of two values ");
    printf("\n Enter a Value :");
    scanf("%d",&a);
    printf("\n Enter b value :");
    scanf("%d",&b);
    c=a-b;
    printf("\n\n The Sub Of Two values are %d",c);
     break;
  case 3:
    printf("\n\n You Have Chosen Multiplication of two values ");
   printf("\n Enter a value:");
    scanf("%d",&a);
    printf("\n Enter b value :");
    scanf("%d",&b);
    c=a*b;
    printf("\n\n The Multiplication of two values are %d",c);
    break;
  case 4:
    printf("\n\n You Have Chosen Division of Two Values");
    printf("\n Enter a value :");
    scanf("%d",&a);
    printf("\n Enter b value :");
    scanf("%d",&b);
    c=a/b;
    printf("\n\n The Division of two values are %d",c);
    break;

    default:
    printf("given age is invalid");
     break;

    }


}
18.//Arrays
1.#include<stdio.h>
void main ()
{
int i,num[100],sum=0,number;

printf("\n Enter How many Numbers You Want :");
scanf("%d",&number);

 for(i=0;i<number;i++)
 {
   printf("\n\n Enter [%d] elements :",i);
   scanf("%d",&num[i]);

    sum+=num[i];
}
printf("\n\n sum of elements are %d",sum);

}

19.//float,
//longdouble,
//double

#include<stdio.h>
void main()
{
    float float_value=3.25;
    long double long_double_value=520.36;
    double double_value=52.36;

    printf("\n float value is = %f ",float_value);
    printf("\n long double value is = %Lf ",long_double_value);
    printf("\n duble value is =%lf ",double_value);
}

20.//Matrix
1.#include<stdio.h>
void main ()
{
   int matrix1[3][3],matrix2[3][3],resultmatrix[3][3];
   printf("Enter The Values Of matrix1 :\n");
   for(int i=0;i<3;i++)
   {
    for(int j=0;j<3;j++)
    {
        scanf(" %d",&matrix1[i][j]);

    }
    printf("\n");
   }

   printf("Enter The Values Of matrix2 :\n");
   for(int i=0;i<3;i++)
   {
    for(int j=0;j<3;j++)
    {
        scanf(" %d",&matrix2[i][j]);

    }
    printf("\n");
   }

printf("sum of the matrices :\n");
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
    resultmatrix[i][j]=matrix1[i][j]+matrix2[i][j];
    printf(" %d",resultmatrix[i][j]);
    }
    printf("\n");
}


}
21.//Sum Of Array Elements
#include<stdio.h>
void main ()

{
  int arr[]={1,2,3,4,5};
  printf("Array Elements :");

  for(int i=0;i<5;i++)
  {
      printf("%d",arr[i]);
  }
    printf("\n");

    int sum=0;
    for(int i=0;i<5;i++)
    {

    sum+=arr[i];
    }
    printf("Sum Of Array Elements %d\n",sum);



}

22.//Largest Array
#include<stdio.h>
void main ()

{
  int arr[]={5, 8, 10, 4, 3};
  printf("Array Elements :");

  for(int i=0;i<5;i++)
  {
      printf("%d",arr[i]);
  }
    printf("\n");

    int max=arr[0];
    for(int i=0;i<5;i++)
    {
      if(arr[i]>max)
      {
        max=arr[i];
      }

    }
    printf("Largest Value Of Array Elements %d\n",max);

}

23.//#include <stdio.h>
void main ()
{
    int i;
   int arr1[]={1, 2, 3, 4, 5};
   int arr2[5];
   for(int i=0;i<5;i++)
   {
    arr2[i]=arr1[i];
   }
       printf("Elements of arr2 :");

    for(int i=0;i<5;i++)
    {
        printf("%d",arr2[i]);

    }
    printf("\n");

}

24.//Reversing of Array
#include<stdio.h>
void main ()
{
  int arr[]={1,2,3,4,5};
  int size=5;
    printf("Original Array :");
    for(int i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");

    for(int i=0;i<size/2;i++)
    {
      int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;

    }
    printf("Reversed Array :");
    for(int i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");


}

25.//searching element in array
#include<stdio.h>
void main ()

{
  int i;
  int arr[]={1,2,3,4,5};
  int size=5;
  int key=5;

  printf("Array Elements :");
  for(i=0;i<size;i++)
  {
      printf("%d",arr[i]);
  }
  printf("\n");
   int found=0;
   for(i=0;i<size;i++)
   {
       if(arr[i]==key)
       {
         found=1;
          break;
       }
   }
   if(found)
   {
       printf("Element %d is found in Array \n",key);
   }
   else
   {
       printf("Element %d is not found in Array \n",key);
   }

}

26.//Bubble Sort Array
#include<stdio.h>
void main ()
{
  int i;
  int arr[]={1,4,2,3,5};
  int size=5;

  printf("Original Array :");
  for(i=0;i<size;i++)
  {
      printf("%d",arr[i]);
  }
    printf("\n");

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted Array :");
    for(i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");

}

27.//Merging Of Two Arrays
#include <stdio.h>

void main() {

    int arr1[] = {1, 3, 5, 7, 9};
    int arr2[] = {2, 4, 6, 8, 10};
    int size1 = 5, size2 = 5;
    int result[10];


    int i = 0, j = 0, k = 0;
    while (i < size1 && j < size2) {
        if (arr1[i] <= arr2[j]) {
            result[k++] = arr1[i++];
        } else {
            result[k++] = arr2[j++];
        }
    }

    while (i < size1) {
        result[k++] = arr1[i++];
    }

    while (j < size2) {
        result[k++] = arr2[j++];
    }

    printf("Merged sorted array: ");
    for (int m = 0; m < size1 + size2; m++) {
        printf("%d ", result[m]);
    }
    printf("\n");


}

28.//Duplicate Elements in A Array
#include <stdio.h>

void main()
{


    int arr[] = {2, 4, 4, 1, 3, 1, 5, 3};
    int size = 8;


    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Duplicate elements in the array: ");
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                break;
            }
        }
    }
    printf("\n");

}


29.//Average of array elements 
#include<stdio.h>
void main ()
{
   int i;
   int arr[]={10,20,30,40,50};
   int size=5;

    printf("Array Elements :");
    for(i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");

    int sum=0;
    for(i=0;i<size;i++)
    {
        sum+=arr[i];
    }
    float average = (float)sum/size;

     printf("Average of array elements: %.2f\n", average);


}

30.//Removin Duplicate Elements in Array
#include <stdio.h>
void main() {

    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int size = 7;


    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");


    int unique[size];
    int k = 0;

    for (int i = 0; i < size; i++) {
        int duplicate = 0;
        for (int j = 0; j < k; j++) {
            if (arr[i] == unique[j]) {
                duplicate = 1;
                break;
            }
        }

        if (!duplicate) {
            unique[k++] = arr[i];
        }
    }


    printf("Array after removing duplicates: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", unique[i]);
    }
    printf("\n");

}

31.//