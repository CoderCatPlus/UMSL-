/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package mymethods;

import java.util.Scanner;
import java.util.StringTokenizer;

/**
 *
 * @author Joshua Wilkeson
 * @author Megann Welch
 */
public class mymethods{

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) 
    {
        // product of values excluding negatives
        prodn();
        // Finds first and last occurence of 12
        findt();
        // Min, Max and Avg 
        mma();
        // letter grade
        letrgrade();
     
    }

    public static void findt() 
    {
        //int[] list = new int[100];
        System.out.println("Now we are in the method named findt");
        System.out.println("Please enter your set of numbers below.");
        Scanner scan = new Scanner(System.in);
         String s = scan.nextLine();
       StringTokenizer st = new StringTokenizer(s);
       int tokens = st.countTokens();
        int first=0, last=0;
        boolean bool = false;
        for (int i = 0; i < tokens  ; i++)
        {
           
           
            //try {
               // r = scan.nextInt();
                String q = st.nextToken();
            int r = Integer.valueOf(q);
            //} catch (Exception e) {
             //   System.out.println("Couldn't parse input, please try again.");
            //    break;
            //}
           
            if (r == 12 && bool ==false)
            {
                
               // if (bool == false)
               
                    first = i;
                //  System.out.println("First occurence of the number 12: "+(first+1));  
                    bool = true;
               
            }    
                else if (r==12 && bool==true) 
                {
                    last = i;
                
                }
            
            
        }    
            System.out.println("First occurence of the number 12: "+(first+1));
            System.out.println("The last occurence of the number 12: "+(last+1));
            
           //System.out.println("The last occurence of the number 12: "+(last));  
       
    }

    public static void prodn() 
    {
        //int[] list = new int[100];
        System.out.println("Now we are in the method named prodn");
         Scanner scan = new Scanner(System.in);
         String s = scan.nextLine();
         StringTokenizer st = new StringTokenizer(s);
       int tokens = st.countTokens();
       //System.out.println(tokens);
       int t=1;
       
       for ( int i=0; i<tokens; i++)
       {
           String q = st.nextToken();
           int r = Integer.valueOf(q);
           
           if (r>0)
           {
              t=t*r;
             // System.out.println("Result with " + r + ": " + t);
           }  
           else
           {    
            System.out.println("Note: "
                       + r + " was negative, and has not been included.");
           }
       }
       System.out.println("Total: "+t);
       
       //for (int i = 0, r, t = 1; i < tokens; i++)
       //{
        
              
            //} catch (Exception e) {
            //    System.out.println("Couldn't parse input, please try again.");
             //   break;
            //}
           // if (r < 0) {
            //   
           // } 
            //else if (r == 0) {
             //   System.out.println("Input equals 0, exiting..");
             //   break;
            //} 
           // else {
                //list[i] = r;
            //    t *= r;
            //  );
          //  }
        //}
    }
    
    public static void mma()
    {
       // here we will take the minimum, maximum and average for a set of numbers
       System.out.println("Now we are in the method named mma");
        Scanner scan = new Scanner(System.in);
         String s = scan.nextLine();
       StringTokenizer st = new StringTokenizer(s);
       int tokens = st.countTokens();
       int min = Integer.MAX_VALUE;
       int max = Integer.MIN_VALUE;
       int avg = 0;
       
       for (int i=0; i<tokens; i++)
       {
           String q = st.nextToken();
           int r = Integer.valueOf(q);
           
           if (r<min && r>max)
           {
               min=r;
               max=r;
           }    
           
           else if (r<min)
           {
               min=r;
           }
           else if (r>max)
           {
               max=r;
           } 
           avg+=r;
       }    
      System.out.println("The Min is: "+min);
      System.out.println("The Max is: "+max);
      System.out.println("The Average is: "+(avg/tokens));
       
    }        
    
    public static void letrgrade ()
    {
     // here we will give the letter grades for a set of numerical grades
        System.out.println("Now we are in the method named letrgrade");
         Scanner scan = new Scanner(System.in);
         String s = scan.nextLine();
       StringTokenizer st = new StringTokenizer(s);
        int tokens = st.countTokens();
     // we will use a switch to test for the letter grade part ?
     //nope, ifs and else if seem to be better.
     int a=0, b=0, c=0, d=0, f=0;
     
      for (int i=0; i<tokens; i++)
       {
           String q = st.nextToken();
           int r = Integer.valueOf(q);
           
           if(r<=100 && r>=90)
           {
               //its an A
               a++;
           }
           else if (r<=89 && r>=70)
           {
               //its a B
               b++;
           }
           else if (r<=69 && r>=50)
           {
               //its a C
               c++;
           }
           else if (r<=49 && r>=35)
           {
               //its a D
               d++;
           }
           else if (r<=34)
           {
               //its an F
               f++;
           }
       }
      System.out.println("Number of A's: "+a);
      System.out.println("Number of B's: "+b);
      System.out.println("Number of C's: "+c);
      System.out.println("Number of D's: "+d);
      System.out.println("Number of F's: "+f);
    }  
    
          
}

    