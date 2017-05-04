<?php
	session_start();
	require('db.php');
	if (isset($_POST['username'])){
		$username = stripslashes($_REQUEST['username']);
		$username = mysqli_real_escape_string($con,$username);
		$password = stripslashes($_REQUEST['password']);
		$password = mysqli_real_escape_string($con,$password);
		//Checking is user existing in the database or not
		$saltquery = "SELECT `salt` FROM `users` WHERE username='$username'";
		$salt = mysqli_query($con,$saltquery) or die(mysql_error());
		$checkPass = crypt($password, $salt);
		$query = "SELECT * FROM `users` WHERE username='$username' and password='$checkPass'";
		$result = mysqli_query($con,$query) or die(mysql_error());
		if($rows == 1){
			$_SESSION['username'] = $username;
			header("Location: exclusive.php");
		} else {
			echo "<div class='form'>
				<h3>Username/password is incorrect.</h3>
				<br/>Click here to <a href='login.php'>Login</a></div>";
		}
	} else {
?>

<!DOCTYPE html>
<html>
	<head>
		<meta charset="utf-8">
		<title>Login</title>
		<link rel="stylesheet" href="style.css" />
	</head>

	<body>
		<div class="form">
			<h1>Log In</h1>
				<form action="" method="post" name="login">
					<input type="text" name="username" placeholder="Username" required />
					<input type="password" name="password" placeholder="Password" required />
					<input name="submit" type="submit" value="Login" />
				</form>
			<p>Not registered yet? <a href='registration.php'>Register Here</a></p>
		</div>
	<?php } ?>
	</body>
</html>
