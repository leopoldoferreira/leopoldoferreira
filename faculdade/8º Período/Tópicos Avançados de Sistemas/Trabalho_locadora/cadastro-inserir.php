<?php
	include("conexao.php");
	
	$nome = $_POST['nome'];
	$sobrenome = $_POST['sobrenome'];
	$cpf = $_POST['cpf'];
	$email = $_POST['email'];
	$usuario = $_POST['usuario'];
	$senha = $_POST['senha'];

	$sql ="INSERT INTO login (nome, sobrenome, cpf, email, usuario, senha) values ('$nome', '$sobrenome', '$cpf', '$email', '$usuario', '$senha')";

	if($con->multi_query($sql) === TRUE)
	{
		?>
	<script>alert('Cadastro relizado com sucesso!');</script>";
	<script> window.location.href = 'index.php' </script>
	<?php
	}
	else
	{

		echo "Erro". $sql . "<BR>" . $con->error;
	}

?>