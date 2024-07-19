<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    
    <title>Contact Form</title>
    <style>
        .error {color: green;}
        body {
            font-family: Arial, sans-serif;
            background-color: #f0f0f0;
            padding: 20px;
            margin: 0;
        }
        label {
            font-weight: bold;
        }
    </style>
</head>
<body>

<?php

$name = $email = $message = "";
$nameErr = $emailErr = $messageErr = "";

function test_input($data) {
    $data = trim($data);
    $data = stripslashes($data);
    $data = htmlspecialchars($data);
    return $data;
}


if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $isValid = true;

 
    if (empty($_POST["name"])) {
        $nameErr = "Name is jaruri";
        $isValid = false;
    } else {
        $name = test_input($_POST["name"]);
    }


    if (empty($_POST["email"])) {
        $emailErr = "Email is required";
        $isValid = false;
    } else {
        $email = test_input($_POST["email"]);
        if (!filter_var($email, FILTER_VALIDATE_EMAIL)) {
            $emailErr = "email to daalo";
            $isValid = false;
        }
    }

   
    if (empty($_POST["message"])) {
        $messageErr = "areey message to de do";
        $isValid = false;
    } else {
        $message = test_input($_POST["message"]);
    }

    
    if ($isValid) {
    
        echo "<p>Thank you brother, $name. \n Your message  $message.\n has been received by email id $email.</p>";
        // Reset form values
        $name = $email = $message = "";
    }
}
?>

<h1 color: "red">Contact Form, Fill the details</h1>
<form method="post" action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]);?>">
    <label for="name">Name:</label>
    <input type="text" id="name" name="name" value="<?php echo $name;?>">
    <span class="error">* <?php echo $nameErr;?></span>
    <br><br>

    <label for="email">Email:</label>
    <input type="text" id="email" name="email" value="<?php echo $email;?>">
    <span class="error">* <?php echo $emailErr;?></span>
    <br><br>

    <label for="message">Message:</label>
    <textarea id="message" name="message" rows="5" cols="40"><?php echo $message;?></textarea>
    <span class="error">* <?php echo $messageErr;?></span>
    <br><br>

    <input type="submit" name="submit" value="Submit">
</form>

</body>
</html>