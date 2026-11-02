programa {
  inclua biblioteca Util

  funcao inicio() {
    inteiro numero_aleatorio, tentativas = 0, num = 0
    logico acabou = falso
    numero_aleatorio = Util.sorteia(0,500)
  
    faca{
      escreva("\ntente adivinhar um numero ")
      leia(num)
      tentativas++

      se(num < numero_aleatorio){

        escreva("tente novamente o numero é maior que ", num)

      } senao se(num> numero_aleatorio){

        escreva("tente novamente o numero é menor que ", num)

      } senao{

        escreva("acertou o numero ")
        acabou = verdadeiro
        pare

      }

    }enquanto(tentativas <10)

    se(tentativas >=10 e acabou == falso){

      escreva("\ntente novamente")

    } senao se (tentativas >= 7 ou tentativas <=10){

        escreva("\nNormal")

    } senao se (tentativas <=6 ou tentativas >=4){

        escreva("sortudo")

    } senao{

        escreva("muito sortudo")
        
    }

    escreva(" \nvoce utilizou ", tentativas)


  }
}
