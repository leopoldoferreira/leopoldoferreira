################ simulação de dados de regressão

set.seed(121)


x1=numeric()  ### SEXO 1-MASCULINO 2-FEMININO
x2=numeric()  ###  IDADE
x3=numeric()  ### 1-ADMINISTRATIVO 2-OPERACIONAL
x4=numeric()  ### ALCOOL - 1-ATUALMENTE NÃO BEBE -  2-MENOS DE UMA VEZ POR MÊS  -  3-BEBO 1 A 3 VEZES POR MÊS  - 4-BEBO DE 1 A 4 VEZES POR SEMANA   - 5- BEBO MAIS QUE 4 VEZES POR SEMANA
x5=numeric()  ### TABACO - 1-NÃO FUMA 2-FUMANTE
y=numeric()   ### ICT

n=100


for(i in 1:n){
x1[i]=rbinom(1,1,0.35)+1
x2[i]=rpois(1,25)
x3[i]=rbinom(1,1,0.65)+1
x4[i]=rbinom(1,4,0.5)+1
x5[i]=rbinom(1,1,0.35)+1
y[i]=round(40+10*(x3[i]-1)-0.55*x2[i]  +rnorm(1,0,4),0)
              }


summary(y)

z=matrix(NA,ncol=6,nrow=n)
z[,1]=y
z[,2]=x1
z[,3]=x2
z[,4]=x3
z[,5]=x4
z[,6]=x5



############## Ajuste ######################


###########

n=length(y)
x1_md=rep(0,n)          # 0-feminino 1-masculino
x3_md=rep(0,n)          # 0-operacional 1-adm
x5_md=rep(0,n)          # 0-fumante 1-não fuma
for( i in 1:n){
if(x1[i]==2)x1_md[i]=1
if(x3[i]==2)x3_md[i]=1
if(x5[i]==2)x5_md[i]=1
               }


############# regressao linear simples

ajuste1=lm(y~x1_md)
summary(ajuste1)



ajuste2=lm(y~x2)
summary(ajuste2)


ajuste3=lm(y~x3_md)
summary(ajuste3)


ajuste4=lm(y~x5_md)
summary(ajuste4)


############# regressão linear multipla


x4_1=rep(0,n)          # 1 se não beber
x4_2=rep(0,n)          # 1 se menos de 1x por mês
x4_3=rep(0,n)          # 1 se entre 1 e 3xs por mês
x4_4=rep(0,n)          # 1 se entre 1 e 4xs por semana


for( i in 1:n){
if(x4[i]==1)x4_1[i]=1
if(x4[i]==2)x4_2[i]=1
if(x4[i]==3)x4_3[i]=1
if(x4[i]==4)x4_4[i]=1

               }


ajuste5=lm(y~x4_1+x4_2+x4_3+x4_4)
summary(ajuste5)


########## ajuste final


ajuste6=lm(y~x1_md+x2+x3_md)
summary(ajuste6)


########## ajuste final

ajuste7=lm(y~x2+x3_md)
summary(ajuste7)