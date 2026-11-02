programa {
	inteiro n1,n2,n3
	funcao inicio() {
		escreva("escreva um numero ")
		leia(n1)

		escreva("escreva um segundo numero ")
		leia(n2)

		escreva("escreva mais um numero ")
		leia(n3)
		
		se(n1>n2 e n1>n3){
			escreva("o primeiro numero é o maior ")
		}
		senao se(n2>n1 e n2>n3){
			escreva("o segundo numero é o maior ")
		}
		senao{
			escreva("o o ultimo numero é o maior")
		}
	}
}
