programa {
  inteiro numero, soma
  funcao inicio() {
    escreva("digite um numero inteiro ")
    leia(numero)

    soma = 0

    para(inteiro i = 1; i < numero; i++){

      se (numero % i == 0){

        soma += i
      }


    }
    se ( soma == numero){
      escreva ("o numero ", numero, " é um numero perfeito")
    } senao{
        escreva ("o numero ", numero, " não é um numero perfeito")
    }
  }
}
