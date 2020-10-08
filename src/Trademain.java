
import java.util.ArrayList;
import java.util.*;
import java.util.List;public class Trademain {

    public static void main(String[] args) {
        // write your code here
        List<Trade> trades = new ArrayList<>();

        Trade tr1 = new Trade(101, "T1", "ABV", 400);
        Trade tr2 = new Trade(102, "T2", "ADF", 400);
        Trade tr3 = new Trade(103, "T3", "AQR", 400);


        trades.add(tr1);
        trades.add(tr2);
        trades.add(tr3);
        Collections.sort(trades);
        System.out.println(trades);
        System.out.println(trades.size());
        for (Trade t : trades) {
            System.out.println(t.getId() + " " + t.getSymbol() + " " + t.getPrice() + " " + t.getQuantity());

        }
    }
}
