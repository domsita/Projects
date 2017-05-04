<?php
require('db.php');
// If form submitted, insert values into the database.
if (isset($_REQUEST['username'])){
	// removes backslashes
	$username = stripslashes($_REQUEST['username']);
	//escapes special characters in a string
	$username = mysqli_real_escape_string($con,$username);
	$email = stripslashes($_REQUEST['email']);
	$email = mysqli_real_escape_string($con,$email);
	$password = stripslashes($_REQUEST['password']);
	$password = mysqli_real_escape_string($con,$password);
	$registered = date("Y-m-d H:i:s");
	$salt = random_int(0, 9999);
	$password = crypt($password, (string)$salt);
	$query = "INSERT into `users` (username, password, email, trn_date)
		VALUES ('$username', '$password', '$email', '$salt' '$regustered')";
	$result = mysqli_query($con,$query);
		if($result){
			echo "<div class='form'><h3>SUCCESS!<br/><br/>Click here to <a href='login.php'>Login</a></h3></div>";
		} else {
			echo "<div class='form'><h3>Uh oh... Something went wrong.</h3></div>";
		}
} else { ?>

<!DOCTYPE html>
<html>
	<head>
		<meta charset="utf-8">
		<title>Registration</title>
		<link rel="stylesheet" href="style.css" />
	</head>

	<body>
		<div class="form">
			<h1>Registration</h1>
			<form name="registration" action="" method="post">
				<input type="text" name="username" placeholder="Username" required />
				<input type="email" name="email" placeholder="Email" required />
				<input type="password" name="password" placeholder="Password" required />
				<input type="submit" name="submit" value="Register" />
			</form>
		</div>
<?php } ?>
	</body>
</html>
