/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package runmymethods;

/**
 *  @author Joshua Wilkeson
 * @author Megann Welch
 */

    import java.util.Scanner;

public class RunMyMethods {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        //This program will display a menu and use these menu options 
        // to call methods from the MyMethods file
        //This was created and coded by Megann and Joshua. 
        
        //set up my imput
        Scanner stuff= new Scanner(System.in);
        int choice; 
        //display menu 
        
        do 
        { 
           System.out.println("Menu:");
           System.out.println("1: Product, No Negatives Please.");
           System.out.println("2: Find 12, Like with Waldo but Numbers");
           System.out.println("3: Min, Max, and Average");
           System.out.println("4: Letter Grade");
           System.out.println("5: Exit *Waves Bye* ");
           System.out.println("Please Enter Your Choice Below.");
           choice = stuff.nextInt();
           
           //choice has been made now we compare 
           //and call the corresponding methods
           switch (choice)
           {
               case 1: 
               {
                   //jump into method for product no neg
                   System.out.println("You chose option 1.");
                   mymethods.mymethods.prodn();
                   break;
               }
               case 2:
               {
                   //jump into method to find 12
                   System.out.println("You chose option 2.");
                   mymethods.mymethods.findt();
                   break;
               }
               case 3:
               {
                   //method for min/max/avg
                   System.out.println("You chose option 3.");
                   mymethods.mymethods.mma();
                   break;
               }
               case 4:
               {
                   //method for letter grade
                   System.out.println("You chose option 4.");
                   mymethods.mymethods.letrgrade();
                   break;
               }
               default:
               {
                   System.out.println("Goodbye.");
                   break; //not required but habit
               }
           }

        } while (choice !=5);
        
        
    }
    
}
