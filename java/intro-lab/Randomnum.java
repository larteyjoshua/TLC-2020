import java.lang.Math;
public class Randomnum {
public static void main (String[] args) {
System.out.println ("Random numbers");
String[] numname ={"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
int rand = (int) (Math.random()*9)+1;
System.out.println(rand);
System.out.println(numname[rand-1]);
}

}

