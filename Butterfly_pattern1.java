import java.util.*;
class pattern
{
	public static void main(String arg[])throws Exception
	{
		Scanner sc = new Scanner(System.in);
		int size,i,j,space_counter,star_counter=1;
		System.out.println("Enter the size for the butterfly");
		size=sc.nextInt();
		if(size%2!=0)
    	{
			System.out.println("Please enter even number");
			return;
		}
		space_counter=size/2;
		star_counter=size/2;
		for(i=1; i<=size; i++){
			for(j=star_counter; j<=size/2; j++){
				System.out.print("*");
			}
			for(j=1; j<=(space_counter-1)*2; j++){
				System.out.print(" ");
			}
			for(j=star_counter; j<=size/2; j++){
				System.out.print("*");
			}
			System.out.println();
			if(i<size/2)
				space_counter--;
		    else if(i>=size/2+1)
				space_counter++;
			if (i<size/2)
				star_counter--;
			else if(i>=size/2+1)
				star_counter++;
		}
	}
}