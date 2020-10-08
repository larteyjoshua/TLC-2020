public class Hello {
public static void main (String[] args){
private String greeting = "";
private String target = "";
public void setGreeting ( String greeting ) {
this.greeting =greeting;
}
public void setTarget(String target) {
this.target = target;
}
public String greet(){
return greeting + " " + target;
}
}
}
