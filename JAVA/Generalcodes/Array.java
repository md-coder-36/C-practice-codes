/*
 * Array is takes type of size of values.
 * byte--->short--->int--->long--->float--->double
 * char------------>
 * in int array you can take byte/short/char for declared size of array.
 */

class Array {
    public static void main(String[] args) {

        // Create a new array.

        // int array[];
        // array = new int[5]; //szie is compalsary in java

        // int array[] = new int[0]; -->compile & run successfully, but useless array.
        // int array[] = new int['a']; -->compile & run successfully, takes size as char
        // ascii value.
        // int array[] = new int[-5]; -->compile successfully,no run code,give size in
        // int, -5 is integer size.

        // int array[] = new int[2147483647]; --> maxsize of array,int maxsize is array
        // maxsize.

        // int []array = new int[5]; --> it is right.
        // int array[] = new int[5];

        int array[] = { 1, 2, 3, 4, 5 };
        String name = "Meet";

        // String name2[] = { "Meet", "Harsh", "Aditya" };
        // System.out.println(name2); // print string docs.

        System.out.println(array); // print array.( [I@7adf9f5f )
        System.out.println("Array size : " + array.length); /// In array, length is variable.
        System.out.println("String length : " + name.length()); // In String,length is Method.

        // for (int i = 0; i < array.length; i++) {
        // System.out.println(array[i]);
        // }

        // Another way to print array. [for-each loop]
        for (int i : array) {
            System.out.println(i);
        }

        Display d1 = new Display(array); // pass array as constructor args.

        // d1.displayValue(array); // pass array as function args..
        // array is address of first element.

        int[] update = d1.displayValue();
        for (int i : update) {
            System.out.println("modifying data : " + update[i]);
        }

    }
}

class Display {
    private int data[];

    public Display(int d[]) {
        this.data = d;
    }

    public int[] displayValue() { // int[] : return entire array.
        for (int i : data) {
            data[i] += 1; // modify a data.
        }
        return data;
    }
}

// [I@7adf9f5f give info. by compiler.
// [ : define this isc array.
// I : define this is data type.
// 7adf9f5f : address of array at stored.