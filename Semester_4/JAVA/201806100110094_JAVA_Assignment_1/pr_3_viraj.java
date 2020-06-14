import java.util.*;
import java.lang.*;

class opt
{
    String today_dt;
    String final_dt ;
    
    opt()
    {
        today_dt= "";
        final_dt = "";
    }

    void get_input()
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the Date in MM-DD-YYYY : ");
        today_dt= sc.nextLine();
        get_rst();
    }

    void  get_rst()
    {
        String buffer = new String(today_date.toLowerCase());
        String[] words = buffer.split(" " ,3 );
        int day , year ;
        int new_day=0 ,  new_year=0 ;
        String new_month="";

        switch (words[0])
        {
            case "jan" :
            case "january" :
                    day = Integer.parseInt(words[1]);
                    year = Integer.parseInt(words[2]);

                    if (day > 31)
                    {
                        System.out.print("Following Month does not have more than 31 days");
                        System.exit(0);
                    }       
                    if (day + 7 > 31)
                    {
                            new_month = new String("FEB");
                            new_day = (day+7) % 31;
                            new_year = year;
                    }         
                    else
                    {
                        new_day = day + 7 ;
                        new_month = new String("Jan");
                        new_year = year;
                    }
                    break;

            case "feb":
            case "february" :
                    day = Integer.parseInt(words[1]);
                    year = Integer.parseInt(words[2]);

                    if (year % 4 == 0)
                    {

                        if (day > 29 )
                        {
                            System.out.print("Following Month has only 29 days.!!!");
                            System.exit(0);
                        }
                        if (day + 7 > 29)
                        {
                            new_month = new String("MARCH");
                            new_day = (day+7) % 29;
                            new_year =year;
                        }
                        else
                        {
                            new_day = day + 7;
                            new_month = new String("FEB");
                            new_year = year;
                        }
                    }
                    else{

                        if (day > 28)
                        {
                            System.out.print("Following Month has only 28 days.!!!");
                            System.exit(0);
                        }
                        if (day + 7 > 28)
                        {
                            new_month = new String("MARCH");
                            new_day = (day+7) % 28;
                            new_year = new_year;
                        }
                        else
                        {
                            new_day = day + 7;
                            new_month = new String("FEB");
                            new_year = year;
                        }
                    }
                    break;

            case "march":
                    day = Integer.parseInt(words[1]);
                    year = Integer.parseInt(words[2]);

                    if (day > 31)
                    {
                        System.out.print("Following Month does not have more than 31 days");
                        System.exit(0);
                    }     

                    if (day + 7 > 31)
                    {
                            new_month = new String("APR");
                            new_day = (day+7) % 31;
                            new_year = year;
                    }         
                    else
                    {
                        new_day = day + 7 ;
                        new_month = new String("MARCH");
                        new_year = year;
                    }
                               
                    break;

            case "april":
            case "apr" :
                    day = Integer.parseInt(words[1]);
                    year = Integer.parseInt(words[2]);

                    if (day > 30)
                    {
                        System.out.print("Following Month could not have more than 30 days");
                        System.exit(0);
                    }         

                    if (day + 7 > 30)
                    {
                            new_month = new String("MAY");
                            new_day = (day+7) % 30;
                            new_year = year;
                    }         
                    else
                    {
                        new_day = day + 7 ;
                        new_month = new String("APR");
                        new_year = year;
                    }
                           
                    break;

            case "may":
                    day = Integer.parseInt(words[1]);
                    year = Integer.parseInt(words[2]);

                    if (day > 31)
                    {
                        System.out.print("Following Month could not have more than 31 days");
                        System.exit(0);
                    }       

                     if (day + 7 > 31)
                    {
                            new_month = new String("JUNE");
                            new_day = (day+7) % 31;
                            new_year = year;
                    }         
                    else
                    {
                        new_day = day + 7 ;
                        new_month = new String("MAY");
                        new_year = year;
                    }         
                    break;

            case "june":
                    day = Integer.parseInt(words[1]);
                    year = Integer.parseInt(words[2]);

                    if (day > 30)
                    {
                        System.out.print("Following Month could not have more than 30 days");
                        System.exit(0);
                    }                

                     if (day + 7 > 30)
                    {
                            new_month = new String("JULY");
                            new_day = (day+7) % 30;
                            new_year = year;
                    }         
                    else
                    {
                        new_day = day + 7 ;
                        new_month = new String("JUNE");
                        new_year = year;
                    }
                    break;

            case "july":
                    day = Integer.parseInt(words[1]);
                    year = Integer.parseInt(words[2]);

                    if (day > 31)
                    {
                        System.out.print("Following Month could not have more than 31 days");
                        System.exit(0);
                    }                

                     if (day + 7 > 31)
                    {
                            new_month = new String("AUG");
                            new_day = (day+7) % 31;
                            new_year = year;
                    }         
                    else
                    {
                        new_day = day + 7 ;
                        new_month = new String("JULY");
                        new_year = year;
                    }
                    break;

            case "august":
            case "aug":
                    day = Integer.parseInt(words[1]);
                    year = Integer.parseInt(words[2]);

                    if (day > 31)
                    {
                        System.out.print("Following Month could not have more than 31 days");
                        System.exit(0);
                    }   

                    if (day + 7 > 31)
                    {
                            new_month = new String("SEP");
                           new_day = (day+7) % 31;
                           new_year = year;
                    }         
                    else
                    {
                        new_day = day + 7 ;
                        new_month = new String("AUG");
                        new_year = year;
                    }             
                    break;

            case "september":
            case "sep":
                    day = Integer.parseInt(words[1]);
                    year = Integer.parseInt(words[2]);

                    if (day > 30)
                    {
                        System.out.print("Following Month could not have more than 30 days");
                        System.exit(0);
                    } 

                    if (day + 7 > 30)
                    {
                            new_month = new String("OCT");
                            new_day = (day+7) % 30;
                            new_year = year;
                    }         
                    else
                    {
                        new_day = day + 7 ;
                        new_month = new String("SEP");
                        new_year = year;
                    }               
                    break;

            case "october":
            case "oct":
                    day = Integer.parseInt(words[1]);
                    year = Integer.parseInt(words[2]);

                    if (day > 31)
                    {
                        System.out.print("Following Month could not have more than 31 days");
                        System.exit(0);
                    }         

                    if (day + 7 > 31)
                    {
                            new_month = new String("NOV");
                            new_day = (day+7) % 31;
                            new_year = year;
                    }         
                    else
                    {
                        new_day = day + 7 ;
                        new_month = new String("OCT");
                        new_year = year;
                    }       
                    break;

            case "nov":
            case "november":
                    day = Integer.parseInt(words[1]);
                    year = Integer.parseInt(words[2]);

                    if (day > 30)
                    {
                        System.out.print("Following Month could not have more than 30 days");
                        System.exit(0);
                    }       

                    if (day + 7 > 30)
                    {
                            new_month = new String("DEC");
                            new_day = (day+7) % 30;
                            new_year = year;
                    }         
                    else
                    {
                        new_day = day + 7 ;
                        new_month = new String("NOV");
                        new_year = year;
                    }         
                    break;

            case "dec":
            case "december":
                    day = Integer.parseInt(words[1]);
                    year = Integer.parseInt(words[2]);

                    if (day > 30)
                    {
                        System.out.print("Following Month could not have more than 30 days");
                        System.exit(0);
                    }       

                    if (day + 7 > 30)
                    {
                            new_month = new String("JAN");
                            new_day = (day+7) % 30;
                            new_year = year + 1;
                    }         
                    else
                    {
                        new_day = day + 7 ;
                        new_month = new String("DEC");
                        new_year = year;
                    }         
                    break;

            default :
                    System.out.print("Invalid Format or Incorrect Spelling!!!!");
                    System.exit(0);
        }
        display_result(new_year,new_day,new_month,words);
        
    }

    void display_result(int year , int day , String month , String[] words)
    {
        final_dt = new String(month + " " + day + " " + year);

        System.out.println("Today's date is "+words[0]+" "+words[1]+","+words[2]);
        System.out.println("Today's day is "+ words[1]);
        System.out.println("Next Week's day is "+ day);
        System.out.println("Next Week's date is "+ final_dt);
    }
}

class demo
{
    public static void main(String args[])
    {
        opt o = new opt();
        o.get_input();
    }
}