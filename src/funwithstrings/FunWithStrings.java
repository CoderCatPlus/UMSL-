/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package funwithstrings;

import java.util.Scanner;

/**
 *
 * @author Megann
 */
public class FunWithStrings {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // This program checks how many times a chacter 
        //shows up in a given string. 
        
        String input, temp;
        char userC; 
        Scanner sc = new Scanner(System.in);
        int size=0;
        int count=0;
        
        //prompt for user to give us a string
        System.out.println("Enter a string below:");
        input = sc.nextLine();
        //prompt for character we are counting
        System.out.println("Enter a chacter below");
        temp =sc.next();
        userC=temp.charAt(0);
        // debugging code 
        //System.out.println(input );
       // System.out.println(userC);
       //end debug
       //count how many times userC occurs in input
       
       while (size<input.length())
       {
           if (userC==input.charAt(size))
           {
               count++;
               size++;
           }
           else
               size++;
       }
       System.out.println("The character "+userC+" appears "+count+" times.");


    }
}
