public class Trade implements Comparable<Trade> {

    private double price;
    private String id;
    private String symbol;
    private int quantity;

    public Trade(double price, String id, String symbol, int quantity) {
        this.price = price;
        this.id = id;
        this.symbol = symbol;
        this.quantity = quantity;
    }

    public Trade(String id, String symbol, int quantity) {
        this.id = id;
        this.symbol = symbol;
        this.quantity = quantity;
    }

    public double getPrice() {
        return price;
    }

    public String getId() {
        return id;
    }

    public String getSymbol() {
        return symbol;
    }

    public int getQuantity() {
        return quantity;
    }

    @Override
    public String toString() {
        return "Trade{" +
                "price=" + price +
                ", id='" + id + '\'' +
                ", symbol='" + symbol + '\'' +
                ", quantity=" + quantity +
                '}';
    }

    @Override
    public int compareTo(Trade o) {
        if (this.getId().equals(o.getId())) {
            return 1;
        } else

                return 0;

}

//    @Override
//    public void func() {
//
//    }
}

