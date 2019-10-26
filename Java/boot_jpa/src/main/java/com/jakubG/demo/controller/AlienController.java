package com.jakubG.demo.controller;

import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.RequestMapping;

import com.jakubG.demo.model.Alien;

@Controller
public class AlienController {
	@RequestMapping(path = "/")
	public String home() {
		return "home.jsp";
	}
	@RequestMapping("/addAlien")
	public String addAlien(Alien alien) {
		return "home.jsp";
	}

}
