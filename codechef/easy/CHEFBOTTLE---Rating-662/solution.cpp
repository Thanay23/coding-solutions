import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		int T = sc.nextInt();
		
		while(T-->0){
		    
		    int N = sc.nextInt();
		    int X = sc.nextInt();
		    int K = sc.nextInt();
		    
		    if(X>K){
		        System.out.println(0);
		    }
		    else if(N*X <=K){
		        System.out.println(N);
		    }
		    else{
		        System.out.println(K/X);
		    }
		    
		}
		

	}
}
