package com.jakubG.demo.controller;

import java.util.List;
import java.util.Optional;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.DeleteMapping;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.PutMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.ResponseBody;
import org.springframework.web.bind.annotation.RestController;
import org.springframework.web.servlet.ModelAndView;

import com.jakubG.demo.dao.AlienRepo;
import com.jakubG.demo.model.Alien;

@RestController
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
	@PostMapping(path ="/alien")
	public Alien addPostAlien(@RequestBody Alien alien) {
		repo.save(alien);
		return alien;
	}
	@DeleteMapping(path = "/aliens")
	public String deletePostAlien(@RequestParam int aid)
	{
		Alien a = repo.getOne(aid);
		repo.delete(a);
		return "deleted";
	}
	@PutMapping(path = "/alien")
	public Alien updatePostAlien(@RequestBody Alien alien)
	{
		repo.save(alien);
		return alien;
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
	@RequestMapping(path = "/aliens")
	@ResponseBody
	public List<Alien> getAliens()
	{
		return repo.findAll();
	}
	@RequestMapping(path = "/alien/{aid}")
	@ResponseBody
	public Optional<Alien> getAlien(@PathVariable("aid") int aid)
	{
		return repo.findById(aid);
	}

}
//@RequestMapping(path ="/getAlien")
//public ModelAndView getAlien(@RequestParam int aid) {
//	ModelAndView mView = new ModelAndView("showAlien");
//	Alien alien = repo.findById(aid).orElse(new Alien());
//	mView.addObject(alien);
//	return mView;
//}
