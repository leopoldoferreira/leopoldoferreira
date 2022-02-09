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
		
		<div>
			<div class="container">
				<!-- CAROUSEL -->
					<div id="myCarousel" class="carousel slide" data-ride="carousel" >
						  <!-- Indicators -->
						  <ol class="carousel-indicators">
						    <li data-target="#myCarousel" data-slide-to="0" class="active"></li>
						    <li data-target="#myCarousel" data-slide-to="1"></li>
							<li data-target="#myCarousel" data-slide-to="2"></li>
							<li data-target="#myCarousel" data-slide-to="3"></li>
						  </ol>

						  <!-- Wrapper for slides -->
						  <div class="carousel-inner">
						    <div class="item active">
						      <img src="lib/img/poster_orient_express.png" alt="poster_orient_express">
						    </div>

						    <div class="item">
						      <img src="lib/img/poster_liga_justica.png" alt="poster_liga_justica">
						    </div>

						    <div class="item">
						      <img src="lib/img/poster_avengers_infinity_war.png" alt="poster_avengers_infinity_war ">
						    </div>

						    <div class="item">
						      <img src="lib/img/poster_Star_Wars_The_Last_Jedi.jpg" alt="poster_Star_Wars_The_Last_Jedi">
						    </div>


						  <!-- Left and right controls -->
						 <a class="carousel-control-prev" href="#myCarousel" role="button" data-slide="prev">
							  <span class="carousel-control-prev-icon" aria-hidden="true"></span>
							  <span class="sr-only">Previous</span>
							</a>
							<a class="carousel-control-next" href="#myCarousel" role="button" data-slide="next">
							  <span class="carousel-control-next-icon" aria-hidden="true"></span>
							  <span class="sr-only">Next</span>
							</a>
						</div>
					</div>
				</header>
				<div class="row row-movies">
					<div class="gallery_product col-lg-4 col-md-4 col-sm-4 col-xs-6 filter hdpe">
						<img src="lib/img/a_visita.jpg" class="img-responsive">
						<h4 id="Titulo"> A visita</h4>
					</div>

					<div class="gallery_product col-lg-4 col-md-4 col-sm-4 col-xs-6 filter sprinkle">
						<img src="lib/img/bastardos_inglorios.jpg" class="img-responsive">
						<h4 id="Titulo"> Bastardos Inglorios</h4>
					</div>

					<div class="gallery_product col-lg-4 col-md-4 col-sm-4 col-xs-6 filter hdpe">
						<img src="lib/img/clube_da_luta.jpg" class="img-responsive">
						<h4 id="Titulo"> Club da Luta</h4>
					</div>

					<div class="gallery_product col-lg-4 col-md-4 col-sm-4 col-xs-6 filter irrigation">
						<img src="lib/img/forrest_gump.jpg" class="img-responsive">
						<h4 id="Titulo"> Forrest Gump</h4>
					</div>

					<div class="gallery_product col-lg-4 col-md-4 col-sm-4 col-xs-6 filter spray">
						<img src="lib/img/na_natureza_selvagem.jpg" class="img-responsive">
						<h4 id="Titulo"> Na natureza selvagem</h4>
					</div>

					<div class="gallery_product col-lg-4 col-md-4 col-sm-4 col-xs-6 filter irrigation">
						<img src="lib/img/dbz.jpg" class="img-responsive">
						<h4 id="Titulo"> Dragon Ball Z - Battle of Gods</h4>
					</div>
					<div class="gallery_product col-lg-4 col-md-4 col-sm-4 col-xs-6 filter irrigation">
						<img src="lib/img/cinquenta_tons.jpg" class="img-responsive">
						<h4 id="Titulo"> Cinquenta tons de cinza</h4>
				</div>
				<div class="gallery_product col-lg-4 col-md-4 col-sm-4 col-xs-6 filter irrigation">
						<img src="lib/img/pulp_fiction.jpg" class="img-responsive">
						<h4 id="Titulo"> Pulp Fiction</h4>
				</div>
				<div class="gallery_product col-lg-4 col-md-4 col-sm-4 col-xs-6 filter irrigation">
					<a href="PulpFiction.html">
					<img src="lib/img/it.jpg" class="img-responsive">
					<h4 id="Titulo"> It</h4>
				</a>
				</div>
				</div>
		</div>
		<footer>
			<div class="row row-cinza-claro">
				<div class="container">
					<div class="row">
						<div class="col-md-1 text-center">
							<img class="logotipo" src="lib/img/logo-footer.png" alt="Logotipo">
						</div>
						<div class="col-md-11">
							<div class="row row-cols">
								<div class="col-md-3 col-popular-post">
									<h4>PERGUNTAS FREQUENTES</h4>
									<ul class="list-unstyled">
										<li>
											<a href="#">> Preço</a>
										</li>
										<li>
											<a href="#">> Prazo</a>
										</li>
										<li>
											<a href="#">> Multa</a>
										</li>
									</ul>
									<!-- Faz um pop up, qualquer coisa com um lorem ipsum memo !-->
								</div>
								<div class="col-md-5 col-links">
									<h4>DEIXE SUA MENSAGEM</h4>
									<ul class="list-unstyled">
										<li>
											<td>
												<input class="form-control mr-sm-2" type="text-area" name="nome">
											</td>
										</li>
											<td width="200px">
												<button class="btn btn-outline-primary my-2 my-sm-0" type="submit">Enviar</button>
											</td>
									<!-- Aumentar a area de texto, dar design ao botão e alinhar ele pra direita !-->
									</ul>
								</div>
								<div class="col-md-4 col-get-touch">
									<h4>CONTATOS</h4>
									<address>
										<i class="fa fa-map-marker"></i>
										<span>Rua Mário Palmério, 1000.
											<br/>Frutal, Minas Gerais.</span>
									</address>
									<p>
										<a href="tel:34210000">
											<i class="fa fa-phone"></i> 3421-0000</a>
									</p>
									<ul class="list-unstyled list-socials">
										<li>
											<a href="#" target="_blank">
												<i class="fa fa-facebook"></i>
											</a>
										</li>
										<li>
											<a href="#" target="_blank">
												<i class="fa fa-twitter"></i>
											</a>
										</li>
										<li>
											<a href="#" target="_blank">
												<i class="fa fa-instagram"></i>
											</a>
										</li>
										<li>
											<a href="#" target="_blank">
												<i class="fa fa-pinterest-p"></i>
											</a>
										</li>
									</ul>
								</div>
							</div>
						</div>
					</div>
				</div>
			</div>
			<div class="row row-cinza-escuro">
				<div class="container">

					<p class="pull-left">Copyright © Carlos, Deyvid, Leopoldo, Lorenna.</p>
					<p class="pull-right text-roxo">Tópicos Avançados em Sistemas de Informação</p>

				</div>
			</div>
		</footer>


		<!-- jQuery Plugins -->
		<script type="text/javascript" src="js/jquery.min.js"></script>
		<script type="text/javascript" src="js/bootstrap.min.js"></script>
		<script type="text/javascript" src="js/jquery.magnific-popup.js"></script>
		<script type="text/javascript" src="js/main.js"></script>

</body>

</html>