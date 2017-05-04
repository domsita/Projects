<?php
  require('db.php');
  include("auth.php");
?>

<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <title>Welcome to the CLUB!</title>
    <link rel="stylesheet" href="style.css" />
  </head>

  <body>
    <div class="form">
      <p>Dashboard</p>
      <p>This is an exclusive area only for registered users.</p>
      <p><a href="index.php">Home</a></p>
      <a href="logout.php">Logout</a>
    </div>
  </body>
</html>
