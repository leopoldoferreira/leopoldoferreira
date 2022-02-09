/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package poligonoteste;

/**
 *
 * @author Edna
 */
import java.awt.*;   
import java.awt.event.*;   
import javax.swing.*;   
import java.awt.Frame;   
import java.lang.System;
import java.util.*;   

  
class Poligono extends JPanel implements MouseListener,KeyListener   
{   
       
   
    ArrayList vx = new ArrayList();   
    ArrayList vy = new ArrayList();   
    int n=0;
    int fim = 0;
    int desenhou=0;
    public int ax[];   
    public int ay[]; 
    public int tx[];
    public int ty[];
    //pivos
    public int x1[];
    public int y1[];
    public int x2[];
    public int y2[];
    public int x3[];
    public int y3[];
    
    Polygon p1;
    public int tipo;
       
    int x,y;   
    public Poligono()   
    {    
        addMouseListener(this);   
        addKeyListener(this);   
        setSize(800,600);   
        setLocation(0,0); 
    

        setBackground(Color.white);
      
               
    }   
       
    @Override
    public void paint(Graphics g)   
    {   
        super.paint(g);   
        Graphics2D g2 = (Graphics2D) g;   

        g.setColor(new Color(255, 0, 0));
        switch(tipo)
        {
            case 1: //ponto
                ax = new int[vx.size()];           
                ay = new int[vy.size()];                   
                for ( int i = 0; i < vx.size(); i++ )   
                {               
                    ax[i] = ( ( Integer) vx.get(i)).intValue() ;             
                    ay[i] = ( (Integer) vy.get(i) ).intValue();                   
                }           
                requestFocusInWindow();
                g2.drawPolyline(ax,ay,n);
                break;
            case 2: //poligono
                if(desenhou==0){
                ax = new int[vx.size()];           
                ay = new int[vy.size()];
                System.out.println("dentro do case 2 "+ ax.length);
                for ( int i = 0; i < vx.size(); i++ )   
                {               
                    ax[i] = ( ( Integer) vx.get(i)).intValue() ;             
                    ay[i] = ( (Integer) vy.get(i) ).intValue();                   
                }           
                p1 = new Polygon(ax, ay, ax.length) ;   
         
               //zerando as variaveis   
                n=0;   
                vx.clear();   
                vy.clear();   
                g2.fillPolygon( p1 );  
                desenhou=1;
                }
                break;
            case 3:
                
               System.out.println("Entrou no case 3");
               System.out.println("Tamanho do poligono "+tx.length);
                
               p1 = new Polygon(ax,ay,tx.length);
                
                Polygon p2 = new Polygon(tx,ty,ty.length);
                g.setColor(new Color(255, 0, 0));
                g2.fillPolygon(p1);
                g.setColor(new Color(0, 0, 255));
                g2.fillPolygon(p2);
        }
        
        
    }   
    
    public void adicionaPontosPoligono(int x, int y)   
    {   
        vx.add(new Integer(x));   
        vy.add(new Integer(y));  
        n++;           
    }
    
    
    //evento do mouse   
    @Override
    public void mousePressed(MouseEvent e)   
    {   
        if (fim==0)
        {
        int xi,yi,xf,yf;
        Graphics g = getGraphics();       
        this.adicionaPontosPoligono(e.getX(), e.getY());
        if (n>1)
        {
            xi = ( ( Integer) vx.get(0)).intValue();
            yi = ( (Integer) vy.get(0) ).intValue();       
            xf = ( ( Integer) vx.get(n-1)).intValue();
            yf = ( (Integer) vy.get(n-1) ).intValue();       
            if(xf>=xi-8 && xf<=xi+8 && yf>=yi-8 && yf<=yi+8 )
            {
                tipo = 2;
                fim = 1;
                this.paint(g);  
            }
            else {
                tipo = 1;
                desenhou=0;
                this.paint(g);  
            }
        }
        }
        

    }   
  
    public void mouseReleased(MouseEvent e)   
    {   
    }   
    public void mouseClicked(MouseEvent e)   
    {   
    }   
    public void mouseEntered(MouseEvent e)   
    {     
    }   
    public void mouseExited(MouseEvent e)   
    {   
    }   
    public void mouseDragged(MouseEvent e)   
    {   
        
    }
   
    public void mouseMoved(MouseEvent e)   
    {   
    
    }   

    //eventos do teclado   
    public void keyPressed(KeyEvent evt)   
    {           
    }       
   
   
    public void keyTyped(KeyEvent evt)   
    {               
    }   
    
    public void keyReleased(KeyEvent evt) {   
  
    
    } 
    
    public void desenhar(int x)
    {
        Graphics g = getGraphics();
        
        this.paint(g);
    }
}
    

class PoligonoTeste extends JFrame{
    Poligono p = new Poligono();
    int flag =0;
    public PoligonoTeste(String titulo){
        super(titulo);
        
        setDefaultCloseOperation(EXIT_ON_CLOSE);
        JMenu desenharMenu = new JMenu("Desenhar");
        desenharMenu.setMnemonic('D');
        JMenuItem desenhaPoligono = new JMenuItem("Polígono");
        desenharMenu.add(desenhaPoligono);
        desenhaPoligono.addActionListener(
                new ActionListener()
                {
     
                    public void actionPerformed(ActionEvent event)
                    {
                       
                        p.setPreferredSize(new Dimension(800, 600));
                        p.fim = 0;
                        add(p);
                        
                       requestFocusInWindow();
                    }
                    
                }
                 
         );
        
        
        
        JMenu transformarMenu = new JMenu("Transformar");
        transformarMenu.setMnemonic('T');
        JMenuItem translacao = new JMenuItem("Translação");
        transformarMenu.add(translacao);
        translacao.addActionListener(
                new ActionListener()
                {
                    public void actionPerformed(ActionEvent event)
                    {
                         if (p.fim==1){
                             
                             /*
                             x = ax  - pontos x iniciais
                             y = ay  - pontos y iniciais
                             x' = tx - pontos x finais
                             y' = ty - pontos y finais
                             dx = dx - ponto x translado
                             dy = dy - ponto y translado
                             
                             Fórmula:
                             x' = x + dx
                             y' = y + dy                             
                             */
                             int dx, dy;
                             requestFocusInWindow();
                             String s = JOptionPane.showInputDialog("Digite o valor de x: ");
                             dx = Integer.parseInt(s);
                             s = JOptionPane.showInputDialog("Digite o valor de y: ");
                             dy = Integer.parseInt(s);
                             
                             System.out.println(dx);
                             System.out.println(dy);
                            
                             p.tx = new int [p.ax.length];
                             System.out.println("tamanho do poligono "+ p.ax.length);
                             p.ty = new int [p.ay.length];
                             for (int i=0;i<p.ax.length;i++)
                             {
                                 p.tx[i] = p.ax[i] + dx;
                                 p.ty[i] = p.ay[i] + dy;
                                 
                             }
                             p.tipo = 3;
                            
                             p.desenhar(p.tx.length);
                             
                         }
                    }
                     
                }
         );
        
        JMenuItem escala = new JMenuItem("Escala");
        transformarMenu.add(escala);
        escala.addActionListener(
                new ActionListener()
                {
                    public void actionPerformed(ActionEvent event)
                    {
                         if (p.fim==1){
                              /*
                             x = ax  - pontos x iniciais
                             y = ay  - pontos y iniciais
                             x' = tx - pontos x finais
                             y' = ty - pontos y finais
                             dx = dx - ponto x da escala
                             dy = dy - ponto y da escala
                             
                             Fórmula:
                             x' = x * dx
                             y' = y * dy                             
                             */
                             double dx, dy;
                             requestFocusInWindow();
                             String s = JOptionPane.showInputDialog("Digite o valor de x: ");
                             dx = Double.parseDouble(s);
                             
                             
                             s = JOptionPane.showInputDialog("Digite o valor de y: ");
                             dy = Double.parseDouble(s);
                             
                             //System.out.println(dx);
                             //System.out.println(dy);
                            
                             p.tx = new int [p.ax.length];
                             System.out.println("tamanho do poligono "+ p.ax.length);
                             p.ty = new int [p.ay.length];
                             for (int i=0;i<p.ax.length;i++)
                             {
                                 p.tx[i] = (int)(p.ax[i] * dx);
                                 p.ty[i] = (int)(p.ay[i] * dy);
                                 
                             }
                             p.tipo = 3;
                            
                             p.desenhar(p.tx.length);
                             
                         }
                    }
                     
                }
         );
        
        JMenuItem rotacao = new JMenuItem("Rotação");
        transformarMenu.add(rotacao);
        rotacao.addActionListener(
                new ActionListener()
                {
                    public void actionPerformed(ActionEvent event)
                    {
                         if (p.fim==1){
                              /*
                             x = ax  - pontos x iniciais
                             y = ay  - pontos y iniciais
                             x' = tx - pontos x finais
                             y' = ty - pontos y finais
                             dx = dx - ponto x translado
                             dy = dy - ponto y translado
                             
                             Fórmula:
                             x' = x * cosTeta - y * senTeta
                             y' = x * senTeta - y * cosTeta                            
                             */
                             double rad, senrad, cosrad, angulo;
                             requestFocusInWindow();
                             String s = JOptionPane.showInputDialog("Digite o angulo: ");
                             angulo = Integer.parseInt(s);
                           
                             rad = Math.toRadians(angulo);
                             senrad = Math.sin(rad);
                             cosrad = Math.cos(rad);
                         
                             
                             p.tx = new int [p.ax.length];
                             System.out.println("tamanho do poligono "+ p.ax.length);
                             p.ty = new int [p.ay.length];
                             for (int i=0;i<p.ax.length;i++)
                             {
                                 p.tx[i] = (int)(p.ax[i]*cosrad - p.ay[i]*senrad);
                                 p.ty[i] = (int)(p.ax[i]*senrad + p.ay[i]*cosrad);
                                 
                             }
                             p.tipo = 3;
                            
                             p.desenhar(p.tx.length);
                             
                         }
                    }
                     
                }
         );
        
        JMenuItem escalaPivo = new JMenuItem("Escala com Pivo");
        transformarMenu.add(escalaPivo);
        escalaPivo.addActionListener(
                new ActionListener()
                {
                    public void actionPerformed(ActionEvent event)
                    {
                         if (p.fim==1){
                             
                             /*
                             Fórmula:
                             1º Passo: Translação em T (-Xp, -Yp)
                             x' = x - xp
                             y' = y - yp   
                             
                             2º Passo: Aplicar a escala S (Sx, Sy)
                             x'' = x' * Sx
                             y'' = y' * Sy
                             
                             3º Passo: Transladar para o pivô original
                             x''' = x'' + Xp
                             y''' = y'' + Yp
                             */
                             double sx, sy;
                             int xp, yp;   
                         
                             
                             requestFocusInWindow();
                             String s1 = JOptionPane.showInputDialog("Digite o valor de xp: ");
                             xp = Integer.parseInt(s1);
                             s1 = JOptionPane.showInputDialog("Digite o valor de xp: ");
                             yp = Integer.parseInt(s1);
                             
                             String s = JOptionPane.showInputDialog("Digite o valor de sx: ");
                             sx = Double.parseDouble(s);
                             s = JOptionPane.showInputDialog("Digite o valor de sy: ");
                             sy = Double.parseDouble(s);
                             
                             p.tx = new int [p.ax.length];
                             p.ty = new int [p.ay.length];
                             p.x1 = new int [p.ax.length];
                             p.y1 = new int [p.ay.length];
                             p.x2 = new int [p.ax.length];
                             p.y2 = new int [p.ay.length];

                             for (int i=0;i<p.ax.length;i++)
                             {
                                 p.x1[i] = p.ax[i] - xp;
                                 p.y1[i] = p.ay[i] - yp;
                                 
                             }
                             
                             for (int i=0;i<p.ax.length;i++)
                             {
                                 p.x2[i] = (int)(p.x1[i] * sx);
                                 p.y2[i] = (int)(p.y1[i] * sy);
                                 
                             }
                             
                             for (int i=0;i<p.ax.length;i++)
                             {
                                 p.tx[i] = p.x2[i] + xp;
                                 p.ty[i] = p.y2[i] + yp;
                                 
                             }
                             
                             p.tipo = 3;
                            
                             p.desenhar(p.tx.length);
                             
                         }
                    }
                     
                }
         );
        JMenuItem rotacaoPivo = new JMenuItem("Rotação com Pivo");
        transformarMenu.add(rotacaoPivo);
        rotacaoPivo.addActionListener(
                new ActionListener()
                {
                    public void actionPerformed(ActionEvent event)
                    {
                         if (p.fim==1){
                             
                             /*
                             Fórmula:
                             1º Passo: Translação em T (-Xp, -Yp)
                             x' = x - xp
                             y' = y - yp   
                             
                             2º Passo: Aplicar a escala S (Sx, Sy)
                             x'' = x' * Sx
                             y'' = y' * Sy
                             
                             3º Passo: Transladar para o pivô original
                             x''' = x'' + Xp
                             y''' = y'' + Yp
                             */
                             double sx, sy;
                             int xp, yp;   
                         
                             
                             requestFocusInWindow();
                             String s1 = JOptionPane.showInputDialog("Digite o valor de xp: ");
                             xp = Integer.parseInt(s1);
                             s1 = JOptionPane.showInputDialog("Digite o valor de xp: ");
                             yp = Integer.parseInt(s1);
                             
                             double rad, senrad, cosrad, angulo;
                             requestFocusInWindow();
                             String s = JOptionPane.showInputDialog("Digite o angulo: ");
                             angulo = Integer.parseInt(s);
                           
                             rad = Math.toRadians(angulo);
                             senrad = Math.sin(rad);
                             cosrad = Math.cos(rad);
                             
                             p.tx = new int [p.ax.length];
                             p.ty = new int [p.ay.length];
                             p.x1 = new int [p.ax.length];
                             p.y1 = new int [p.ay.length];
                             p.x2 = new int [p.ax.length];
                             p.y2 = new int [p.ay.length];

                             for (int i=0;i<p.ax.length;i++)
                             {
                                 p.x1[i] = p.ax[i] - xp;
                                 p.y1[i] = p.ay[i] - yp;
                                 
                             }
                             
                             for (int i=0;i<p.ax.length;i++)
                             {
                                 p.x2[i] = (int)(p.x1[i]*cosrad - p.y1[i]*senrad);
                                 p.y2[i] = (int)(p.x1[i]*senrad + p.y1[i]*cosrad);
                             }
                             
                             for (int i=0;i<p.ax.length;i++)
                             {
                                 p.tx[i] = p.x2[i] + xp;
                                 p.ty[i] = p.y2[i] + yp;
                                 
                             }
                             
                             p.tipo = 3;
                            
                             p.desenhar(p.tx.length);
                             
                         }
                    }
                     
                }
         );
        
       
         JMenuItem cisalhamentoX = new JMenuItem("Cisalhamento em X");
        transformarMenu.add(cisalhamentoX);
        cisalhamentoX.addActionListener(
                new ActionListener()
                {
                    public void actionPerformed(ActionEvent event)
                    {
                         if (p.fim==1){
                             /*
                             Cisalhamento:
                             Em X:
                             x' = x+y*dx
                             y' = y
                             
                             */
                             Double dx, dy;
                             requestFocusInWindow();
                             String s = JOptionPane.showInputDialog("Digite o valor de Dx: ");
                             dx = Double.parseDouble(s);                           
                             
                             
                             p.tx = new int [p.ax.length];
                             System.out.println("tamanho do poligono "+ p.ax.length);
                             p.ty = new int [p.ay.length];
                             for (int i=0;i<p.ax.length;i++)
                             {
                                 p.tx[i] = (int)(p.ax[i] + p.ay[i] * dx);
                                 p.ty[i] = p.ay[i];
                                 
                             }
                             p.tipo = 3;
                            
                             p.desenhar(p.tx.length);
                                                          
                         }
                    }
                     
                }
         );
        
        JMenuItem cisalhamentoY = new JMenuItem("Cisalhamento em  Y");
        transformarMenu.add(cisalhamentoY);
        cisalhamentoY.addActionListener(
                new ActionListener()
                {
                    public void actionPerformed(ActionEvent event)
                    {
                         if (p.fim==1){
                             /*                       
                             Em Y:
                             x' = x
                             y' = x * dy + y
                             */
                             Double dy;
                             
                             String s = JOptionPane.showInputDialog("Digite o valor de Dy: ");
                             dy = Double.parseDouble(s);
                             
                             
                             p.tx = new int [p.ax.length];
                             System.out.println("tamanho do poligono "+ p.ax.length);
                             p.ty = new int [p.ay.length];
                             for (int i=0;i<p.ax.length;i++)
                             {
                                 p.tx[i] = p.ax[i];
                                 p.ty[i] = (int)(p.ax[i] * dy + p.ay[i]);
                                 
                             }
                             p.tipo = 3;
                            
                             p.desenhar(p.tx.length);
                             
                         }
                    }
                     
                }
         );
        
         JMenuItem cisalhamentoPivo = new JMenuItem("Cisalhamento em Y com Pivô");
        transformarMenu.add(cisalhamentoPivo);
        cisalhamentoPivo.addActionListener(
                new ActionListener()
                {
                    public void actionPerformed(ActionEvent event)
                    {
                         if (p.fim==1){
                            //a formula desse cisalhamento é a usada no em X, porém como 
                            //os pontos iniciais é no canto superior esquerdo, se comporta como Y
                             Double dx;
                             int sx, sy;
                             
                             String s = JOptionPane.showInputDialog("Digite o valor de Dx: ");
                             dx = Double.parseDouble(s);
                             s = JOptionPane.showInputDialog("Digite o valor de Sx: ");
                             sx = Integer.parseInt(s);
                             s = JOptionPane.showInputDialog("Digite o valor de Sy: ");
                             sy = Integer.parseInt(s);
                             
                             p.tx = new int [p.ax.length];
                             p.ty = new int [p.ay.length];
                             p.x1 = new int [p.ax.length];
                             p.y1 = new int [p.ay.length];
                             p.x2 = new int [p.ax.length];
                             p.y2 = new int [p.ay.length];
                             
                             for (int i=0;i<p.ax.length;i++)
                             {
                                 p.x1[i] = p.ax[i] - sx;
                                 p.y1[i] = p.ay[i] - sy;
                             }
                              for (int i=0;i<p.ax.length;i++)
                             {
                                 p.x2[i] = (int)(p.x1[i] + p.y1[i] * dx);
                                 p.y2[i] = p.y1[i];
                             }
                              for (int i=0;i<p.ax.length;i++)
                             {
                                 p.tx[i] = p.x2[i] + sx;
                                 p.ty[i] = p.y2[i] + sy;
                             }
                             p.tipo = 3;
                            
                             p.desenhar(p.tx.length);
                             
                         }
                    }
                     
                }
         );
        
        
        JMenu sairMenu = new JMenu("Sair");
        sairMenu.setMnemonic('S');
        JMenuItem sair = new JMenuItem("Sair");
        sairMenu.add(sair);
        sair.addActionListener(
                new ActionListener()
                {
                    public void actionPerformed(ActionEvent event)
                    {
                        System.exit(0);
                    }
                }
         );
       
        JMenuBar bar = new JMenuBar();
        
        setJMenuBar(bar);
        bar.add(desenharMenu);
        bar.add(transformarMenu);
        bar.add(sairMenu);
        
        
       
    
    }
    
    public static void main(String[] a)   
    {   
        PoligonoTeste f = new PoligonoTeste("teste");
        f.setSize(1000,700);
        f.setVisible(true);
        
       
    }

    
    }

