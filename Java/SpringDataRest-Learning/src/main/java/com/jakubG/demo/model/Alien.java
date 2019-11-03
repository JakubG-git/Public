package com.jakubG.demo.model;

import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.Id;

@Entity
public class Alien {
	@Id
	@GeneratedValue
	private int aid;
	private String nameString;
	private String techString;
	public int getAid() {
		return aid;
	}
	public void setAid(int aid) {
		this.aid = aid;
	}
	public String getNameString() {
		return nameString;
	}
	public void setNameString(String nameString) {
		this.nameString = nameString;
	}
	public String getTechString() {
		return techString;
	}
	public void setTechString(String techString) {
		this.techString = techString;
	}
	@Override
	public String toString() {
		return "Alien [aid=" + aid + ", nameString=" + nameString + ", techString=" + techString + "]";
	}
	
}
