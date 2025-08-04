package Assignment.Java;

import java.util.Scanner;

public class Input_from_user_Array
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
        for(int i=0;i<size;i++)
        {
            System.out.print(array[i]+" ");
        }
        sc.close();
    }


}
