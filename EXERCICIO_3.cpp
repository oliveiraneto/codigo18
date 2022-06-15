if(j!=0)
printf("\n%do produto excluido.\n",pos+1);
j=0;
pos=-1;
printf("se deseja parar de excluir digite [0], senao digite [1]\n");
scanf("%d",&amp;p);
}
for(int ii=0;ii&lt;i;ii++){
fprintf(produt,"\nCodigo:%d",prod[ii].codigo);
fprintf(produt,"\nDescricao:%s",prod[ii].descricao);
fprintf(produt,"\nPreco:%f\n",prod[ii].preco);
}
if(ferror(produt)==0)
printf("arquivo salvo com sucesso");
else
printf("problemas ao salvar o arquivo");
fclose(produt);
}
void g(){
int j=0;
for(int ii=0;ii&lt;i;ii++){
if(prod[ii].preco&lt;15){
printf("\nProduto %d\nDescricao: %s\n",j+1,prod[ii].descricao);
j++;
}
}
if(j==0)
printf("\nNao temos nenhum produto mais barato que 15.00 reais\n");
}
void h(){
char c,stra[100];
int j=0;
for(int ii=0;ii&lt;i;ii++){
setbuf(stdin,NULL);
printf("\nDigite a letra inicial do produto:\n");
scanf("%c",&amp;c);
strcpy(stra,prod[ii].descricao);
if(stra[0]==c){
printf("%s",prod[ii].descricao);
j++;
}
}
if(j==0)
printf("\nenhum produto se incia com a letra indicada %c\n",c);
}
void I(){
int pos=-1,j=0;
produt=fopen("PRODUTO.DATA","w");
if(produt==NULL)
printf("\nerro na abertura do arquivo\n");
else{
printf("\nSucesso na criacao do arquivo\n");
}
for(int ii=0;ii&lt;i;ii++){
if(prod[ii].preco&gt;200){
pos=ii;
i=i-1;
printf("\n produto: %s sera excluido\n",prod[pos].descricao);
for(int iii=pos;iii&lt;i;iii++){
prod[iii].codigo=prod[iii+1].codigo;
strcpy(prod[iii].descricao,prod[iii+1].descricao);
prod[iii].preco=prod[iii+1].preco;
}
j++;
}
}
if(j==0)
printf("\nNenhum produto mais caro que 200 reais\n");
if(j!=0)
printf("\n%d produtos excluidos.\n",j);
j=0;
for(int ii=0;ii&lt;i;ii++){
fprintf(produt,"\nCodigo:%d",prod[ii].codigo);
fprintf(produt,"\nDescricao:%s",prod[ii].descricao);
fprintf(produt,"\nPreco:%g\n",prod[ii].preco);
}
if(ferror(produt)==0)
printf("arquivo salvo com sucesso");
else
printf("problemas ao salvar o arquivo");
fclose(produt);
}
void J(){
float percent;
printf("\ndigite o percentual de desconto que voce quer dar\n");
scanf("%f",&amp;percent);
percent=percent/100;
produt=fopen("PRODUTO.DATA","w");
if(produt==NULL)
printf("\nerro na abertura do arquivo\n");
else{
printf("\nSucesso na criacao do arquivo\n");
printf("Produtos com os precos atualizados:\n");
for(int ii=0;ii&lt;i;ii++){
prod[ii].preco=prod[ii].preco-(prod[ii].preco*percent);
printf("\nProduto
%d\nCodigo:%d\nDescricao:%s\nPreco:%.2f\n",ii+1,prod[ii].codigo,prod[ii].descricao,
prod[ii].preco);
}
for(int ii=0;ii&lt;i;ii++){
fprintf(produt,"\nCodigo:%d",prod[ii].codigo);
fprintf(produt,"\nDescricao:%s",prod[ii].descricao);
fprintf(produt,"\nPreco:%.2f\n",prod[ii].preco);
}
if(ferror(produt)==0)
printf("arquivo salvo");
else
printf("problema ao salvar o arquivo");
}
fclose(produt);
}
