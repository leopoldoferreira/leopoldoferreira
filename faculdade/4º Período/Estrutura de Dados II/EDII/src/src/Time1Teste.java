
public class Time1Teste {

	public static void main(String[] args) {
		
		Time1 time = new Time1(14, 25);
		
		Time1 time2 = new Time1(time);
		
		System.out.printf("Horario universal: %s\nHorario AMPM: %s\n",
				time.universal(), time.ampm());

		System.out.printf("Clonado\nHorario universal: %s\nHorario AMPM: %s\n",
				time2.universal(), time2.ampm());

		time.setHora(26);
		time.setMinuto(62);
		time.setSegundo(20);
		
		System.out.printf("Time alterado\nHorario universal: %s\nHorario AMPM: %s\n",
				time.universal(), time.ampm());
	}
	
}
