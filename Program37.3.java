// Write a java program which accept two string from user and check whether two strings are equal or not

import java.util.*;

public class Program3
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner (System.in);


        System.out.println("ENter string 1 : ");
        String str1 = sobj.nextLine();

        System.out.println("ENter string 2 : ");
        String str2 = sobj.nextLine();

        StringDemo dobj  = new  StringDemo();

        boolean bRet = false;

        bRet = dobj.Check(str1,str2);

        if(bRet == false)
        {
            System.out.println("both strings not equal");
        }
        else
        {
            System.out.println("both strings are  equal");

        }
    }
}
class StringDemo
{
    
    
    public boolean Check(String str1,String str2)
    {
       for(int iCnt = 0; iCnt < str1.length(); iCnt++)
       {
         if(str1.charAt(iCnt) != str2.charAt(iCnt))
         {
           return false;
         }
       
       }
       return true;
        

    }

}