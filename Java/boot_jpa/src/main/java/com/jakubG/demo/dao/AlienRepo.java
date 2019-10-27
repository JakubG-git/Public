package com.jakubG.demo.dao;

import org.springframework.data.jpa.repository.JpaRepository;

import com.jakubG.demo.model.Alien;

public interface AlienRepo extends JpaRepository<Alien, Integer>{


}
