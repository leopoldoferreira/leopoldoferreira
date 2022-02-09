<!DOCTYPE html>
<html>
<head>
	<title>Pagina Cadastro!</title>
	<meta charset="utf-8">
	<script type="text/javascript" src="js/script.js"></script>
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
<body >
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
            <a href="index.php">
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
            <a href="index.php">Início </a>
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
          <li class="has-dropdown">
            <a href="#blog">Login</a>
            <ul class="dropdown">
              <div class="row">
                <div class="col-md-6 col-md-offset-3">
                  <div class="panel panel-login">
                    <div class="panel-heading">
                      <div class="row">
                        <div class="col-xs-12">
                          <a href="#" class="active" id="login-form-link">Entrar</a>
                        </div>
                      </div>
                      <hr>
                    </div>
                    <div class="panel-body">
                      <div class="row">
                        <div class="col-lg-12">
                          <form id="form1" action="valida.php" method="post" role="form" style="display: block;">
                            <div class="form-group">
                              <input type="text" name="usuario" tabindex="1" class="form-control" placeholder="Usuário" value="">
                            </div>
                            <div class="form-group">
                              <input type="password" name="senha" id="password" tabindex="2" class="form-control" placeholder="Senha">
                            </div>
                            <div class="form-group text-center">
                              <input type="checkbox" tabindex="3" class="" name="remember" id="remember">
                              <label for="remember"> Lembrar</label>
                            </div>
                            <div class="form-group">
                              <div class="row">
                                <div class="col-sm-6 col-sm-offset-3">
                                  <input type="submit" name="enviar" tabindex="4" class="form-control btn btn-login" value="Entrar">
                                </div>
                              </div>
                            </div>
                            <div class="form-group">
                              <div class="row">
                                <div class="col-lg-12">
                                  <div class="text-center">
                                    <a href="http://phpoll.com/recover" tabindex="5" class="forgot-password">Esqueceu a senha?</a>
                                  </div>
                                </div>
                              </div>
                            </div>
                          </form>
                          <form id="register-form" action="http://phpoll.com/register/process" method="post" role="form" style="display: none;">
                            <a> Registre ou mude sua senha na loja fisica!</a>
                          </form>
                        </div>
                      </div>
                    </div>
                  </div>
                </div>
              </div>
            </ul>
          </li>
          <li>
            <a href="cadastro.php">Cadastro</a>
          </li>
          <li class="serach">
            <form class="form-inline my-2 my-lg-0">
              <input class="form-control mr-sm-2" type="text" placeholder="Search">
              <button class="btn btn-outline-primary my-2 my-sm-0" type="submit">Search</button>
            </form>
          </li>
        </ul>
      </div>
      <!-- /Main navigation -->
    </nav>
    <!-- /Nav -->
	<div align="center">
		<form action="cadastro-inserir.php" style="margin-top: 80px" id="form1" method="post">
		<fieldset>
    <legend>Dados Pessoais</legend>
    <table cellspacing="10" style="color: white;">
    
    <tr>
        <td>
            <label for="nome">Nome: &nbsp;</label>
        </td>
        <td align="left">
            <input type="text" name="nome">
        </td>

        <td>
            <label for="sobrenome"> &nbsp; Sobrenome: &nbsp;</label>
        </td>
        <td align="left">
            <input type="text" name="sobrenome">
        </td>
    </tr>

    <tr>
        <td>
            <label>CPF:</label>
        </td>
        <td align="left">
            <input type="text" name="cpf" size="12" maxlength="11" placeholder="Ex: 00000000000">
        </td>
    </tr>
 </table>
</fieldset>

<!-- DADOS DE LOGIN -->
<fieldset>
 <legend>Dados de login</legend>
 <table cellspacing="10" style="color: white;">

  <tr>
   <td>
    <label for="email">E-mail: </label>
   </td>
   <td align="left">
    <input type="text" name="email" maxlength="60" size='65'>    
   </td>
  </tr>

  <tr>
   <td>
    <label for="login">Login: </label>
   </td>
   <td align="left">
    <input type="text" name="usuario">
   </td>
  </tr>

  <tr>
   <td>
    <label for="senha">Senha: </label>
   </td>
   <td align="left">
    <input type="password" name="senha">
   </td>
  </tr>

  <tr>
   <td>
    <label for="passconfirm">Confirme a senha: &nbsp;</label>
   </td>
   <td align="left">
    <input type="password" name="passconfirm">
   </td>
  </tr>

 </table>
</fieldset>
<br />
<input type="submit" onclick="return validar()">
<input type="reset" value="Limpar">
</form>


</body>
</html>