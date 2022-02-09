import javax.swing.JFrame;

public class DesenhadorTeste {
	
	public static void main(String[] args)
	{
	Desenhador panel = new Desenhador();
	
	JFrame application = new JFrame();
	
	application.setDefaultCloseOperation( JFrame.EXIT_ON_CLOSE );
	application.add(panel);
	application.setSize(300,350);
	application.setVisible(true);
	
	
	
	
		
		
	}
}
