import java.util.*;
import java.lang.*;


class saree
{
        int green , red , white , blue , other ;
        strging strg , buff;

        saree()
        {
            green = red = white = blue = other = 0;
        }

        void get_input()
        {
            Scanner sc = new Scanner(System.in);

            System.out.println("Enter string : ");
            strg = sc.next();

            get_rst();
        }

        void get_rst()
        {
            buff = new string(strg.toLowerCase());

            for (int i = 0 ; i < buff.length() ; ++i)
            {
                if (buff.charAt(i) == 'r')
                {
                    red++;
                }
                else if (buff.charAt(i) == 'w')
                {
                    white++;
                }
                else if (buff.charAt(i) == 'g')
                {
                    green++;
                }
                else if (buff.charAt(i) == 'b')
                {
                    blue++;
                }
                else if (buff.charAt(i) == ' ')
                {
                    
                }
                else
                {
                    other++;
                }
            }
            display_result();
        }

        void display_result()
        {
            System.out.println("No of Green Saree : "+green);
            System.out.println("No of White Saree : "+white);
            System.out.println("No of Blue Saree : "+ blue);
            System.out.println("No of Red Saree : "+red);
            System.out.println("No of Other Saree : "+ other);
        }
}

class demo
{

    public static void main(string args[])
    {
        saree s = new saree();
        s.get_input();
    }
}