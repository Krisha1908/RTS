// package com.method_var;

public class MethodDemo2
{

	
	
	public void test() 
    {
		
		System.out.println("test");
	}

	public static boolean isValid()
    {
		

		MethodDemo2 m2 = new MethodDemo2();
		m2.test();
		return true;
	}

	public static int sum(int a, int b)
    {

		isValid();

		return a + b;
	}

	public static void main(String[] args)
    {

		// if source method and dest method both are in same class no need of class name
		// to call static method...
		int ans = sum(100, 200);
		System.out.println("ans =" + ans);

	}
}