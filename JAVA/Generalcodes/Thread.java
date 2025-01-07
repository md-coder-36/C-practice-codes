// error showing code :
// class Thread {

// static String a[];

// public static void main(String[] args) {
// Thread.currentThread().setName("CHANGED");
// m1();
// }

// static void m1() {
// m2();
// }

// static void m2() {
// m3();
// }

// static void m3() {
// System.out.println("value : "a[0]);
// }

// }

// This code methods one by one stored as LIFO in thread stack.
// so arrar in last method.
// and code show error at first.
//
// https://docs.oracle.com/javase/8/docs/api/java/lang/Thread.html#:~:text=A%
// 20thread%20is%20a%20thread,to%20threads%20with%20lower%20priority.
//

// What is thread ??
// A Thread is a very light-weighted process, or we can say the smallest part of
// the process
// that allows a program to operate more efficiently by running multiple tasks
// simultaneously.

// what is heap :
// Heap space is used by java runtime to allocate memory to Objects and JRE
// classes. in RAM
// we create an object, it’s always created in the Heap space.
// Heap memory is allocated to objects at runtime and these objects have global
// access.
// Garbage Collection runs on the heap memory to free the memory used by objects
// that don’t have any reference.
// Any object created in the heap space has global access and can be referenced
// from anywhere of the application.
// Heap memory is divided into Young-Generation, Old-Generation etc,

// What is stack space :Store methods of class in LIFO space.
//
// Whenever an object is created, it’s always stored in
// the Heap space and stack memory contains the reference to it.
// Stack memory only contains local primitive variables and reference variables
// to objects in heap space.
