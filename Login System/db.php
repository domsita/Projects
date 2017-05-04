<?php
  $dbServer = "localhost";
  $dbUser = "root";
  $dbPass = "root";
  $database = "dbtest";
  // Enter your Host, username, password, database below.
  $con = mysqli_connect($dbServer, $dbUser, $dbPass, $database);
  // Check connection
  if (mysqli_connect_errno()) {
    echo "Connection Error.";
    // $errLog = fopen("errlog.txt", "a");
    // $errEntry = date("Y-m-d h:i:sa") . mysqli_connect_error();
    // fwrite($errLog, $errEntry);
    // fclose($errLog);
  }
?>
