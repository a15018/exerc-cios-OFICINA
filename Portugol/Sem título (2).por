programa {
  //procedimento

  funcao saudacao(cadeia nome){
    escreva("bem vindo ao curso de DS, " ,nome, "!" )
    
  }
  funcao inteiro somar(inteiro n1, inteiro n2){
    retorne n1 + n2
  }

  funcao real operacao(real n1, real n2, caracter op){
    escolha(op){
      caso '+': retorne n1+n2
      caso '-': retorne n1-n2
      caso '*': retorne n1*n2
      caso '/': 
          
          se (n2 == 0.0){
            escreva("divisao por zero")
            retorne 0.0
          } senao { retorne n1/n2}
    }
  }
  funcao inicio() {
    inteiro s1
    saudacao("ruan")
    escreva("soma1 = ", somar(2,3))
    escreva("\nsoma2 = ", somar(8,11))
    s1 = somar(9,13)
    escreva("\n soma3 = ", s1)

  }
}
