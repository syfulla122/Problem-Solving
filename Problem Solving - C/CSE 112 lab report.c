/*#include<stdio.h>
int main()#include<stdio.h>#include<stdio.h>
void factorial(int n)
{
    int i,t1,t2,nxt;
    t1=0;
    t2 =1;
    printf("0,1,");
    for(i=2;i<n;i++)
    {
        nxt = t1+t2;
        printf("%d,",nxt);
        t1=t2;
        t2=nxt;
    }
}

int main()
{
    int i,n,t1,t2,nxt;
    scanf("%d",&n);
    factorial(n);
    return 0;
}

void factorial(int n)
{
    int i,t1,t2,nxt;
    t1=0;
    t2 =1;
    printf("0,1,");
    for(i=2;i<n;i++)
    {
        nxt = t1+t2;
        printf("%d,",nxt);
        t1=t2;
        t2=nxt;
    }
}

int main()
{
    int i,n,t1,t2,nxt;
    scanf("%d",&n);
    factorial(n);
    return 0;
}#include<stdio.h>
int evod(int a);
int main()
{
	int a;
	scanf("%d",&a);
	int i=evod(a);
	if(i2==1)
	{
		printf("The number is even");
	}
	else
	{
		printf("The number is odd");
	}
	return 0;
}
int evod(int a)
{
	int f=0;
	if(a%2==0)
	{
		f=1;
	}
	else
	{
		f=f;
	}
	return f;
}


{
    printf("Hello world");
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int x=10;
    float y=10.255;
    double z=10.125;#include<stdio.h>
void factorial(int n)
{
    int i,t1,t2,nxt;
    t1=0;
    t2 =1;
    printf("0,1,");
    for(i=2;i<n;i++)
    {
        nxt = t1+t2;
        printf("%d,",nxt);
        t1=t2;
        t2=nxt;
    }
}

int main()
{
    int i,n,t1,t2,nxt;
    scanf("%d",&n);
    factorial(n);
    return 0;
}

    char w='A';
    printf("the value of x is %d\n",x);#include<stdio.h>
void factorial(int n)
{
    int i,t1,t2,nxt;
    t1=0;
    t2 =1;
    printf("0,1,");
    for(i=2;i<n;i++)
    {
        nxt = t1+t2;
        printf("%d,",nxt);
        t1=t2;
        t2=nxt;
    }
}

int main()
{
    int i,n,t1,t2,nxt;
    scanf("%d",&n);
    factorial(n);
    return 0;
}

    printf("the value of y is %.3f\n",y);
    printf("the value of z is %0.3lf\n",z);
    printf("the value of w is %c\n",w);
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int a=10;
    int  y=20;
    float s = 1;
    s = (float)y/a;
    printf("the summation of %d & %d is %f\n",a,y,s);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int num1;
    float num2;
    double num3;
    char ch;
    num1 = 10;
    num2 = 20.55;
    num3 = 15.125;
    ch = 'a';
    printf("num1 = %d\n",num1);
    printf("num2 = %f\n",num2);
    printf("num3 = %lf\n",num3);
    printf("ch = %c\n",ch);

    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int num1;
    float num2;
    double num3;
    //char ch;
    scanf("%d",&num1);
    scanf("%f",&num2);
    scanf("%lf",&num3);
    //scanf("%c",&ch);
    printf("num1 = %d\n",num1);
    printf("num2 = %f\n",num2);
    printf("num3 = %lf\n",num3);
    //printf("ch = %c\n",ch);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int num1,num2,sum,sub;
    double num3,num4,mul,div;
    scanf("%d%d",&num1,&num2);
    scanf("%lf%lf",&num3,&num4);
    sum = num1+num2;
    sub = num1-num2;
    mul = num3*num4;
    div = num3/num4;
    printf("Addition = %d\n",sum);
    printf("Subtraction = %d\n",sub);
    printf("Multiplication = %.3lf\n",mul);
    printf("Division = %.3lf\n",div);
    return 0;

}*/
/*#include<stdio.h>
int main()
{
  int a,b,c;
  scanf("%d%d",&a,&b);
  c = a%b;
  printf("%d",c);
  return 0;
}*/

/*#include<stdio.h>
int main()
{
  int a,b,c;
  scanf("%d%d",&a,&b);
  a++;
  b--;
  printf("\n%d %d",a,b);
  return 0;
}*/

/*#include<stdio.h>
int main()
{
   int age;
   age = 20;
   float  a = age + 0.6;
   printf("%d %f",age,a);
   return 0;
}*/
//C Program for the determination of Area of Circle:
/*#include<stdio.h>
#define pie 3.1416
int main()
{
float radious, area;
printf("enter the radious of circle\n");
scanf("%f", & radious);
area=3.1416* radious* radious;
printf("area of the circle is %0.2f\n", area);
return 0;
}*/
/*#include<stdio.h>
#define pi 3.1416
int main()
{

float radious , ci;
printf("enter the radious of circle :\n");
scanf("%f", &radious);
ci = 2 * pi * radious;
printf("circumference of circle : %.4f", ci);
return 0;
}*/
/*14 #include<stdio.h>
int main()
{
 int length, breadth,area;
 printf("enter the length of rectangle : \n");
 scanf("%d", &length);
 printf("enter the breadth of rectangle : \n");
 scanf("%d", &breadth);
 area = length*breadth;
 printf("area of rectangle : %d\n", area);
 return 0;
}*/
/*15.*/
/*#include<stdio.h>
int main()
{
float pi =3.1416;
float radious,volume;
printf("enter radious of the sphere : \n");
scanf("%f", & radious);
volume= 4/3.0 * pi * radious * radious * radious ;
printf("enter volume of the sphere : %.4f\n", volume);
return 0;
}*/
//16
/*#include<stdio.h>
int main()
{
float pie = 3.1416;
float radious,volume, sa;
printf("enter the radious of a sa :\n",sa);
scanf("%f", &radious);
sa = 4 * pie * radious * radious;
printf(" area of sphere is: %.4f\n", sa);
return 0;
}*/

//17
/*#include<stdio.h>
int main()
{
int side , area;
printf("enter the length of side : \n");
scanf("%d", &side);
area= side*side;
printf("enter the area of square : %d\n", area);
return 0;
}18*/
/*#include<stdio.h>
int main()
{
float height , width;
float area;
printf("enter the height and width of the triangle:\n");
scanf("%f%f",&height , &width);
area = 0.5 * height*width;
printf("enter the area of a right angle triangle : %.4f\n", area);
return 0;
}*/
//19. C Program for the determination of Equilateral Triangle:
/*#include<stdio.h>
#include<math.h>
int main()
{
float side,area;
printf("enter the side of an Equilateral triangle:\n");
scanf("%f", &side);
area = sqrt (3)/4 * side * side;
printf("The area of Equilateral triangle is:%.3f\n", area);
return 0;
}20*/
/*#include<stdio.h>
int main()
{
float length , width , area;
printf("enter the length and width of rectangle : \n");
scanf("%f%f", &length, &width);
area = 2 * (length + width);
printf("The Perimeter of rectangle is: %.3f\n", area);
return 0;
}*/
//21.C Program for the Area of a Triangle:
/*#include<stdio.h>
int main()
{
float height, base, area;
printf("enter the base and height of the triangle: \n");
scanf("%f%f", &base, &height);
area = (height * base) / 2;
printf("The area of triangle is : %.3f\n", area);
return 0;
}22*/
/*#include<stdio.h>
int main()
{
float p , r , t , si;
printf("enter the value of p , r and t : \n");
scanf("%f%f%f", &p , &r , &t);
si = (p * r * t) / 100;
printf("The simple interest is : %.3f\n", si);
return 0;
}*/
//23.C Program for the value of Compound Interest:
/*#include<stdio.h>
#include<math.h>
int main()
{
float p , r , n , t , ci;
printf("enter the value of p :\n");
scanf("%f", &p);
printf("enter the value of r :\n");
scanf("%f", &r);
printf("enter the value of n :\n");
scanf("%f", &n);
printf("enter the value of t :\t");
scanf("%f", &t);
ci = p* (pow((1+r/n),n*t));
printf("the value of Compound Interest is :%.3f\n", ci);
return 0;
}24*/
/*#include <stdio.h>
int main()
{
 int days, years, weeks;
 printf("Enter days: ");
 scanf("%d", &days);
 years = (days / 365);
 weeks = (days % 365) / 7;
 days = days - ((years * 365) + (weeks * 7));
 printf("YEARS: %d\n", years);
 printf("WEEKS: %d\n", weeks);
 printf("DAYS: %d", days);
 return 0;
}*/
//25.C Program for Fahrenheit to Celsius conversion:
/*#include<stdio.h>
int main()
{
float fahrenheit, Celsius;
printf("enter the temperature in fahrenheit: \n");
scanf("%f", &fahrenheit);
Celsius = (fahrenheit - 32)*5/9;
printf("the value of Celsius is : %.4f\n", Celsius );
return 0;
}*/
/*#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   if(n>10)
   {
       printf("Bigger\n");
   }
   else
   {
       printf("smaller\n");
   }
   return 0;
}*/

/*#include<stdio.h>
int main()
{
    int age;
    char ch;
    scanf("%d",&age);
    scanf("%c",&ch);
    if(age>=40)
    {
        if(ch=='m')
        {
            printf("he can take vaccine\n");
        }
        else
        {
            printf("female candidate will take vaccine later");
        }
    }
    else
    {
        printf("your age have to br greater than 40\n");
    }
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int i;
    for(i=100; i>0; i--)
    {
        printf("%d ",i);
    }
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Input Test Data:");
    scanf("%d",&n);
    printf("The First %d natural number are :\n",n);
    for(i=1; i<=n; i++)
    {

        printf("%d ",i);
        sum=sum+i;
    }
    printf("\nThe Sum Of First %d Natural Number is: %d",n,sum);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int i,n,sum=0;
    double avg;
    printf("Input The 10 Numbers\n");

    for(i=1; i<=10; i++)
    {
        printf("Number-%d:",i);
        scanf("%d",&n);
        sum=sum+n;
    }
    avg=(double)sum/10;
    printf("\nThe Sum Of The First 10 Number is: %d",sum);
    printf("\nThe Avarage Of First The 10 Number is: %.10f",avg);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int i,n;
    printf("Input Number of Terms:");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {

        printf("The Number is : %d and cube of %d is %d\n",i,i,i*i*i);

    }
}*/
/*#include<stdio.h>
int main()
{
    int i,n,x;
    printf("Input The Number:");
    scanf("%d",&n);
    for(i=1; i<=10; i++)
    {
        x=n*i;
        printf("%d*%d = %d\n",n,i,x);
    }
}*/
/*#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Input Number of terms:");
    scanf("%d",&n);
    printf("The odd number are: ");
    for(i=1; i<=2*n; i=i+2)
    {
        printf("%d ",i);
        sum=sum+i ;
    }
    printf("\nThe sum of odd natural number upto %d terms: %d",n,sum);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int i,n;
    double sum=0.0;
    printf("Input Number of terms:");
    scanf("%d",&n);
    printf("The series is: ");
    for(i=1; i<=n; i++)
    {
        if(i<n)
        {
            printf("1/%d + ",i);
            sum=sum+ 1/(double)i;
        }
        else
        {
            printf("1/%d",i);
            sum=sum+ 1/(double)i;
        }
    }
    printf("\nThe sum of series upto %d terms: %f",n,sum);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int i,n,sum=0;
    long t=9;
    printf("Input number of terms: ");
    scanf("%d",&n);
    printf("The series is: ");
    for(i=1; i<=n; i++)
    {
        sum=sum + t ;
        printf("%ld ",t);
        t=t*10 + 9 ;
    }
    printf("\nThe sum of the series is: %d",sum);
}*/
/*#include<stdio.h>
int main()
{
    int i,n,a,sum=0;
    printf("Input the number of terms:");
    scanf("%d",&n);
    printf("The squre natural number upto %d terms are: ",n);
    for(i=1; i<=n; i++)
    {
        a=i*i ;
        printf("%d ",a);
        sum=sum+a;
    }
    printf("\nThe sum of squre natural number upto %d terms   is: %d"
           ,n, sum);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int i,n,nxt;
    int t1=0,t2=1;
    printf("Input the number of terms:");
    scanf("%d",&n);
    printf("The fabonacci series upto %d terms: ",n);
    printf("%d, %d, ",t1,t2);
    for(i=2; i<n; i++)
    {
        if(i<n)
        {
            nxt = t1+t2;
            printf("%d, ",nxt);
            t1=t2 ;
            t2=nxt ;
        }
        else if(i==n)
        {
            nxt = t1+t2;
            printf("%d",nxt);
            t1=t2 ;
            t2=nxt ;
        }
    }
    return 0;
}*/
/*#include <stdio.h>
int main()
{
    int i,j,n,k=1;
    printf("Input the number:");
    scanf("%d",&n);
    for(i=1; i<=n*2; i+=2)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d ",k++);
        }
        printf("\n");
    }

}*/
/*#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=1; i<=n*2; i+=2)
    {
        for(j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int i=1,sum=0;
    printf("Number between 1 and 200, divided by 9:\n");
    while(i<=200)
    {
        if(i%9==0)
        {
            printf("%d ",i);
            sum=sum+i;
        }
        i++;
    }
    printf("\nThe sum is: %d",sum);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int i,j,n;
    int k,r;
    scanf("%d",&n);
    r=n-1;
    for(i=1; i<=n; i++)
    {
        for(j=r; j>=1; j--)
        {
            printf(" ");
        }

        for(k=1; k<=i; k++)
        {
            printf("* ");
        }
        printf("\n");
        r--;
    }
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int n,i,f=1;
    scanf("%d",&n);
    for(i=n; i>0; i--)
    {
        f*=i;
    }
    printf("Factorial=%d",f);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("Number is even");
    }
    else
    {
        printf("Number is odd");
    }
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a>=0)
    {
        printf("Positive");
    }
    else
    {
        printf("Negative");
    }
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("%d Is bigger",a);
    }
    else if(b>c)
    {
        printf("%d Is bigger",b);
    }
    else
    {
        printf("%d Is bigger",c);
    }
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a+b+c==180)
    {
        printf("Triangle");
    }
    else
    {
        printf("Not triangle");
    }
    return 0;
}*/
/*   #include<stdio.h>
   int main()
   {
char m;
scanf("%c",&m);
if((m>='a'&&m<='z') || (m>='A'&&m<='Z'))
{
	printf("Alphabat");
}
else if(m>='0'&&m<='9')
{
	printf("Digit");
}
else
{
	printf("special Charecter");
}
return 0;
  }*/
/*#include<stdio.h>
int main()
   {
    char vc;
    printf("Enter Alphabat: ");
    scanf("%c",&vc);
    if(vc=='a'||vc=='e'||vc=='i'||vc=='o'||vc=='u')
    {
        printf("%c is Vowel",vc);
    }
    else if(vc=='A'||vc=='E'||vc=='I'||vc=='O'||vc=='U')
    {
         printf("%c is Vowel",vc);
    }
    else
    {
        printf("%c is constant",vc);
    }
    return 0;
}*/
/*#include<stdio.h>
     int main()
     {
    int i,n,flag=0;
    printf("Inpur Number:");
    scanf("%d",&n);
    for(i=2; i<n; i++)
     {
         if(n%i==0)
         {
             flag=1;
             break;
         }
                           }
     if(flag==0)
     {
         printf("%d is a prime number",n);
     }
     else
     {
         printf("%d is not a prime number",n);
     }
return 0;
     }*/
/*#include<stdio.h>
int main()
{
    double n;
    printf("Input Obtained Score: ");
    scanf("%lf",&n);

    if(n==4.00)
    {
        printf("Congratulation, You got A+");
    }
    else if(n>=3.75 && n<4.00)
    {
        printf("You got A");
    }
    else if(n>=3.50  && n<3.75)
    {
        printf("You got A-");
    }
    else if(n>=3.0 && n<3.5)
    {
        printf("You got B");
    }
    else
    {
        printf("invalid input");
    }

    return 0;
}*/
/*#include<stdio.h>
int main()
{
    double h;
    printf("Enter your height in cm: ");
    scanf("%lf",&h);

    if(h>=180)
    {
        printf("tallest");
    }
    else if(h>=165 && h<180)
    {
        printf("Average");
    }
    else if(h<165)
    {
        printf("Short");
    }
}*/
/*#include<stdio.h>
int num(int a,int b,int c);
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int z=num(a,b,c);
	printf("%d Is bigger",z);
	return 0;
}
int num(int a,int b,int c)
{
	int i=0;
	if(a>b&&a>c)
	{
		i=a;
	}
	else if(b>c)
	{
		i=b;
	}
	else
	{
		i=c;
	}
	return i;
}*/
/*#include<stdio.h>
int main()
{
int n,i;
printf("enter size of array:");
scanf("%d",&n);
int arr[n];
printf("enter array element:\n");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);

}
printf("the array is:\n");
for(i=0;i<n;i++){
    printf("%d\n",arr[i]);
}
return 0;
}*/
/*#include<stdio.h>
int main()
{
    int n,i,temp;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter element: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int x = n-1;
    for(i=0; i<n/2; i++)
    {
        temp=arr[i];
        arr[i]=arr[x];
        arr[x]=temp;
        x--;
    }
    printf("After Reversing\n");
    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
}*/
/*#include<stdio.h>
int main()
{
    int m,n,i,j;
    scanf("%d%d",&m,&n);
    int ar1[m][n],ar2[m][n],ar3[m][n];
    printf("Enter 1st array\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&ar1[i][j]);
        }
    }
    printf("Enter 2nd array\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&ar2[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            ar3[i][j]=ar1[i][j]+ar2[i][j];
        }
    }
    printf("Addition=\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",ar3[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/
/*include<stdio.h>
int main()
{
	int i,n,s=0;
	printf("enter the size of array:");
	scanf("%d",&n);
	int ar[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
		s+=ar[i];
	}
	printf("Sum=%d",s);
	return 0;
}*/
/*#include<stdio.h>
int main()
{
    int n,i,f=-5;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int m;
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(arr[i]==m)
        {
          f=i;
          break;
        }

    }
    if(f==-5)
    {
		printf("Not found");
	}
	else
	{
    printf("Index no:%d",f);
    }
}*/
/*#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Before Updating: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    int m;
    printf("Enter a number: ");
    scanf("%d",&m);
    arr[2]=m;
    printf("After Updating: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}*/
/*#include<stdio.h>
int main()
{
    char str1[20];
    char str2[20]="Santo";
    char str3[20]={'S','a','n','t','o'};
    scanf("%s",str1);
    printf("my name is %s\n",str1);
    printf("my name is %s\n",str2);
    printf("my name is %s\n",str3);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    char s[50];
    fgets(s,sizeof(s),stdin);
    puts(s);
}*/
/*#include<stdio.h>
#include<string.h>
int main()
{
    char st[100];
    scanf("%s",st);
    int l=strlen(st),i,c=0;
    for(i=0;i<l;i++)
    {
       c++;
    }
    printf("%d",c);
    return 0;
}*/
/*#include<stdio.h>
#include<string.h>
int main()
{
    char st[100],s2[100];
    fgets(st,sizeof(st),stdin);
    strcpy(s2,st);
    puts(s2);

    return 0;
}*/
/*#include<stdio.h>
#include<string.h>
int main()
{
    char st[100];
    fgets(st,sizeof(st),stdin);
    puts(strrev(st));

    return 0;
}*/
#include<stdio.h>
#include<string.h>
int main()
{
    char st1[20]="pushpa ",st2[20]="may jhukega nai";
    strcat(st1,st2);
    puts(st1);
    return 0;
}














