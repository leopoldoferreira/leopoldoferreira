package Ex10_09;

public class Date {
	
	protected int dia;
	protected int mes;
	protected int ano;
	
	public Date(int mes, int dia, int ano) {
		super();
		this.mes = confirmaMes(mes);
		this.dia = confirmaDia(dia);
		this.ano = ano;
	}
	
	private int confirmaDia(int auxDia){
		int dias[] = { 0,31 ,28 ,31,30,31,30,31,31,30,31,30,31};
		
		if (auxDia > 0 && auxDia <= dias[mes]){
			return auxDia;
		}else{
			return 0;
		}		
	}
	private int confirmaMes(int auxMes)
	{
	
		if(auxMes > 0 && auxMes <= 12)
			return auxMes;
		
		else
			return 0;
	}
	
	public int getDia() {
		return dia;
	}
	
	public void setDia(int dia) {
		this.dia = dia;
	}
	
	public int getMes() {
		return mes;
	}
	
	public void setMes(int mes) {
		this.mes = mes;
	}

	public int getAno() {
		return ano;
	}

	public void setAno(int ano) {
		this.ano = ano;
	}
	
	
	public String toStringDate(){
		return String.format("%d/%d/%d", dia,mes,ano);
	}
	
}
