programa {
	real n1,n2,n3,media
	cadeia nome
	funcao inicio() {
		escreva ("qual o nome do aluno?")
		leia (nome)
		escreva ("qual a media dos 3 semestres do aluno?")
		leia (n1)
		leia (n2)
		leia (n3)
		media = ((n1+n2+n3)/3)
		se (media >=14){
			escreva ("o " ,nome, " está aprovado" )
		} se (media <=10){
			escreva ("o " ,nome, " está reprovado" )
		} se (media >=10.2 e media<=13.8){
			escreva ("o " ,nome, " está de recuperaçao" )
		}



	}
}
