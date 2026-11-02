programa {
  inclua biblioteca Texto
  cadeia texto
  inteiro tamanho
  funcao inicio() {
    escreva("digite um texto: ")
    leia(texto)

    tamanho = Texto.numero_caracteres(texto)

    para(inteiro i = 0; i < tamanho; i++){
      escreva(Texto.obter_caracter(texto,i), " ")
    }
  }
}
