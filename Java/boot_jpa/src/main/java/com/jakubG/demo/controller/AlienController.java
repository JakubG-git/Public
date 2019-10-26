package com.jakubG.demo.controller;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.servlet.ModelAndView;

import com.jakubG.demo.dao.AlienRepo;
import com.jakubG.demo.model.Alien;

@Controller
public class AlienController {
	@Autowired
	AlienRepo repo;
	@RequestMapping(path = "/")
	public String home() {
		return "home";
	}
	@RequestMapping(path ="/addAlien")
	public String addAlien(Alien alien) {
		repo.save(alien);
		return "home";
	}
	@RequestMapping(path ="/getAlien")
	public ModelAndView getAlien(@RequestParam int aid) {
		ModelAndView mView = new ModelAndView("showAlien");
		Alien alien = repo.findById(aid).orElse(new Alien());
		System.out.println(repo.findByAidGreaterThan(101));		
		System.out.println(repo.findByTech("Java"));
		System.out.println(repo.findByTechSorted("Java"));	
		
		mView.addObject(alien);
		return mView;
	}
	@RequestMapping(path = "/deleteAlien")
	public ModelAndView deleteAlien(@RequestParam int aid) {
		ModelAndView mView = new ModelAndView("home");
		Alien alien = repo.findById(aid).orElse(new Alien());
		repo.delete(alien);
		return mView;
	}
	@RequestMapping(path = "/updateAlien")
	public ModelAndView updateAlien(Alien alien) {
		ModelAndView mView = new ModelAndView("home");
		repo.save(alien);
		return mView;
	}

}
