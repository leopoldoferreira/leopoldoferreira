function validar()
{
	var nome = form1.nome.value;
	var sobrenome = form1.sobrenome.value;
	var cpf = form1.cpf.value;

	if(nome == "" || sobrenome == "")
	{
		alert('Preencha todos os campos(DADOS PESSOAIS)');
		form1.focus();
		return false;
	}
	
    if (cpf == "") {
        alert("Escreva o cpf");
        form1.cpf.focus();
        return false;
    } else {

        function ValidarCPF() {
        	var cpf = form1.cpf.value;
            var Soma;
            var Resto;
            Soma = 0;
            if (cpf == "00000000000") return false;

            for (i = 1; i <= 9; i++) Soma = Soma + parseInt(cpf.substring(i - 1, i)) * (11 - i);
            Resto = (Soma * 10) % 11;

            if ((Resto == 10) || (Resto == 11)) Resto = 0;
            if (Resto != parseInt(cpf.substring(9, 10))) return false;

            Soma = 0;
            for (i = 1; i <= 10; i++) Soma = Soma + parseInt(cpf.substring(i - 1, i)) * (12 - i);
            Resto = (Soma * 10) % 11;

            if ((Resto == 10) || (Resto == 11)) Resto = 0;
            if (Resto != parseInt(cpf.substring(10, 11))) return false;
            return true;
        }
        var cpf = cpf.value;
        if (!ValidarCPF(cpf)) {
            alert("CPF invalido!");
        form1.cpf.focus();
        return false;
        }

    }
	
    var email = form1.email.value;

    if ((email.length != 0) && ((email.indexOf("@") < 1) || (email.indexOf('.') < 7)))
    {
            alert('Informe um e-mail valido!');
            form1.focus();
            return false;  
    }
    if(email == ""){
            alert('Informe um e-mail valido!');
            form1.focus();
            return false;
    }
    
    var usuario = form1.usuario.value;     

    if (usuario == " "){
            alert("Preencha todos os campos(DADOS DE LOGIN)");
            form1.facus();
            return false;
  }
    var senha = form1.senha.value;
    var passconfirm = form1.passconfirm.value;

    if(senha == "" || passconfirm == "")
    {
        alert('Preencha todos os campos(DADOS DE LOGIN)');
        form1.focus();
        return false;
    }    

    if(passconfirm != senha ){
        alert('As senha nao conferem!!');
        form1.focus();
        return false;
    }


}   
