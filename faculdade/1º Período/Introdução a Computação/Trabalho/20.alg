algoritmo "Escada"
// Função :
// Autor :
// Data : 4/2/2014
// Seção de Declarações 
var
      ang,dis,rad,hip:real
inicio
      Escreva("Digite o ângulo formado pela escada apoiada no chão:")
      Leia(ang)
      Escreva("Digite a distância formada entre a escada e a parede:")
      Leia(dis)
      // Seção de Comandos
      rad<-(pi*ang)/180
      hip<-dis/rad
      // Saída
      Escreval("A medida da escada é:",hip)
      
fimalgoritmo
