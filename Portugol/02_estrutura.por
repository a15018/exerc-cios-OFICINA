programa {
	caracter resposta 
	logico ativo
	inteiro nota
	funcao inicio() {
		escreva("Deseja seguir o curso de programação? (S/N) ")
		leia(resposta)

		se (resposta == 'S' ou resposta == 's'){
			escreva("entre na porta A...\n")
		} 
		senao {
			escreva ("entre na porta B...\n")
		}
		ativo = falso
		se (nao ativo) {
			escreva ("Ativo")
		} 
		senao{
			escreva("Inativo")
		}
		nota = 14
		se (nota <8 ){
			escreva("reprovado")
		}
		senao se (nota<=12){
			escreva("oral")
		}
		senao{
			escreva("aprovado")
		}
	}
}
