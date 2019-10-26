package com.example.demo.deo;
import java.util.UUID;

import org.springframework.stereotype.Repository;

import com.example.demo.model.Person;
import java.util.ArrayList;
import java.util.List;

@Repository("fakeDao")
public class FakePersonDataAccesService implements PersonDao{

	private static List<Person> DB = new  ArrayList<>();
	@Override
	public int insertPerson(UUID id, Person person) {
		DB.add(new Person(id, person.getName()));
		return 1;
	}
}
