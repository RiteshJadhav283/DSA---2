package Assignment.Java;

import java.util.Scanner;

public class Find_an_element_in_the_array
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of the array: ");
        int size=sc.nextInt();
        int[] array=new int[size];
        System.out.print("Insert the Elements in the array: ");
        for(int i=0;i<size;i++)
        {
            array[i]=sc.nextInt();
        }
        System.out.print("Enter the Elements you want to find in the array: ");
        int a=sc.nextInt();
        boolean b=false;
        for(int i=0;i<size;i++)
        {
            if(array[i]==a)
            {
                System.out.print("Eleement"+a+" is present at the index "+i);
                b=true;
                break;
            }
        }
        if(!b)
        {
            System.out.println("Element not present in the array");
        }
        sc.close();
    }
}
