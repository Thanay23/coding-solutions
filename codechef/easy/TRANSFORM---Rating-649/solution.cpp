import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		
		int T = sc.nextInt();
		
		while(T-->0){
		    int X = sc.nextInt();
		    
		    int a = X % 3; 
		    
		    if(a==1){
		        System.out.println("HUGE");
		    }
		    else if(a==2){
		        System.out.println("SMALL");
		    }
		    else{
		        System.out.println("NORMAL");
		    }

		}

	}
}
