programa {
	cadeia user, utilizador
	inteiro pass, senha, i
	funcao inicio() {
		i = 3
		enquanto (i > 0){
			user = "isaque"
			pass = 1234

			escreva("\nqual o utilizador? ")
			leia (utilizador)
			escreva("\nqual a senha? ")
			leia (senha)

			se (senha == pass e utilizador == user){
				escreva("acesso autorizado")
				i = 0
			} senao{
				escreva("acesso negado")
				i--
				escreva("\nvoce tem ", i , " tentativas")
			}

		}


		
	}
}
