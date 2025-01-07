public class CommandLineCalculator{
    public static void main(String[] args){
    
    int numOne = args[0];
    int numTwo = args[1];
    
    add(numOne, numTwo) {
        result = numOne + numTwo;
        System.out.println("{numOne} + {numTwo} = {result}");
    }
    
    subtract(numOne, numTwo) {
        result = numOne - numTwo;
        System.out.println("{numOne} - {numTwo} = {result}");
    }
    
    multiply(numOne, numTwo) {
        result = numOne * numTwo;
        System.out.println("{numOne} * {numTwo} = {result}");
    }
    
    divide(numOne, numTwo) {
        result = numOne / numTwo;
        System.out.println("{numOne} / {numTwo} = {result}");
    }
    }
    }