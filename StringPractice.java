
    
import java.util.Scanner;

public class StringPractice {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter your name: ");
        String name = sc.nextLine();

        // Length
        System.out.println("Length: " + name.length());

        // Uppercase
        System.out.println("Uppercase: " + name.toUpperCase());

        // Lowercase
        System.out.println("Lowercase: " + name.toLowerCase());

        // First character
        System.out.println("First character: " + name.charAt(0));

        // Check if contains 'a'
        System.out.println("Contains 'a': " + name.contains("a"));

        // Replace character
        System.out.println("Replace a with @: " + name.replace("a", "@"));

        sc.close();
    }
}