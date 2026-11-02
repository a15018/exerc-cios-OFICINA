programa {
  real altura_chico, altura_juca
  inteiro anos
  funcao inicio() {
    altura_chico = 1.70
    altura_juca = 1.10
    anos = 0
    enquanto ( altura_juca <= altura_chico){
    anos++
    altura_chico = altura_chico + 0.02
    altura_juca = altura_juca + 0.06

    }
    escreva ("total de anos: ", anos)
  }
}
