package io.turntabl;

    public class Main {
        public static void main(String[] args) {
            int ar[] = {1, 2, 3, 4, 5};
            try {
                for (int i = 0; i <= 5; i++)
                    System.out.println(ar[i]);
            }
            catch (ArrayIndexOutOfBoundsException e){
                System.out.println("Array out of Bound");
            }


        }
        // The exception is thrwon because the array bound is from 1 to 4
        //so removing the equal to sign will fix the array bound exception.
}
