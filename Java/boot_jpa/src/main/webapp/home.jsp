<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Alien</title>
</head>
<body>
	<h1>addAlien</h1>
	<form action="addAlien">
		<input type ="text" name="aid"><br>
		<input type ="text" name="aname"><br>
		<input type ="text" name="tech"><br>
		<input type ="submit"><br>
	</form>
	<h1>deleteAlien</h1>
	<form action="deleteAlien">
		<input type ="text" name="aid"><br>
		<input type ="submit"><br>
	</form>
	<h1>updateAlien</h1>
	<form action="updateAlien">
		<input type ="text" name="aid"><br>
		<input type ="text" name="aname"><br>
		<input type ="text" name="tech"><br>
		<input type ="submit"><br>
	</form>
	
	
	
	
	<h1>getAlien turned off</h1>
	<form action="getAlien">
		<input type ="text" name="aid"><br>
		<input type ="submit"><br>
	</form>
</body>
</html>