<?php
	include "conexao.php";

	session_start();
	if(!isset($_SESSION['user']))
	{
		heder('location: index.php');
	}
?>

<!DOCTYPE html>
<html lang="en">

<head>
	<meta charset="utf-8">
	<meta http-equiv="X-UA-Compatible" content="IE=edge">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<!-- The above 3 meta tags *must* come first in the head; any other head content must come *after* these tags -->

	<title>HTML Template</title>

	<link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/4.0.0-beta/css/bootstrap.min.css" integrity="sha384-/Y6pD6FV/Vv2HJnA6t+vslU6fwYXjCFtcEpHbNJ0lyAFsXTsjBbfaDjzALeQsN6M"
	crossorigin="anonymous">
	
	<!-- Google font -->
	<link href="https://fonts.googleapis.com/css?family=Montserrat:400,700%7CVarela+Round" rel="stylesheet">

	<!-- Bootstrap -->
	<link type="text/css" rel="stylesheet" href="css/bootstrap.min.css" />

	<!-- Magnific Popup -->
	<link type="text/css" rel="stylesheet" href="css/magnific-popup.css" />

	<!-- Font Awesome Icon -->
	<link rel="stylesheet" href="css/font-awesome.min.css">

	<!-- Custom stlylesheet -->
	<link type="text/css" rel="stylesheet" href="css/style.css" />
</head>

<body>
	<!-- Header -->
	<header id="home">
		<!-- Background Image -->
		<div class="bg-img" style="background-image: url('lib/img/background1.jpg');">
			<div class="overlay"></div>
		</div>
		<!-- /Background Image -->

		<!-- Nav -->
		<nav id="nav" class="nav-transparent">
			<div class="container">

				<div class="navbar-header">
					<!-- Logo -->
					<div class="navbar-brand">
						<a href="inicio.php">
							<img class="logo" src="lib/img/logo.png" alt="logo">
							<img class="logo-alt" src="lib/img/logo-alt.png" alt="logo">
						</a>
					</div>
					<!-- /Logo -->

					<!-- Collapse nav button -->
					<div class="nav-collapse">
						<span></span>
					</div>
					<!-- /Collapse nav button -->
				</div>

				<!--  Main navigation  -->
				<div class="container">
				<ul class="main-nav nav">
					<li>
						<a href="inicio.php">Início </a>
					</li>
					

					<li class="has-dropdown">
						<a href="#blog">Genero</a>
						<ul class="dropdown">
							<li>
								<a href="blog-single.html">Suspense</a>
							</li>
							<li>
								<a href="blog-single.html">Terror</a>
							</li>
							<li>
								<a href="blog-single.html">Drama</a>
							</li>
							<li>
								<a href="blog-single.html">Comedia</a>
							</li>
							<li>
								<a href="blog-single.html">Ação</a>
							</li>
							<li>
								<a href="blog-single.html">Animação</a>
							</li>
						</ul>
					</li>
					<li class="has-dropdown">
						<a href="#blog">Filtrar</a>
						<ul class="dropdown">
							<li>
								<a href="blog-single.html">Tendencia</a>
							</li>
							<li>
								<a href="blog-single.html">Popularidade</a>
							</li>
							<li>
								<a href="blog-single.html">Lançamentos</a>
							</li>
							<li>
								<a href="blog-single.html">Ano</a>
							</li>
							<li>
								<a href="blog-single.html">Alfabeto</a>
							</li>
							<li>
								<a href="blog-single.html">Classificação Indicativa</a>
							</li>
						</ul>
					</li>
					
					<li class="serach">
						<form class="form-inline my-2 my-lg-0">
							<input class="form-control mr-sm-2" type="text" placeholder="Search">
							<button class="btn btn-outline-primary my-2 my-sm-0" type="submit">Search</button>
						</form>
					</li>
					<li>
						<a href="#blog"><img src="img/usuario.png"></a>
					</li>
					<li class="has-dropdown">
						<a href="#blog"><?php echo $_SESSION['nome']; ?></a>
						<ul class="dropdown">
							<li>
								<a href="alterar-cadastro.php"><img src="img/editar.png"> Alterar dados cadastrais</a>
							</li>
							<li>
								<a href="logout.php"><img src="img/logout.png">Logout</a>
							</li>
						</ul>
					</li>
				</ul>
			</div>
			<!-- /Main navigation -->
		</nav>
		<!-- /Nav -->

		<div align="center">
		<h1 style="color: white;">Alterar dados de cadastro </h1>
		<form action="cadastro-update.php" style="margin-top: 80px" id="form1" method="post">
		<fieldset>

    <legend style="color: white;">Dados Pessoais</legend>
    <table cellspacing="10" style="color: white;">
    
    <tr>
        <td>
            <label for="nome">Nome: &nbsp;</label>
        </td>
        <td align="left">
            <input type="text" name="nome" value="<?php echo $_SESSION['nome']; ?>"> 
        </td>

        <td>
            <label for="sobrenome"> &nbsp; Sobrenome: &nbsp;</label>
        </td>
        <td align="left">
            <input type="text" name="sobrenome" value="<?php echo $_SESSION['sobrenome']; ?>">
        </td>
    </tr>

    <tr>
        <td>
            <label>CPF:</label>
        </td>
        <td align="left">
            <input type="text" name="cpf" size="12" maxlength="11" value="<?php echo $_SESSION['cpf']; ?>">
        </td>
    </tr>
 </table>
</fieldset>

<!-- DADOS DE LOGIN -->
<fieldset>
 <legend style="color: white;">Dados de login</legend>
 <table cellspacing="10" style="color: white;">

  <tr>
   <td>
    <label for="email">E-mail: </label>
   </td>
   <td align="left">
    <input type="text" name="email" size="100" value="<?php echo $_SESSION['email']; ?>">    
   </td>
  </tr>

  <tr>
   <td>
    <label for="login">Login: </label>
   </td>
   <td align="left">
    <input type="text" name="usuario" value="<?php echo $_SESSION['user']; ?>">
   </td>
  </tr>

  <tr>
   <td>
    <label for="senha">Senha: </label>
   </td>
   <td align="left">
    <input type="password" name="senha" placeholder="Crie nova senha!">
   </td>
  </tr>

  <tr>
   <td>
    <label for="passconfirm">Confirme a senha: &nbsp;</label>
   </td>
   <td align="left">
    <input type="password" name="passconfirm" placeholder="Confirme a senha!">
   </td>
  </tr>

 </table>
</fieldset>
<br />
<input type="submit" onclick="return validar()" value="Alterar">
<input type="reset" value="Limpar">
</form>

	</div>
</nav>
</header>


<!-- jQuery Plugins -->
		<script type="text/javascript" src="js/jquery.min.js"></script>
		<script type="text/javascript" src="js/bootstrap.min.js"></script>
		<script type="text/javascript" src="js/jquery.magnific-popup.js"></script>
		<script type="text/javascript" src="js/main.js"></script>
</body>
</html>