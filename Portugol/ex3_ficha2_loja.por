programa {
  inteiro totalp,totalv, valor, resultado
  caracter codigo
  funcao inicio() {

    totalp = 0
    totalv = 0
    para(inteiro i = 0; i<15;i++){

      escreva("qual o codigo(P/V) ")
      leia(codigo)
      escreva("qual o valor? ")
      leia(valor)

      se(codigo == 'P'){
        totalp = totalp + valor
      } senao se(codigo == 'V'){

        totalv = totalv + valor
      }
    }
    resultado = totalp + totalv

    escreva("\ntotal de compras a prazo: ", totalp)
    escreva("\ntotal de compras a vista: ", totalv)
    escreva("\ntotal de compras efetuados: ", resultado)
  }
}
