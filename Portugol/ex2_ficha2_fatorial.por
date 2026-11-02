programa {
  inteiro fatorial, resultado, soma
  funcao inicio() {
    escreva("me de um numero ")
    
    leia(fatorial)

    escreva(fatorial,"!= ")

    soma =0
    resultado = 1
    para(inteiro i = fatorial; i >= 1; i--){
      resultado = resultado*i
      escreva(i)
      
      se(i<=fatorial e i >1){
        escreva(" x ")
      }

    }
    escreva (" = ", resultado)
  }
}
