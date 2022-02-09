
#### leitura dos dados
dados <- read.table("C:\\Users\\edinh\\Desktop\\UEMG\\Sistemas de Informacao\\Aula lab\\dados-bussab.txt")

#### tabelas

table(dados$V3)

prop.table(table(dados$V3))


table(dados$V2)

prop.table(table(dados$V2))

table(dados$V4)

prop.table(table(dados$V4))


salario=cut(dados$V5, breaks=seq(4,24,4), right=FALSE)

table(salario)

prop.table(table(salario))


#### cálculo das medidas de posição e dispersão

# média
mean(dados$V4)

mean(dados$V5)

mean(dados$V6)

# mediana
median(dados$V4)

median(dados$V5)

median(dados$V6)

# moda

# instalar o pacote modeest
require(modeest)

mfv(dados$V4)

mfv(dados$V4)

mfv(dados$V4)


# variância
var(dados$V4)

var(dados$V5)

var(dados$V6)

# desvio padrão
sqrt(var(dados$V4))

sqrt(var(dados$V5))

sqrt(var(dados$V6))


#### análise bidimensional

## tabelas de dupla entrada

table(dados$V8,dados$V3)

prop.table(table(dados$V8,dados$V3))

## coeficiente de contingencia

qui2=chisq.test(dados$V8,dados$V3)

qui2$statistic
sqrt(qui2$statistic/(length(dados$V8)+qui2$statistic))


salario=cut(dados$V5, breaks=seq(4,24,4), right=FALSE)

table(dados$V4,salario)

prop.table(table(dados$V4,salario))


## coeficiente de correlação

cor(dados$V4,dados$V5) ### correlação entre nº de filhos e salário

cor(dados$V5,dados$V6) ### correlação entre salárioe e idade

## regressão linear simples

#salário e nº de filhos

plot(dados$V4, dados$V5, lwd=3, xlab='nº de filhos', ylab='Salário')

cor(dados$V4, dados$V5)

ajuste=lm(dados$V5~dados$V4)
summary(ajuste)


#salário e idade

plot(dados$V6, dados$V5, lwd=3, xlab='Idade', ylab='Salário')
               
cor(dados$V6, dados$V5)

ajuste=lm(dados$V5~dados$V6)
summary(ajuste)


#salário e estado civil


estcivil=numeric()
n=length(dados$V2)
              
for(i in 1:n) {
if (dados$V2[i]=='casado') {estcivil[i]=0}
if (dados$V2[i]=='solteiro') {estcivil[i]=1}
               }

ajuste=lm(dados$V5~estcivil)
summary(ajuste)



#####Regressão Linear Multipla

#salário e grau de instrução

x1=rep(0,n)
x2=rep(0,n)

for(i in 1:n){
if(dados$V3[i]=='1oGrau'){x1[i]=1}
if(dados$V3[i]=='2oGrau'){x2[i]=1}
              }
              

ajuste=lm(dados$V5~x1+x2)
summary(ajuste)

              
#salário e região

x3=rep(0,n)
x4=rep(0,n)

for(i in 1:n){
if(dados$V8[i]=='interior'){x3[i]=1}
if(dados$V8[i]=='capital'){x4[i]=1}
              }
              

ajuste=lm(dados$V5~x3+x4)
summary(ajuste)

#salário vs nº de filhos, idade e grau de instrução

ajuste=lm(dados$V5~dados$V4+dados$V6+x1+x2)
summary(ajuste)


#salário vs idade, escolaridade

ajuste=lm(dados$V5~dados$V6+x1+x2)
summary(ajuste)
