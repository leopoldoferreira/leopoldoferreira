################ simulação de dados de regressão


#############################
#############################
## entre com o seu número####

numero_aluno=14

#############################
#############################

aux=100*numero_aluno

set.seed(aux)

aux2=numero_aluno%%5+1
aux3=numero_aluno%%2+1
aux_aluno=c(1,rep(0,5))

for(i in 2:6){
if(aux2==i){aux_aluno[i]=1}
if(aux3==i){aux_aluno[i]=1}
              }

aux_vc=c(38,3,-0.55,2,1.75,1.5)
aux_r=aux_vc*aux_aluno

x1=numeric()  ### SEXO 1-MASCULINO 2-FEMININO
x2=numeric()  ###  IDADE
x3=numeric()  ### 1-ADMINISTRATIVO 2-OPERACIONAL
x4=numeric()  ### ALCOOL - 1-ATUALMENTE NÃO BEBE -  2-MENOS DE UMA VEZ POR MÊS  -  3-BEBO 1 A 3 VEZES POR MÊS  - 4-BEBO DE 1 A 4 VEZES POR SEMANA   - 5- BEBO MAIS QUE 4 VEZES POR SEMANA
x5=numeric()  ### TABACO - 1-NÃO FUMA 2-FUMANTE
y=numeric()   ### ICT

n=100

for(i in 1:n){
aux_f=0
x1[i]=rbinom(1,1,0.35)+1
x2[i]=rpois(1,25)
x3[i]=rbinom(1,1,0.65)+1
x4[i]=rbinom(1,4,0.5)+1
x5[i]=rbinom(1,1,0.35)+1

if(x4[i]==1){aux_f=1}

y[i]=round(c(1,(x1[i]-1),x2[i],(x3[i]-1),aux_f,(x5[i]-1))%*%aux_r+rnorm(1,0,1),0)

              }

z=matrix(NA,ncol=6,nrow=n)
z[,1]=y
z[,2]=x1
z[,3]=x2
z[,4]=x3
z[,5]=x4
z[,6]=x5

x1   ### SEXO 1-MASCULINO 2-FEMININO
x2   ### IDADE
x3   ### 1-ADMINISTRATIVO 2-OPERACIONAL
x4   ### ALCOOL - 1-ATUALMENTE NÃO BEBE -  2-MENOS DE UMA VEZ POR MÊS  -  3-BEBO 1 A 3 VEZES POR MÊS  - 4-BEBO DE 1 A 4 VEZES POR SEMANA   - 5- BEBO MAIS QUE 4 VEZES POR SEMANA
x5   ### TABACO - 1-NÃO FUMA 2-FUMANTE
y    ### ICT


############## Ajuste ######################


### SEXO 0-MASCULINO 1-FEMININO
### IDADE
### 0-ADMINISTRATIVO 1-OPERACIONAL
### ALCOOL - AUX1-ATUALMENTE NÃO BEBE -  AUX2-MENOS DE UMA VEZ POR MÊS  -  AUX3-BEBO 1 A 3 VEZES POR MÊS  - AUX4-BEBO DE 1 A 4 VEZES POR SEMANA
### TABACO - 0-NÃO FUMA 1-FUMANTE



############## Ajuste ######################


########### DECLARO QUE APENAS P VALORES ABAIXO DE 5% SÃO RELEVANTES

n=length(y) #N tem o valor do tamanho de Y = ict
x1_md=rep(0,n)          # 0-feminino 1-masculino
x3_md=rep(0,n)          # 0-operacional 1-adm
x5_md=rep(0,n)          # 0-fumante 1-não fuma
for( i in 1:n){ #For para transformar os 2 em 1
if(x1[i]==2)x1_md[i]=1
if(x3[i]==2)x3_md[i]=1
if(x5[i]==2)x5_md[i]=1
               }


############# regressao linear simples

ajuste1=lm(y~x1_md) 
summary(ajuste1)
#P valor de Sexo é 0.143, portanto, não é relevante


ajuste2=lm(y~x2)
summary(ajuste2)
#P valor de Idade é 0.49, portanto, não é relevante

ajuste3=lm(y~x3_md)
summary(ajuste3)
#P valor de Setor é 0.28, portanto, não é relevante

ajuste4=lm(y~x5_md)
summary(ajuste4)
#P valor de Tabado é 0.39, portanto, não é relevante

############# regressão linear multipla

# é necessário 4 variáveis dummies por tem 5 opções na coluna Alcool
x4_1=rep(0,n)          # 1 se não beber
x4_2=rep(0,n)          # 1 se menos de 1x por mês
x4_3=rep(0,n)          # 1 se entre 1 e 3xs por mês
x4_4=rep(0,n)          # 1 se entre 1 e 4xs por semana

# for para onde for 1 em x4, ser 1 em x4_1
# onde for 2 em x4, ser 1 em x4_2 e assim por diante
for( i in 1:n){
if(x4[i]==1)x4_1[i]=1
if(x4[i]==2)x4_2[i]=1
if(x4[i]==3)x4_3[i]=1
if(x4[i]==4)x4_4[i]=1
}

ajuste5=lm(y~x4_1+x4_2+x4_3+x4_4)
summary(ajuste5)
#P valor de x4_1 é 0.006, x4_2 é 0.43, x4_3 é 0.35, x4_4 é 0.24.
# apenas x4_1 é relevante, mas, ela carrega todas para o ajuste final.

########## ajuste final

ajuste6=lm(y~x4_1+x4_2+x4_3+x4_4)
summary(ajuste6)
# Continua apenas a x4_1 sendo relevante.

########## ajuste final

ajuste7=lm(y~x4_1)
summary(ajuste7)
# P valor de x4_1 = 0.0034
# Em conclusão: y = B0 + B1
# y = 38.0000 + 1.4*(x4_1)

