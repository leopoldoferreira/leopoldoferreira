<?php 
	
	include "conexao.php";

	$usuario = $_POST['usuario'];
	$senha = $_POST['senha'];
	
	$sql = "SELECT * FROM `login` WHERE `usuario` = '$usuario' AND `senha`= '$senha'";

	$res 	= $con->query($sql);
	$linha  = $res->fetch_assoc();

	$id = $linha['id'];
	$nome = $linha['nome'];
	$sobrenome = $linha['sobrenome'];
	$cpf = $linha['cpf'];
	$email = $linha['email'];
	$user = $linha['usuario'];
	$pass = $linha['senha'];

if( $usuario == $user && $senha == $pass)
{
	session_start();
	$_SESSION['id'] = $id;
	$_SESSION['nome'] = $nome;
	$_SESSION['sobrenome'] = $sobrenome;
	$_SESSION['cpf'] = $cpf;
	$_SESSION['email'] = $email;
	$_SESSION['user'] = $user;
	$_SESSION['senha'] = $senha;
	?>

	<script> window.location.href = 'inicio.php' </script>
	
<?php
}
else
{
	?>
	<script>alert('Usúario ou senha errado!');</script>";
	<script> window.location.href = 'index.php' </script>
	<?php
		
}
 ?>