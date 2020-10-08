import Sub.Trade;
import java.util.*;
public class Account {
    private int totalTrade;
    private List<Trade> tradeList = new ArrayList<Trade>();

    public Account(){
        this.totalTrade=0;
    }
    public Account(int totalTrade){
        this.totalTrade= totalTrade;
    
    }
    public void setTotalTrade(int totalTrade){
        this.totalTrade=totalTrade;
    }
    public int getTotalTrade(){
        return (this. totalTrade);
    }
    public void incrementTotalTrade(){
        this.totalTrade ++;
    }
    public void addNewTrade(Trade trade)
    {
        this.tradeList.add(trade);
    }

}