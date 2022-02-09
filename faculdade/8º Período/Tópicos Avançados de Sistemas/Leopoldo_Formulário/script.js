function validar(){
	var nome = form.nome.value;
	var sobrenome = form.sobrenome.value;
	var dia = form.dia.value;
    var mes = form.mes.value;
	var ano = form.ano.value;
	var rg = form.rg.value;
	var cpf = form.cpf.value;
	var rua = form.rua.value;
	var numero = form.numero.value;
	var bairro = form.bairro.value;
	var estado = form.estado.value;
	var cidade = form.cidade.value;
	var cep = form.cep.value;
	var cep2 = form.cep2.value;
	var email = form.email.value;
	var login = form.login.value;
	var pass = form.pass.value;
	var passconfirm = form.passconfirm.value;


	if (nome == "" || nome.length < 3) {
		alert("Preencha o seu nome");
		return false;
	}
	if (sobrenome == "" || sobrenome.length < 3) {
		alert("Preencha o sobrenome");
		return false;
	}
	if(dia <= 0 || mes <= 0 || ano <= 1989 || dia > 31 || mes > 12 || ano > 2017){
		alert("Data inválida");
		return false;
	}
	if(cpf = "" || cpf < 0){
		alert("Preencha o cpf corretamente");
		return false;
	}
	if(rua == "" || rua.length < 3){
		alert("Preencha o endereço");
		return false;
	}
	if(numero == ""){
		alert("Preencha numero");
		return false;
	}if(numero < 0){
		alert("Preencha numero corretamente");
		return false;
	}

	if(bairro == ""){
		alert("Preencha Bairro");
		return false;
	}
	if(cidade == "" || cidade < 3){
		alert("Preencha Cidade");
		return false;
	}
	if(cep == "" || cep2 == ""){
		alert("Preencha CEP");
		return false;
	}	if(cep < 0 || cep2 < 0){
		alert("Preencha CEP corretamente");
		return false;
	}
	if(email == ""){
		alert("Preencha o email");
		return false;
	}
	if(email.length < 10){
		alert("Preencha o email corretamente")
	}
	if(login == ""){
		alert("Preencha login");
		return false;
	}
	if (login.length < 5){
		alert("Login deve ter pelo menos 5 caracteres");
		return false;
	}
	if (pass == ""){
		alert("Digite a senha");
		return false;
	}
	if(passconfirm != pass){
		alert("Senhas não coincidem");
		return false;
	}

	alert("Fim");
	return false;

}