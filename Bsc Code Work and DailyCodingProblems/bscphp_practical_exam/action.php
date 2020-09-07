<?php
// define variables and set to empty values
$username = $email = $password = "";


if ($_SERVER["REQUEST_METHOD"] == "POST") {
  if (empty($_POST["Username"])) {
    $nameErr = "Name is required";
  } else {

    $username = test_input($_POST["name"]);
  }

  if (empty($_POST["email"])) {
    $emailErr = "Email is required";
  } else {
    $email = test_input($_POST["email"]);
if (!filter_var($email, FILTER_VALIDATE_EMAIL)) {
  $emailErr = "Invalid email format";
}
  }

  
  if (empty($_POST["password"])) {
    $password = "Password is required";
  } else {
    $password = test_input($_POST["gender"]);
  }
}
?>