import java.time.LocalDate;
import java.time.LocalDateTime;
import java.time.Period;

public class Pessoa {
    private String nomeProprio;
    private String sobrenome;
    private LocalDate dataNascimento; // 11-09-2001 | 11/09/01 | 11 de Setembro de 2001
    private boolean falecido;
    private LocalDate dataFalecimento;
    private Pessoa pai;
    private Pessoa mae;

    // Getter e setter de 'nomeProprio'
    public String getNomeProprio() {
        return nomeProprio;
    }
    public void setNomeProprio(String nomeProprio) {
        this.nomeProprio = nomeProprio;
    }


    // Getter e setter de 'sobrenome'
        public String getSobrenome() {
        return sobrenome;
    }
    public void setSobrenome(String sobrenome) {
        this.sobrenome = sobrenome;
    }


    // Getter e setter de 'dataNascimento'
    public LocalDate getDataNascimento() {
        return dataNascimento;
    }
    public void setDataNascimento(LocalDate dataNascimento) {
        this.dataNascimento = dataNascimento;
    }


    // Getter e setter de 'falecido'
    public boolean isFalecido() {
        return falecido;
    }
    public void setFalecido(boolean falecido) {
        this.falecido = falecido;
    }


    // Getter e setter de 'dataFalecimento'
    public LocalDate getDataFalecimento() {
        return dataFalecimento;
    }
    public void setDataFalecimento(LocalDate dataFalecimento) {
        this.dataFalecimento = dataFalecimento;
    }


    // Getter e setter de 'pai'
    public Pessoa getPai() {
        return pai;
    }
    public void setPai(Pessoa pai) {
        this.pai = pai;
    }


    // Getter e setter de 'mae'
    public Pessoa getMae() {
        return mae;
    }
    public void setMae(Pessoa mae) {
        this.mae = mae;
    }


    // Construtor vazio
    public Pessoa() {
        this.nomeProprio = "";
        this.sobrenome = "";
        this.dataNascimento = null;
        this.falecido = false;
        this.dataFalecimento = null;
        this.pai = null;
        this.mae = null;
    }


    // Construtor que recebe todos os atributos
    public Pessoa(String nomeProprio, String sobrenome, LocalDate dataNascimento, boolean falecido, LocalDate dataFalecimento, Pessoa pai, Pessoa mae) {
        this.nomeProprio = nomeProprio;
        this.sobrenome = sobrenome;
        this.dataNascimento = dataNascimento;
        this.falecido = falecido;
        this.dataFalecimento = dataFalecimento;
        this.pai = pai;
        this.mae = mae;
    }

    // toString
    @Override
    public String toString() {

        String aux = " ";
               aux += "Pessoa [nomeProprio=" + nomeProprio + ", ";
               aux += "sobrenome=" + sobrenome + ", ";
               aux += "dataNascimento=" + dataNascimento + " ";


               aux += "\n\t Pais de (" + nomeProprio + " " + sobrenome + ")";
               aux += "pai=" + pai + "\t mae=" + mae + "\n";

        return aux;
    }

    public int getIdade() {
        LocalDate dataAtual = LocalDate.now();
        Period periodo = Period.between(dataNascimento, dataAtual);
        return periodo.getYears();
    }

    public String mostraDescendencia(int nivel) {
        String aux = "\n";
        for (int i = 0; i < nivel; i++) aux += "\t ";
        if (falecido) {
            aux += nomeProprio + " (Falecido)";
        } else {
            aux += nomeProprio + " (" + this.getIdade() + ")";
        }
        if (pai != null) {
            aux += pai.mostraDescendencia(nivel + 1);
        }
        if (mae != null) {
            aux += mae.mostraDescendencia(nivel + 1);
        } 
        return aux;
    }
}

