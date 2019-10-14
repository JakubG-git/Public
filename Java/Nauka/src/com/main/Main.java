package com.main;
import com.jakub.*;
import java.util.Scanner;

public class Main {

	private static Scanner scan;
	public static void main(String[] args) {
		Bmi BMI = new Bmi();
		scan = new Scanner(System.in);
	    System.out.println("Podaj swoj¹ wage[kg]:");
	    float weight = scan.nextFloat();	    
	    System.out.println("Podaj swój wzrost[m]:");
	    float height = scan.nextFloat();
		BMI.calcBmi(weight, height);
	}

}
