<?php


function sanitizeFormUsername(string $text): string {
    $text = strip_tags($text);
    $text = str_replace(" ", "", $text);
    return $text;
}

function sanitizeFormString(string $text): string {
    $text = sanitizeFormUsername($text);
    $text = ucfirst(strtolower($text));
    return $text;
}


if(isset($_POST['registerButton'])) {
    // Login button was pressed
    $username = sanitizeFormUsername($_POST['registerUsername']);
    $password = strip_tags($_POST['registerPassword']);
    $confirmPassword = strip_tags($_POST['confirmPassword']);
    $firstName = sanitizeFormString($_POST['firstName']);
    $lastName = sanitizeFormString($_POST['lastName']);
    $email = sanitizeFormUsername($_POST['email']);
    $confirmEmail = sanitizeFormUsername($_POST['confirmEmail']);
}

?>
