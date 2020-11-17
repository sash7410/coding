/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
// import java.math.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
public class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		try{
            BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
            PrintWriter ot=new PrintWriter(System.out);
            int t=Integer.parseInt(br.readLine().trim());
            // int total=0;
            while(t-->0)
            {
                int n=Integer.parseInt(br.readLine().trim());    
                int a[]=new int[n];
                String s[]=br.readLine().trim().split(" ");
                for(int i=0;i<n;i++)
                a[i]=Integer.parseInt(s[i]);
                ot.println(find(a,n));

               

            }
            ot.close();
            br.close();
            
        } catch(Exception e){
            System.err.println("ERROR");
            return;
        }
    }
    public static int find(int a[],int n){
       boolean bool=true;
       Set<Integer> set=new HashSet<>();
    //    int count=n;
       for(int i=0;i<n;i++)
       {
            if(a[i]==0)
            bool=false;
            set.add(a[i]);
       }
       if(bool)
       return set.size();
       return set.size()-1;
    }
    
}
    
