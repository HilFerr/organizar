import java.time.LocalDate;
import java.time.Period;

public class Pessoa {
    private String nome;
    private int anoNascimento;
    private int mesNascimento;
    private int diaNascimento;
    private Pessoa pai;
    private Pessoa mae;

    //getters dos atributos
    public String getNome() {
        return nome;
    }
    public int getAnoNascimento() {
        return anoNascimento;
    }
    public int getMesNascimento() {
        return mesNascimento;
    }
    public int getDiaNascimento() {
        return diaNascimento;
    }
    public Pessoa getPai() {
        return pai;
    }
    public Pessoa getMae() {
        return mae;
    }

    //setters dos atributos
    public void setNome(String nome) {
        this.nome = nome;
    }
    public void setAnoNascimento(int anoNascimento) {
        this.anoNascimento = anoNascimento;
    }
    public void setMesNascimento(int mesNascimento) {
        this.mesNascimento = mesNascimento;
    }
    public void setDiaNascimento(int diaNascimento) {
        this.diaNascimento = diaNascimento;
    }
    public void setPai(Pessoa pai) {
        this.pai = pai;
    }
    public void setMae(Pessoa mae) {
        this.mae = mae;
    }

    //construtor com todos os atributos
    public Pessoa(String nome, int anoNascimento, int mesNascimento, int diaNascimento, Pessoa pai, Pessoa mae) {
        this.nome = nome;
        this.anoNascimento = anoNascimento;
        this.mesNascimento = mesNascimento;
        this.diaNascimento = diaNascimento;
        this.pai = pai;
        this.mae = mae;
    }

    //construtor com os atributos basicos
    public Pessoa(String nome, int anoNascimento, int mesNascimento, int diaNascimento){
        this(nome, anoNascimento, mesNascimento, diaNascimento, null, null);
    }
    
    //metodo para calcular a idade
    public int getIdade (){
        LocalDate nascimento = LocalDate.of(anoNascimento, mesNascimento, diaNascimento);
        LocalDate hoje = LocalDate.now();
        return Period.between(nascimento, hoje).getYears(); 
    }

    //to_string
    @Override
    public String toString() {
       String paiNome = (pai != null) ? pai.getNome() : "";
       String maeNome = (mae != null) ? mae.getNome() : "";
       return "Nome: " + nome + ", Idade: " + getIdade() + ", Pai: " + paiNome + ", Mae: " + maeNome;

    }    
}