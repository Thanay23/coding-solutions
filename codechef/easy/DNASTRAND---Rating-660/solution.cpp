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
		    int N = sc.nextInt();
		    String s = sc.next();
		    String p = "" ;
		    
		    for(int j = 0 ; j<N;j++){
		        
		        if(s.charAt(j) == 'A'){
		            p +='T';
		        }
		        else if (s.charAt(j) == 'T'){
		            
		            p +='A';
		        }
		        else if(s.charAt(j) == 'C'){
		            p +='G';
		        }
		        else{
		            p +='C';
		        }
		    }
		    
		    System.out.println(p);
		}

	}
}
