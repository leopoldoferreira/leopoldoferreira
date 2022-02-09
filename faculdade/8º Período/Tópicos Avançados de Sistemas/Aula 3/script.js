function hora(){
	document.getElementById('demo2').innerHTML = Date();
}
function troca(){
	document.getElementById("demo").innerHTML = "Olá Javascript";
}
function acende(){
	document.getElementById('MinhaImagem').src='acesa.jpg'
	document.getElementById('apaga').disabled=false;
	document.getElementById('acende').disabled=true;
}
function apaga(){
	document.getElementById('MinhaImagem').src='apagada.jpg'
	document.getElementById('apaga').disabled=true;
	document.getElementById('acende').disabled=false;
}
function muda(){

	if(document.getElementById('demo3').style.fontSize=='2em'){
		document.getElementById('demo3').style.fontSize='1em';
	}else{
		document.getElementById('demo3').style.fontSize='2em';
	}
}
