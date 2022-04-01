import java.util.Scanner;

public class Main
{
public  static void main (String[] args) {
    {
          
          Scanner in = new Scanner(System.in);
          System.out.println("enter temp in fahrenheit");
          double fahrenheit = in.nextFloat();
          
          double celsius = ((fahrenheit -32)/1.8);
          System.out.println("Temperature in celsius is "+ celsius);
         
    }
    
}
}