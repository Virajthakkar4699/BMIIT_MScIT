import java.util.*;
class NullData extends Exception
{
    NullData(String s)
    {
        super(s);
    }
}
class OutOfRange extends Exception
{
    OutOfRange(String s)
    {
        super(s);
    }
}
class Result
{
    public static void main(String[] args) throws NullData,OutOfRange
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter your Enrollment Number:");
        int ernum=sc.nextInt();
        sc=new Scanner(System.in);
        System.out.println("Enter your Name:");
        String name=sc.nextLine();
        System.out.println("Enter your marks of subject 1:");
        int m1=sc.nextInt();
        System.out.println("Enter your marks of subject 2:");
        int m2=sc.nextInt();
        System.out.println("Enter your marks of subject 3:");
        int m3=sc.nextInt();
        System.out.println("Enter your marks of subject 4:");
        int m4=sc.nextInt();
    
        countResult(ernum,name,m1,m2,m3,m4);

    }
    static void countResult(int ernum,String name,int m1,int m2,int m3,int m4) throws OutOfRange,NullData
    {
        if(name.equals(""))
                throw new NullData("name is not entered");
        if(m1<0 || m1>100)
                throw new OutOfRange("marks of subject 1 are out of [0-100] range");
        if(m2<0 || m2>100)
                throw new OutOfRange("marks of subject 2 are out of [0-100] range");
        if(m3<0 || m3>100)
                throw new OutOfRange("marks of subject 3 are out of [0-100] range");
        if(m4<0 || m4>100)
                throw new OutOfRange("marks of subject 4 are out of [0-100] range");
        
        int total=m1+m2+m3+m4;
        char grade;
        int per=(total*100)/400;
        if(per>90)
            grade='O';
        else if(per>80)
            grade='A';
        else if(per>70)
            grade='B';
        else if(per>60)
            grade='C';
        else if(per>50)
            grade='D';
        else if(per>40)
            grade='E';
        else
            grade='F';

        System.out.println("\n------------RESULT-------------");
        System.out.println("Enrollment Number : "+ernum);
        System.out.println("Name : "+name);
        System.out.println("Subject 1 marks : "+m1);
        System.out.println("Subject 2 marks : "+m2);
        System.out.println("Subject 3 marks : "+m3);
        System.out.println("Subject 4 marks : "+m4);
        System.out.println("Total marks : "+total);
        System.out.println("Percentage : "+per);
        System.out.println("Grade : "+grade);

    }
}
