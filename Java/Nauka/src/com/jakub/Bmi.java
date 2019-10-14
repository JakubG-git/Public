package com.jakub;
public class Bmi 
{
	public void calcBmi(float weight, float height)
	{
		/*
		underweight <18.5
		between - good;
		25 >= overweight
		*/
		 float _bmi;
		 _bmi = (weight / (height * height));
		if (_bmi <18.5) 
		{
			System.out.println("Masz niedowage, twoje bmi to:" +_bmi);
		}
		else if(_bmi >= 25.0)
		{
			System.out.println("Masz nadwage, twoje bmi to:" +_bmi);
		}
		else 
		{
			System.out.println("Jesteœ zdrowy/a, twoje bmi to:" +_bmi);
		}
		
	}
}
