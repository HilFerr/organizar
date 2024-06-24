import java.util.Calendar;

public class Aluno {
    // ATRIBUTO, GETTER E SETTERS DO 'codigo'
    String codigo = "";
    public String getCodigo() {
        return codigo;
    }
    public void setCodigo(String codigo) {
        this.codigo = codigo;
    }


    // ATRIBUTO, GETTER E SETTERS DO 'nomeProprio'
    String nomeProprio = "";
    public String getNomeProprio() {
        return nomeProprio;
    }
    public void setNomeProprio(String nomeProprio) {
        this.nomeProprio = nomeProprio;
    }


    // ATRIBUTO, GETTER E SETTERS DO 'nomeApelido'
    String nomeApelido = "";
    public String getNomeApelido() {
        return nomeApelido;
    }
    public void setNomeApelido(String nomeApelido) {
        this.nomeApelido = nomeApelido;
    }


    // ATRIBUTO, GETTER E SETTERS DO 'anoNascimento'
    String anoNascimento = "";
    public String getAnoNascimento() {
        return anoNascimento;
    }
    public void setAnoNascimento(String anoNascimento) {
        this.anoNascimento = anoNascimento;
    }


    // ATRIBUTO, GETTER E SETTERS DO 'turma'
    String turma = "";
    public String getTurma() {
        return turma;
    }
    public void setTurma(String turma) {
        this.turma = turma;
    }


    @Override
    public String toString() {
        return "Aluno [codigo=" + codigo + ", nomeProprio=" + nomeProprio + ", nomeApelido=" + nomeApelido
                + ", anoNascimento=" + anoNascimento + ", turma=" + turma + "]";
    }

    
    public Aluno() {
        this.codigo = null;
        this.nomeProprio = null;
        this.nomeApelido = null;
        this.anoNascimento = null;
        this.turma = null;
    }


    public Aluno(String codigo, String nomeProprio, String nomeApelido, String anoNascimento, String turma) {
        this.codigo = codigo;
        this.nomeProprio = nomeProprio;
        this.nomeApelido = nomeApelido;
        this.anoNascimento = anoNascimento;
        this.turma = turma;
    }

    // METODO PARA DEVOLVER O NOME COMPLETO
    public String getNomeCompleto(String nomeProprio, String nomeApelido) {
        return nomeProprio + " " + nomeApelido;
    }

    // METODO PARA DEVOLVER O NOME COMPLETO
    public int getIdade(int anoNascimento) {
        int currentYear = Calendar.getInstance().get(Calendar.YEAR);    
        return currentYear - anoNascimento;
    }
}
