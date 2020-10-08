package Sub;
// delcaring class trade
public class Trade{
String id;
String symbol;
int quantity;
double price;

// constructor declaration of Trade
public Trade(String id, String symbol, int quantity, double price)
{
this.id=id;
this.symbol=symbol;
this. quantity=quantity;
this.price=price;
}
public Trade(String id, String symbol, int quantity)
{
this.id=id;
this.symbol=symbol;
this.quantity=quantity;
}

// methods get parameters
public String getID()
{
    return id;
}
public String getSymbol()
{
  return symbol;  
}

public int getQuantity()
{
    return quantity;
}

public double getPrice()
{
    if(price >0){
    return price;
    }
   else {
      return price = 0.00;
   }
}

// String method to override
@Override
public String toString() {
    return("Tade ID = " + this.getID() + ".\nTrade Symbol= " + this.getSymbol() + ".\nTrade Quantity= " + this.getQuantity() + ".\nTrade Price= " + this.getPrice()); 
}
// Main class to test logic. 
public static void main (String[] args){
Trade t1 = new Trade("T1", "APPL", 100, 15.25);
Trade t2 = new Trade("T2", "IBM", 200);
Trade t3 = new Trade("T3", "SKA", 50, -12.3);
System.out.println(t1.toString());
System.out.println(t2.toString());
System.out.println(t3.toString());

}
}
