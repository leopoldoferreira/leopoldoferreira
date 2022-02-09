<?php 
	 		include("Conexao.php");
 		
	$sql = "UPDATE login SET nome ='$nome' and sobrenome = '$sobrenome' and cpf = '$cpf' and email = '$email' and usuario = '$user' and senha = '$senha' where id='$id";

	if($con->query($sql) === TRUE){
		echo("Registro atualizado com sucesso.");
		}

		else{
			echo "Erro para atualizar" . $con->error;
		}

		$con->close();
	  ?>