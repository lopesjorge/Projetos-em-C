#include<stdlib.h>
#include<stdio.h>

int main (){
	char l1='J',l2='o',l3='r',l4='g',l5='e',l6='L',l7='o',l8='p',l9='e',l10='s',l11='d',l12='e',l13='M',l14='e',l15='s',l16='q',l17='u',l18='i',l19='t',l20='a';
    int nome1=1234;
    int nome2=4321;
	int agencia=1020;
    int conta=2030;
    int not100=100;
	int op=0;
	int senha1=1234;
	int senha2=4321;
	int va,dep,saldo,saque,transf,boleto,num1,usuario,senha,usu,at,senhat,s;
    boleto=100;
	int num=0012;
	va=1000;
	system ("cls");
	printf("\nInsira o cartao e em seguida digite o nome de usuario:");
	scanf("%d",&usu);
	if (nome1!=usu && nome2!=usu) {printf("\nUsuario errado!!");return 0;
}
	printf("\nDigite a senha:");
	scanf("%d",&senha);
	if (senha!=senha1 && senha!=senha2 ){printf("\n Senha Invalida!!");return 0;
	}
	system ("csl");
	printf("\nDisponiveis notas de 100, 50, 20 e 10:");
	printf("\n\n[-MENU-]");
	printf("\n\n 1-DEPOSITO:");
	printf("\n 2-SAQUE:");
	printf("\n 3-TRANSFERENCIA:");
	printf("\n 4-REALIZAR PAGAMENTO:");
    printf("\n 5-ATUALIZAR SENHA DO TITULAR:");
    printf("\n 6-EXIT:");
    scanf("%d",&op);

    switch (op) {
    case 1: printf("\nDigite o valor do deposito:");
	scanf("%d",&dep);
	saldo=dep+va;
	printf("\nO seu saldo ehh de: %d reais",saldo);break;
    
	case 2: printf("\nDigite o valor a ser sacado:");
	scanf("\n%d",&saque);
	saque=va-saque;
    if(saque%10==5) {printf("\nOperacao invalida!!");
   }else {printf("\n\nOperacao realizada com sucesso!! seu novo saldo ehh de : %d reais!!",saque);break;
}break;
    
	case 3: printf("\n Digite o valor da transferencia:");
    scanf("%d",&transf);
    printf("\n Digite o numero da agencia :");
    scanf("%d",&agencia);
    printf("\n Digite o numero da conta a ser transferida:");
    scanf("%d",&conta);
    saldo=va-transf;
	printf("\nO nome do beneficiario ehhh %c%c%c%c%c %c%c%c%c%c %c%c %C%C%c%c%c%c%c%c ? 1-sim 2-nao :",l1,l2,l3,l4,l5,l6,l7,l8,l9,l10,l11,l12,l13,l14,l15,l16,l17,l18,l19,l20);
	scanf("%d",&op);
	switch (op){
	case 1: printf("\nOperacao realizada com Sucesso!! Seu novo saldo ehhh : %d reais",saldo);break;	
    case 2: printf("\nAperte 0 para cancelar a operacao!!! ");break;
	return 0;
	}break;
	
	case 4: printf("\nDigie o codigo do boleto :");
	scanf("%d",&num1);
	saldo=va-boleto;
	if (num1=num){printf("\n Operacao realizada com sucesso , e o seu novo saldo ehhh : %d",saldo);
	}else{	printf("\n O numero que voce digitou esta errado!!!!");
	}break;
	
	case 5: printf("\n Deseja atualizacao de senha ? 1-sim 2-nao :");
	scanf("\n%d",&op);
	switch (op){
	case 1: printf("\n Digite sua atual senha:");
	scanf ("\n%d",&at);
	senha=at;
if(senha1==senha || senha2==senha){printf("\n Digite sua nova senha :");
   scanf("\n%d",&s);
   senhat=s;
   printf("\n Senha atualizada com sucesso!! Sua nova senha ehh %d ",senhat);	
}
	}break;
	
			case 6: printf("\n Deseja sair ? 1-sim 2-nao");
	scanf("%d",&op);
	switch (op){
	case 1: printf("\nDigite 0 para sair!!");break;
	case 2:printf("\nDigite 1 para retornar ao MENU principal!!");
	}break;
	
	
	
	
}
	return (0);
}
