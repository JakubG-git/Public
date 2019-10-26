package com.jakubG.demo.dao;

import org.springframework.data.repository.CrudRepository;

import com.jakubG.demo.model.Alien;

public interface AlienRepo extends CrudRepository<Alien, Integer>{
	
}
