/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   
   
    int horaFilme, minFilme, opcao, idade, bilheteCrianca, diferenca, confirmar,
    bilheteAdulto, bilheteSenior, totalbilhete_vendido, horaChegada, minutoChegada,
    horaChegada_minuto, horaFilme_minuto, somaIdade, maiorIdade, menorIdade, lotacaoSala,
    esgotado, diferencaLotacao, cartaoEstudante, diaSemana, tempochegada;
    
    float preco, totalFaturado, idadeMedia, percentagem;
     
    bilheteCrianca = 0;
    bilheteAdulto = 0;
    bilheteSenior = 0;
    opcao = -1;
    totalFaturado = 0;
    totalbilhete_vendido = 0;
    horaChegada = 0;
    minutoChegada = 0;
    diferenca = 0;
    horaChegada_minuto = 0;
    horaFilme_minuto = 0;
    somaIdade = 0;
    idadeMedia = 0;
    maiorIdade = 0;
    menorIdade = 120;
    confirmar = 0;
    esgotado = 0;
    diferencaLotacao = 0;
    percentagem = 0;
    cartaoEstudante = 0;
    diaSemana = 0;
    
    printf("-------------   BILHETEIRA DO CINEMA: ESTANISLAU TAVARES   -------------- \n");
    //Pergunta o dia da Semana.
    printf("\n\t\t\tQual é o dia da Semana? \n\n(1-segunda, 2-terça, 3-quarta, 4-quinta, 5-sexta, 6-sabado, 7-domingo): ");
    scanf("%d", &diaSemana);
    
    if(diaSemana == 1){
        printf("\n\t\t\t=====Segunda Feira=====\n");
    }else if(diaSemana == 2){
        printf("\n\t===== Terça Feira 'Parabéns tens direito a 20%% de desconto' =====\n");
    } else if(diaSemana == 3){
        printf("\n\t\t\t=====Quarta Feira=====\n");
    }else if(diaSemana == 4){
        printf("\n\t\t\t=====Quinta Feira=====\n");
    }else if(diaSemana == 5){
        printf("\n\t\t\t=====Sexta Feira=====\n");
    }else if(diaSemana == 6){
        printf("\n\t\t\t=====Sabado=====\n");
    }else if(diaSemana== 7){
        printf("\n\t\t\t=====Domingo=====\n");
    }
    
    while(diaSemana <1 || diaSemana > 7){
        printf("\nDia invalido.\n");
        printf("\nDigite novamente (1 a 7): \n");
        scanf("%d", &diaSemana);
        
    }
    printf("\nQual a lotação maxima da sala?: ");
    scanf("%d", &lotacaoSala);
    
    printf("\nInício do filme (horas): ");
    scanf("%d", &horaFilme);
    
    printf("\nMinutos do filme (minutos): ");
    scanf("%d", &minFilme);
    
    // validação da hora do filme.
    while(horaFilme < 0 || horaFilme > 23 || minFilme < 0 || minFilme > 59){ //validação das horas.
                
        printf("\nHora ou minutos invalidos, digitar novamente!\n");
        printf("\nQue horas inicia o filme?: ");
        scanf("%d", &horaFilme);
        printf("\nE quantos minutos? :");
        scanf("%d", &minFilme);
        }
        
     // Ciclo principal Menu.
    printf("\n--------MENU--------");
    printf("\nVender Bilhete - opção 1.");
    printf("\nControlo de Entrada - opção 2.");
    printf("\nEstatistica - opção 3.");
    printf("\nSair - opção 0.");
    
    printf("\nEscolhe uma das opções (1 a 3) e (0 - sair): ");
    scanf("%d", &opcao);
    
    if(opcao == 0){
        printf("\nTem a certeza que quer sair?  (1 = Sim, 0 = Não): ");
        scanf("%d", &confirmar);
        while(confirmar != 0 && confirmar != 1){
            printf("Opção Invalida. numero valido (1=sair, 0 = Não): ");
            scanf("%d", &confirmar);
        }
        if(confirmar == 0){
            opcao = -1;
            }
        }
        
    while(opcao != 0){
        
        while((opcao < 0 || opcao > 3) && opcao!= -1){
            printf("Opção Invalida.");
            printf("\nEscolhe uma das opções (1 a 3) e (0 - sair): ");
            scanf("%d", &opcao);
            }
    
        /* Opção 1. Saber a Idade do Cliente*/
        
        if(opcao ==1){
            printf("\n=====Vender Bilhete=====\n");
            
            //Verificação da Lotação: Se atingiu o limite, encerra o programa.
            if(totalbilhete_vendido == lotacaoSala){
                printf("\nSala Esgotada!\n");
                printf("\nPrograma encerrado com sucesso. Bom trabalho!");
                
                // Resumo final.
                printf("\n\n============= Fim ==========================");
                printf("\n\nResumo da Bilheteira -- Estanislau Tavares--");
                printf("\n\n============================================");
                printf("\n\nTotal faturado São - %.2f euros.", totalFaturado);
                printf("\nTotal bilhete vendido são - %d.", totalbilhete_vendido);
                printf("\nTotal bilhete de Crianca - %d.", bilheteCrianca);
                printf("\nBilhete de Adulto - %d.", bilheteAdulto);
                printf("\nBilhete Senior - %d\n.", bilheteSenior);
                printf("\nSoma de Todadas as Idades são - %d.", somaIdade);
    
                return 0; // Terminar o programa.
            }
            //Se a sala não estiver cheia ela continua a venda.
            else{
                printf("\nQual a idade do Cliente?: ");
                scanf("%d", &idade);
            }
            
            while(idade < 0 || idade > 120){
                printf("Idade invalida.");
                printf("\nQual a idade do Cliente?: ");
                scanf("%d", &idade);
            }
            //Difini;\ao do cliente mais novo e mais velho.
            if(totalbilhete_vendido == 0){
                maiorIdade = idade;
                menorIdade = idade;
            }
            else{
                if(idade > maiorIdade){
                maiorIdade = idade;
                }
            
                if(idade < menorIdade){
                    menorIdade = idade;
                }
            }
            //Difini;\ao de preço por escalão etário
            if(idade <= 11){
                preco = 5;
                bilheteCrianca = bilheteCrianca + 1 ;

                //printf("\nO Cliente vai comprar um bilhete a %.2f euros.\n", preco);
            }
            else if(idade >= 12 && idade <= 25){
                printf("O cliente tem cartão estudante? (1-Sim, 0-Não) : ");
                scanf("%d", &cartaoEstudante);
                while(cartaoEstudante != 0 && cartaoEstudante!= 1){
                    printf("\nOpção invalida. O cliente tem cartão estudante? (1-Sim, 0-Não): ");
                    scanf("%d", &cartaoEstudante);
                }
                if(cartaoEstudante== 1){
                     preco  = 6.5;
                bilheteAdulto = bilheteAdulto + 1;
                }
                else{
                    preco  = 8;
                    bilheteAdulto = bilheteAdulto + 1;
                 
                }
            }
            else if(idade > 11 && idade <= 64){
                preco  = 8;
                bilheteAdulto = bilheteAdulto + 1;
               // printf("\nO cliente vai comprar o bilhete a %.2f euros.\n", preco);  
            }
            else if(idade > 64 && idade <= 120){
                preco = 6;
                bilheteSenior = bilheteSenior + 1;
                //printf("\nO cliente vai comprar o bilhete a %.2f euros.\n", preco);
            }
            if(diaSemana == 2){
                preco = preco *0.8;
            }
             // Atribuição das Contas.
            printf("\nO cliente vai comprar um bilhete a %.2f euros\n", preco);
            totalbilhete_vendido = totalbilhete_vendido + 1;
            totalFaturado = totalFaturado + preco;
            somaIdade = somaIdade + idade;
        }
        /* Opção 2. Saber a hora de entrada dos clientes*/
        if(opcao == 2){
            //Chegada dos clientes hora posto ca pq tem q fazer verificação de entrada.
            printf("\nChegada do cliente (horas): ");
            scanf("%d", &horaChegada);
    
            printf("\nChegada do cliente (minuto): ");
            scanf("%d", &minutoChegada);
            
            while(horaChegada < 0 || horaChegada > 23 || minutoChegada < 0 || minutoChegada > 59){
                 
                printf("\nHora ou minutos invalidos, digitar novamente!");
                printf("\nQue horas Chegou o cliente?: ");
                scanf("%d", &horaChegada);
                printf("\nE quantos minutos? :");
                scanf("%d", &minutoChegada);
                }
            // Conversão e cálculo de diferença.
            horaFilme_minuto = horaFilme * 60 + minFilme;
            horaChegada_minuto = horaChegada * 60 + minutoChegada;
            tempochegada = horaChegada * 60 + minutoChegada; 
            diferenca = horaFilme_minuto - horaChegada_minuto;
            
            if(diferenca > 30){
                diferenca = diferenca - 30;
                printf("\nAinda é cedo. Aguarde %d minutos\n", diferenca);
            }
            else if (diferenca <= 30 && diferenca >= -15){
                printf("\nPode entrar na Sala.");
            }
            else if(diferenca < -15){
                printf("\nJá não tem acesso a sala.");
            }    
        }
        /* Opção 3. Estatística*/
        
        if(opcao == 3){
            printf("\n=====ESTATÍSTICA!=====\n");
            if(totalFaturado == 0){
                printf("\nAinda não foram vendido bilhete.\n");
                printf("\n\nTotal faturado São - %.2f euros.", totalFaturado);
                printf("\nTotal bilhete vendido são - %d.", totalbilhete_vendido);
                printf("\nTotal bilhete de Crianca - %d.", bilheteCrianca);
                printf("\nBilhete de Adulto - %d.", bilheteAdulto);
                printf("\nBilhete Senior - %d\n.", bilheteSenior);
                printf("\nSoma de Todadas as Idades são - %d.", somaIdade);
                printf("\nIdade Media - %.2f.", idadeMedia);
                printf("\nO cliente mais novo tem - %d anos.", menorIdade);
                printf("\nO cliente mais velho tem - %d anos.\n", maiorIdade);
           
                }   
            else{
                if(totalbilhete_vendido < lotacaoSala){
                    diferencaLotacao = lotacaoSala - totalbilhete_vendido;
                    percentagem = ((float)totalbilhete_vendido / lotacaoSala) * 100;
                    printf("\nRestaram %d lugares.", diferencaLotacao);
                    printf("\nA percentagem da sala é %.2f%%", percentagem);
                }
                
                idadeMedia = (float)somaIdade / totalbilhete_vendido;
                printf("\n\nTotal faturado São - %.2f euros.", totalFaturado);
                printf("\nTotal bilhete vendido são - %d.", totalbilhete_vendido);
                printf("\nTotal bilhete de Crianca - %d.", bilheteCrianca);
                printf("\nBilhete de Adulto - %d.", bilheteAdulto);
                printf("\nBilhete Senior - %d\n.", bilheteSenior);
                printf("\nSoma de Todadas as Idades são - %d.", somaIdade);
                printf("\nIdade Media - %.2f.", idadeMedia);
                printf("\nO cliente mais novo tem - %d anos.", menorIdade);
                printf("\nO cliente mais velho tem - %d anos.\n", maiorIdade);
           
                }
            }
            
        printf("\n--------MENU--------");
        printf("\nVender Bilhete - opção 1.");
        printf("\nControlo de Entrada - opção 2.");
        printf("\nEstatistica - opção 3.");
        printf("\nSair - opção 0.");
        printf("\nEscolhe uma das opções (1 a 3) e (0 - sair): ");
        scanf("%d", &opcao);
        //opçao 0. confirmação de saida.
        if(opcao == 0){
            printf("Tem a certeza que quer sair?  (1 = Sim, 0 = Não): ");
            scanf("%d", &confirmar);
            if(confirmar == 0){
                opcao = -1; // Mantém ociclo ativo voltando a exibir o menu.
                }
            }            
    }
    if(opcao == 0){
        printf("\nTem a certeza que quer sair?  (1 = Sim, 0 = Não): ");
        scanf("%d", &confirmar);
        while(confirmar != 0 && confirmar != 1){
            printf("Opção Invalida. numero valido (1=sair, 0 = Não): ");
            scanf("%d", &confirmar);
        }
        if(confirmar == 0){
            opcao = -1;
            }
        }   
    // Resumo final.
    printf("\n\n============= Fim ==========================");
    printf("\n\nResumo da Bilheteira -- Estanislau Tavares--");
    printf("\n\n============================================");
    printf("\n\nTotal faturado São - %.2f euros.", totalFaturado);
    printf("\nTotal bilhete vendido são - %d.", totalbilhete_vendido);
    printf("\nTotal bilhete de Crianca - %d.", bilheteCrianca);
    printf("\nBilhete de Adulto - %d.", bilheteAdulto);
    printf("\nBilhete Senior - %d\n.", bilheteSenior);
    printf("\nSoma de Todadas as Idades são - %d.", somaIdade);
    
    return 0;
}