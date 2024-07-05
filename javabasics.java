import java.util.Arrays;

public class javabasics {
    /**
     * @param args
     */
    public static void main (String args []){
        System.out.println("hello world!");// line space
        System.out.println("hello world!");
        System.out.println("hello world!");
        System.out.print("hello world!\n"); //line space


       /* this will print the memory address of the array//
       
       int[] numbers = new int[30];
        System.out.println(numbers); */

        int[]numbers = new int [30];
        Arrays.fill(numbers, 0, 10 ,13); //fill the array with 5    
        Arrays.fill(numbers, 11 , 13 , 20 );
        for (int i=0; i < numbers.length; i++) {
            System.out.print(numbers[i]+" ");
            // there is space character written with it so it can add space after every number.
        }
        
    }
}
