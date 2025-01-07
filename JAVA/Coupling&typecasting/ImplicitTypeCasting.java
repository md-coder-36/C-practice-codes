
public class ImplicitTypeCasting {

    public static void main(String[] args) {
        int x = 7;
        // automatically converts the integer type into long type
        long y = x;
        // automatically converts the long type into float type
        float z = y;
        System.out.println("Before conversion, int value " + x);
        System.out.println("After conversion, long value " + y);
        System.out.println("After conversion, float value " + z);
    }
}

/*
 * TypeCasting : converts a data type into another data type in both ways
 * manually and automatically. The automatic conversion is done by the compiler
 * and manual conversion performed by the programmer
 * 
 * 
 * 
 * 1.(Up/winding/Implicit typecasting)
 * Widening Casting (automatically) - automatically when a data type with a
 * smaller range is assigned to a data type with a larger range.
 * converting a smaller type to a larger type size
 * no loss of data.
 * byte -> short -> char -> int -> long -> float -> double
 * 
 * (Down/narrowing/Explicit typecasting)
 * Narrowing Casting (manually) - data type with a larger range is assigned to a
 * data type with a smaller range
 * requires explicit syntax and may result in a loss of data if the value
 * exceeds the range of the target data type.
 * converting a larger type to a smaller size type
 * double -> float -> long -> int -> char -> short -> byte
 */
