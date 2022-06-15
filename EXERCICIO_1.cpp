printf("\nDigite o numero do aluno que voce deseja excluir:\n");
scanf("%d",&amp;au);
for(ii=0;ii&lt;i;ii++)
{
if(alunos[ii].numero==au)
{
pos=ii;
i=i-1;
j++;
}
}
if(j==0)
printf("\nNumero nao cadastrado\n");
if(pos!=-1){
for(ii=pos;ii&lt;i;ii++)
{
a=alunos[ii+1].notas[0];
b=alunos[ii+1].notas[1];
alunos[ii].numero=alunos[ii+1].numero;
strcpy(alunos[ii].nome,alunos[ii+1].nome);
strcpy(alunos[ii].curso,alunos[ii+1].curso);
alunos[ii].media=alunos[ii+1].media;
alunos[ii].notas[0]=a;
alunos[ii].notas[1]=b;
}
}
if(j!=0)
printf("\n%do aluno excluido.\n",pos+1);
j=0;
pos=-1;
printf("se deseja parar de excluir digite [0], senao digite [1]\n");
scanf("%d",&amp;p);
}
for(ii=0;ii&lt;i;ii++){
fprintf(produt,"\nNumero:%d",alunos[ii].numero);
fprintf(produt,"\nNome do aluno:%s",alunos[ii].nome);
fprintf(produt,"\nNome do curso do aluno:%s",alunos[ii].curso);
fprintf(produt,"\nNota 1:%f\n",alunos[ii].notas[0]);
fprintf(produt,"\nNota 2:%f\n",alunos[ii].notas[1]);
fprintf(produt,"\nMedia:%.2f\n",alunos[ii].media);
}
if(ferror(produt)==0)
printf("arquivo salvo com sucesso");
else
printf("problemas ao salvar o arquivo");
fclose(produt);
}
2° Faça um programa para criar um arquivo chamado VENDAS.DAT, em que
cada registro será composto pelos seguintes campos: codigo_vendedor,
nome_vendedor, valor_venda e mes. Inclua no programa rotinas para:
(a) incluir um vendedor no arquivo criado, lembrando que não podem existir
dois vendedores com o mesmo código e mesmo mês de vendas;
(b) alterar o valor de uma venda no arquivo criado;
(c) excluir um vendedor no arquivo criado;
(d) consultar o valor da venda de um vendedor em determinado mês no
arquivo criado;
(e) consultar o total das vendas de determinado vendedor do arquivo criado;
(f) consultar o nome e o código do vendedor que mais vendeu em determinado
mês no arquivo criado;
(g) consultar o mês com o maior valor de vendas e qual o nome do vendedor
que efetuou essas vendas no arquivo criado.
#include&lt;stdio.h&gt;
#include&lt;math.h&gt;
#include&lt;string.h&gt;
struct product{
int codigo;
char descricao[100];
float preco;
};
struct product prod[100];
int i=0;
FILE *produt;
void a();
void b();
void c();
void d();
void e();
void f();
void g();
void h();
void I();
void J();
int main(){
int op;
inicio:
printf("\nDigite: \n[1] incluir produtos \n[2] consultar descricao de produtos mais
caros que 500 reais \n[3] aumentar o preco dos produtos em 15 por cento\n[4]
aumentar o preco dos produtos em 10 reais\n[5] ver todos os produtos com a inicial
M\n[6] excluir produtos do arquivo criado\n[7] consultar produtos mais baratos que
15 reais\n[8] consultar produtos com a incial digitada pelo usuario \n[9] excluir todos
os produtos mais caros que 200 reais\n[10] conceder um percentual de desconto
aos produtos\n[11] encerrar o programa\n");
scanf("%d",&amp;op);
if(op==1){
cadastro:
a();
goto inicio;
}
if(op==2){
if(i==0){
printf("\n Eh necessario cadastrar os produtos\n");
goto cadastro;
}
b();
goto inicio;
}
if(op==3){
if(i==0){
printf("\nEh necessario cadastrar os produtos\n");
goto cadastro;
}
c();
goto inicio;
}
if(op==4){
if(i==0){
printf("\nEh necessario cadastrar os produtos\n");
goto cadastro;
}
d();
goto inicio;
}
if(op==5){
if(i==0){
printf("\nEh necessario cadastrar os produtos\n");
goto cadastro;
}
e();
goto inicio;
}
if(op==6){
if(i==0){
printf("\nEh necessario cadastrar os produtos\n");
goto cadastro;
}
f();
goto inicio;
}
if(op==7){
if(i==0){
printf("\nEh necessario cadastrar os produtos\n");
goto cadastro;
}
g();
goto inicio;
}
if(op==8){
if(i==0){
printf("\nEh necessario cadastrar os produtos\n");
goto cadastro;
}
h();
goto inicio;
}
if(op==9){
if(i==0){
printf("\nEh necessario cadastrar os produtos\n");
goto cadastro;
}
I();
goto inicio;
}
if(op==10){
if(i==0){
printf("\Eh necessario cadastrar os produtos\n");
goto cadastro;
}
J();
goto inicio;
}
if(op==11){
printf("\nDeseja encerrar o programa? se sim, digite [11], se nao digite qualquer
outro numero:\n");
scanf("%d",&amp;op);
if(op!=11){
printf("\nVoce estara retornando ao menu\n");
goto inicio;
}
if(i==0){
printf("\nnenhum produto foi cadstrado, se deseja finalizar, digite [11], se nao
digite qualquer outro numero:\n");
scanf("%d",&amp;op);
if(op!=11){
printf("\nVoce estara retornando ao menu\n");
goto inicio;
}
if(op==11){
produt=fopen("PRODUTO.DATA","w");
if(produt==NULL)
printf("\nerro na abertura do arquivo\n");
else{
printf("\nSucesso na criacao do arquivo\n");
}
printf("\nPrograma encerrado com sucesso!\n");
}
}
else
printf("\nPrograma encerrado com sucesso!\n");
}
return 0;
}
void a(){
int p=1,au=0,au2;
produt=fopen("PRODUTO.DATA","w");
if(produt==NULL)
printf("\nerro na abertura do arquivo\n");
else{
printf("\nSucesso na criacao do arquivo\n");
}
while(p!=0){
cadastrar:
printf("digite o codigo do produto a ser cadastrado:\n");
scanf("%d",&amp;au2);
if(i==0)
prod[i].codigo=au2;
if(i!=0){
for(int ii=0;ii&lt;i;ii++){
if(au2==prod[ii].codigo)
au++;
}
if(au!=0){
printf("\nCodigo ja cadastrado\n");
au=0;
goto cadastrar;
}
else
prod[i].codigo=au2;
}
setbuf(stdin,NULL);
printf("\ndigite a descricao do produto a ser cadastrado:\n");
gets(prod[i].descricao);
printf("\ndigite o preco do produto a ser cadastrado:\n");
scanf("%f",&amp;prod[i].preco);
i++;
printf("se deseja parar de cadastrar digite [0], senao digite [1]\n");
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
void b(){
int j=0;
for(int ii=0;ii&lt;i;ii++){
if(prod[ii].preco&gt;500){
printf("\nProduto %d\nDescricao: %s\n",j+1,prod[ii].descricao);
j++;
}
}
if(j==0)
printf("\nNao temos nenhum produto mais caro que 500 reais\n");
}
void c(){
produt=fopen("PRODUTO.DATA","w");
if(produt==NULL)
printf("\nerro na abertura do arquivo\n");
else{
printf("\nSucesso na criacao do arquivo\n");
printf("Produtos com os precos atualizados:\n");
for(int ii=0;ii&lt;i;ii++){
prod[ii].preco=prod[ii].preco*1.15;
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
printf("arquivo salvo com sucesso");
else
printf("problemas ao salvar o arquivo");
}
fclose(produt);
}
void d(){
produt=fopen("PRODUTO.DATA","w");
if(produt==NULL)
printf("\nerro na abertura do arquivo\n");
else{
printf("\nSucesso na criacao do arquivo\n");
printf("Produtos com os precos atualizados:\n");
for(int ii=0;ii&lt;i;ii++){
prod[ii].preco=prod[ii].preco+10;
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
printf("\narquivo salvo com sucesso");
else
printf("\nproblemas ao salvar o arquivo");
}
fclose(produt);
}
void e(){
char stra[100];
int j=0;
for(int ii=0;ii&lt;i;ii++){
strcpy(stra,prod[ii].descricao);
if(stra[0]=='M'||stra[0]=='m'){
printf("%s",prod[ii].descricao);
j++;
}
}
if(j==0)
printf("\nnenhum produto se incia com a letra M\n");
}
void f(){
int p=1,au,pos=-1,j=0;
produt=fopen("PRODUTO.DATA","w");
if(produt==NULL)
printf("\nerro na abertura do arquivo\n");
else{
printf("\nSucesso na criacao do arquivo\n");
}
while(p!=0){
printf("\nDigite o codigo do produto que voce deseja excluir:\n");
scanf("%d",&amp;au);
for(int ii=0;ii&lt;i;ii++){
if(prod[ii].codigo==au){
pos=ii;
i=i-1;
j++;
}
}
if(j==0)
printf("\nCodigo nao cadastrado\n");
if(pos!=-1){
for(int ii=pos;ii&lt;i;ii++){
prod[ii].codigo=prod[ii+1].codigo;
strcpy(prod[ii].descricao,prod[ii+1].descricao);
prod[ii].preco=prod[ii+1].preco;
