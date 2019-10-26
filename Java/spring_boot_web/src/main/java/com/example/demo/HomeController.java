package com.example.demo;

import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.servlet.ModelAndView;

@Controller
public class HomeController {
	@RequestMapping(path="/home")
	public ModelAndView home(Alien alien) {
		ModelAndView mView = new ModelAndView();
		mView.addObject("obj", alien);
		
		mView.setViewName("home");
		return mView;
	}
	
}
