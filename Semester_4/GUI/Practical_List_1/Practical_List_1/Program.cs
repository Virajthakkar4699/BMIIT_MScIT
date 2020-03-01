using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Practical_List_1
{
    class Program
    {
        static void Main(string[] args)
        {

            Console.WriteLine("=====================================");
            Console.WriteLine("Converting Celsuis to farenheit");
            int celsius;
            Console.WriteLine("Enter Celsius");
            celsius = Convert.ToInt32(Console.ReadLine());
            int farenheit = (9 / 5) + celsius; //Any Proper Mathematical Expression.
            Console.WriteLine("Farenheit : " + farenheit);

            Console.WriteLine("=====================================");
            Console.WriteLine("Calculating Circumference of Circle");

            const float pi = 3.14F;
            int r = Convert.ToInt32(Console.ReadLine());
            float cir = 2 * pi * r;

            Console.WriteLine("Circumference of Circle is " + cir);

           Console.WriteLine("=====================================");
            Console.WriteLine("Calculate Years,Weeks & Days :");
            Console.WriteLine("Enter Number of  Days");
            int no_days = Convert.ToInt32(Console.ReadLine());
            
            int years = no_days / 365;
            int temp = no_days % 365;

            int weeks = temp / 7;
            temp = temp % 7;

            int days = temp;

            Console.WriteLine("No of Years : " + years + " Weeks : " + weeks + " Days : " + days);
            
            Console.ReadLine();
        }
    }
}
