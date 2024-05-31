import java.util.*;
class pattern
{
	public static void main(String args[])throws Exception
	{
		Scanner sc = new Scanner(System.in);
		int size;
		System.out.println("enter the size");
		size=sc.nextInt();
//--------------UPPER PART OF THE BUTTERFLY-------------------
		for(int i=1;i<=size/2;i++)
		{
			for(int j=1;j<=i;j++)
				System.out.print("*");
			for(int j=1;j<=size-i*2;j++)
				System.out.print(" ");
			for(int j=1;j<=i;j++)
				System.out.print("*");
			System.out.println();
		}
//--------------LOWER PART OF THE BUTTERFLY-------------------
		for(int i=size/2;i>=1;i--)
		{
			for(int j=i;j>=1;j--)
				System.out.print("*");
			for(int j=size-i*2;j>=1;j--)
				System.out.print(" ");
			for(int j=i;j>=1;j--)
				System.out.print("*");
			System.out.println();
		}
	}
}