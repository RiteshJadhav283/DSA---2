package Assignment.Java;

import java.util.Scanner;

public class Sum_and_Avg
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

        int sum=0;
        System.out.print("Elements in the array: ");
        for(int i=0;i<size;i++)
        {
            System.out.print(array[i]+" ");
        }

        for(int i=0;i<size;i++)
        {
            sum=sum+array[i];
        }
        System.out.println("\nSum of the array: "+sum);

        System.out.println("Average of the Array: "+(sum/size));
        sc.close();
    }

}
