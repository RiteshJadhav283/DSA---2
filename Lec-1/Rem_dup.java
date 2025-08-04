import java.util.Scanner;
import java.util.Set;
import java.util.HashSet;

public  class Rem_dup
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the Size of the Array : ");
        int size=sc.nextInt();
        int[] array=new int[size];

        System.out.print("Enter the elements of the Array : ");
        for(int i=0;i<size;i++)
        {
            array[i]=sc.nextInt();
        }


        Set<Integer> Rem_Dup = new HashSet<>();
        for (int i=0;i<array.length;i++)
        {
            Rem_Dup.add(array[i]);
        }
        for (Integer number : Rem_Dup)
        {
            System.out.print(number+" ");
        }
    }
}