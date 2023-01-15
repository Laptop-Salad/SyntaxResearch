import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner myScanner = new Scanner(System.in);
        String message = myScanner.nextLine();
        
        while (message.equals("cat") == false) {
            message = myScanner.nextLine();
        }
        
        System.out.println("CATS!");
    }
}
