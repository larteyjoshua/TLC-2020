import java.util.concurrent.ThreadLocalRandom;
import java.util.*;

public class Randbreak {
public static void main (String [] args) {

int rand;
do { 
rand = ThreadLocalRandom.current().nextInt(-3,3);
System.out.println(rand);
}
while (rand !=0);
}

}

