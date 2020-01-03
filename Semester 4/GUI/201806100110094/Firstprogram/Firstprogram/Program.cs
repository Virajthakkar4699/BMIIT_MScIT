using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Firstprogram
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hello World");
            

            int a = 0;

            for (a = 1; a <= 10; a++)
            {
                Console.WriteLine("value of a : "+ a);
            }

            

            Console.WriteLine("\n");
            Console.WriteLine("Enter Any Year");
            int year = Convert.ToInt32(Console.ReadLine());

            if (year % 4 == 0)
            {
                Console.WriteLine("It is a Leap Year");
            }
            else
            {
                Console.WriteLine("It is not a leap Year");
            }

            Console.WriteLine("\n");

            Console.WriteLine("Report Card");
            Console.WriteLine("\n");

            Console.WriteLine("Enter Marks of Subject 1: ");
            int sub1=Convert.ToInt32(Console.ReadLine());

            Console.WriteLine("Enter Marks of Subject 1: ");
            int sub2 = Convert.ToInt32(Console.ReadLine());

            Console.WriteLine("Enter Marks of Subject 1: ");
            int sub3 = Convert.ToInt32(Console.ReadLine());

            int total = sub1 + sub2 + sub3;

            int perc = (total * 100) / 300;

            char grade;
          //  grade = null;
           // Console.WriteLine(grade);

            if (perc > 0 && perc < 30)
            {
                grade = 'F';
            }
            else if(perc>=30 && perc<=50)
            {
                grade = 'E';
            }
            else if (perc > 50 && perc <= 60)
            {
                grade = 'D';
            }
            else if (perc > 60 && perc <= 70)
            {
                grade = 'c';
            }
            else if (perc > 70 && perc <= 80)
            {
                grade = 'B';
            }
            else if (perc > 80 && perc <= 100)
            {
                grade ='A';
            }
            else
            {
                Console.WriteLine("No proper Values");
            }

            Console.WriteLine("Total Marks: "+total);
            Console.WriteLine("percentage: "+perc);
            Console.WriteLine("grade"+grade);

            Console.WriteLine("=====================================");
            Console.WriteLine("Converting Celsuis to farenheit");
            int celsius;

            celsius = Convert.ToInt32(Console.ReadLine());
            int farenheit = (9 / 5) + celsius; //Any Proper Mathematical Expression



            Console.ReadLine();


        }
    }
}
