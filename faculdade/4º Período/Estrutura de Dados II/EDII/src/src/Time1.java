
public class Time1 {

	// variáveis de instância (atributos)
	private int hora;
	private int minuto;
	private int segundo;
	
	public Time1(int _hora, int _minuto, int _segundo) {
		
		hora = _hora;
		minuto = _minuto;
		segundo = _segundo;
		
	}
	
	public Time1(int _hora, int _minuto) {
		
		this(_hora, _minuto, 0);
		
	}
	
	public Time1(int _hora) {
		
		this(_hora, 0);
		
	}
	
	public Time1(Time1 tempo) {
		
		this(tempo.hora, tempo.minuto, tempo.segundo);
		
	}
	
	public int getHora() {
		return hora;
	}
	
	public void setHora(int hora) {
		
		if (!(hora > 23 || hora < 0))
			this.hora = hora;
		
	}
	
	
	public int getMinuto() {
		return minuto;
	}

	public void setMinuto(int minuto) {
		
		if (minuto >= 0 && minuto < 60)
			this.minuto = minuto;
	}

	public int getSegundo() {
		return segundo;
	}

	public void setSegundo(int segundo) {
		
		if (segundo < 60 && segundo > -1)
			this.segundo = segundo;
	}

	public String universal() {
		
		String universal = String.format("%d:%d:%d\n", hora, minuto, segundo);
		
		return universal;
		
	}
	
	public String ampm() {
		
		String ampm = hora >= 12 ? "PM" : "AM";
		
		return String.format("%d:%d:%d %s\n", hora - 12, minuto, segundo, ampm);
		
	}
	
}
