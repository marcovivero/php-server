<?php
    include('auth/login-handler.php');
    include('auth/register-handler.php');
?>

<html>
<head>
<title>Register for my PHP page!!!</title>
</head>
<body>
    <div id="inputContainer"> 
                    <form id="loginForm" action="register.php" method="POST">
            <h2>Login to your account!</h2>
            <p>
                <label for="loginUsername">Username</label>
                <input id="loginUsername" name="loginUsername" type="text" required>
            </p>
            
            <p>
                <label for="loginPassword">Password</label>
                <input id="loginPassword" name="loginPassword" type="password" required>
            </p>

            <button type="submit" name="loginButton">Login</button>
        </form>
    

        <form id="registerForm" action="register.php" method="POST">
            <h2>Create your free account!</h2>
            <p>
                <label for="registerUsername">Username</label>
                <input id="registerUsername" name="registerUsername" type="text" placeholder="e.g.marco_vivero" required>
            </p>
            
            <p>
                <label for="firstName">First Name</label>
                <input id="firstName" name="firstName" type="text" placeholder="e.g. Marco" required>
            </p>
            
            <p>
                <label for="lastName">Last Name</label>
                <input id="lastName" name="lastName" type="text" placeholder="e.g. Vivero" required>
            </p>
            
            <p>
                <label for="email">Email</label>
                <input id="email" name="email" type="email" placeholder="e.g. marco_vivero@email_server.com" required>
            </p>
            
            <p>
                <label for="confirmEmail">Confirm Email</label>
                <input id="confirmEmail" name="confirmEmail" type="email" placeholder="e.g. marco_vivero@email_server.com" required>
            </p>

            <p>
                <label for="registerPassword">Password</label>
                <input id="registerPassword" name="registerPassword" type="password" placeholder="e.g. your_password" required>
            </p>

            <p>
                <label for="confirmPassword">Confirm Password</label>
                <input id="confirmPassword" name="confirmPassword" type="password" placeholder="e.g. your_password" required>
            </p>

            <button type="submit" name="registerButton">Register</button>
        </form>
    


    </div>   
</body>
</html>
