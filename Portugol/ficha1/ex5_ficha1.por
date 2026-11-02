programa {
	inteiro codigo
	funcao inicio() {
		escreva("escolha o codigo de um produto: ")
		leia (codigo)


		escolha(codigo){
			caso 100:
				escreva ("prego")
				pare
			caso 200:
				escreva ("Parafuso")
				pare
			caso 300:
				escreva ("Anilha")
				pare
			caso 400:
				escreva ("Agulha")
				pare
			caso 500:
				escreva ("Tesoura")
				pare
			caso contrario:
				escreva ("o codigo inserido não existe")
		}	



	}
}
