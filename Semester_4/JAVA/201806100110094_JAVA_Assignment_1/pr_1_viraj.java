import java.util.*;
import java.lang.*;
import java.io.*;

class mth_abb
{
    String mth ;
    String org_stg;
    StringBuffer abb;
    int mth_num , total_days ;

    mth_abb()
    {
        mth = "";
        org_stg = "";
        mth_num = total_days = 0;
    }

    void get_mth()
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the mth : ");
        mth = sc.next();

        get_result();
    }

    void get_result()
    {
        org_stg = mth.toLowerCase();

        switch(org_stg)
        {
            case "january" : 
                        abb = new StringBuffer("JAN");
                        mth_num = 1;
                        total_days = 31;
                        break;
           case  "february" :
                        abb = new StringBuffer("FEB");
                        mth_num = 2;
                        total_days = 28;
                        break;
                    
          case   "march" : 
                        abb = new StringBuffer("MARCH");
                        mth_num = 3;
                        total_days = 31;
                        break;
                    
            case "april" :
                        abb = new StringBuffer("APR");
                        mth_num = 4;
                        total_days = 30 ;
                        break;

           case  "may" :
                        abb = new StringBuffer("MAY");
                        mth_num = 5;
                        total_days = 31 ;
                        break;

           case  "june" : 
                        abb = new StringBuffer("JUNE");
                        mth_num = 6;
                        total_days = 30 ;
                        break;

            case "july" :
                        abb = new StringBuffer("JULY");
                        mth_num = 7;
                        total_days = 31 ;
                        break;

            case "august" :
                        abb = new StringBuffer("AUG");
                        mth_num = 8;
                        total_days = 31 ;
                        break;

           case  "september" :
                        abb = new StringBuffer("SEP");
                        mth_num = 9;
                        total_days = 30 ;
                        break;

           case  "october" : 
                        abb = new StringBuffer("OCT");
                        mth_num = 10 ;
                        total_days = 31;
                        break;

            case "november" :
                        abb = new StringBuffer("NOV");
                        mth_num = 11;
                        total_days = 30 ;
                        break;

            case "december" :
                        abb = new StringBuffer("DEC");
                        mth_num = 12;
                        total_days = 30 ;
                        break;

            default :
                    System.out.print("Invalid Month ! please also check Upper or Lower Case");
                    System.exit(0);
        }
        display_result();
    }

    void display_result()
    {
        System.out.println("Your month "+mth);
        System.out.println("Its abb is "+ abb);
        System.out.println("Month Number "+mth_num);
        System.out.println("It has "+total_days+ " days");
    }
}

class demo
{

        public static void main(String args[])
        {
            mth_abb ma = new mth_abb();
            ma.get_mth();
        }
}

