public class Turma {
    // ATRIBUTO, GETTER E SETTERS DO 'codigo'
    String codigo = "";

    public String getCodigo() {
        return codigo;
    }
    public void setCodigo(String codigo) {
        this.codigo = codigo;
    }


    // ATRIBUTO, GETTER E SETTERS DO 'nomeCurso'
    String nomeCurso = "";

    public String getNomeCurso() {
        return nomeCurso;
    }
    public void setNomeCurso(String nomeCurso) {
        this.nomeCurso = nomeCurso;
    }


    // ATRIBUTO, GETTER E SETTERS DO 'anoInicio'
    int anoInicio = 0;

    public int getAnoInicio() {
        return anoInicio;
    }
    public void setAnoInicio(int anoInicio) {
        this.anoInicio = anoInicio;
    }

    
    // ATRIBUTO, GETTER E SETTERS DO 'anoInicio'
    int anoFim = 0;

    public int getAnoFim() {
        return anoFim;
    }
    public void setAnoFim(int anoFim) {
        this.anoFim = anoFim;
    }

    // toString COM TODOS OS ATRIBUTOS
    @Override
    public String toString() {
        return "Turma [codigo=" + codigo + ", nomeCurso=" + nomeCurso + ", anoInicio=" + anoInicio + ", anoFim="
                + anoFim + "]";
    }


    // METODO PARA DEVOLVER O NOME COMPLETO
    public String getInfoTurma(String codigo, String nomeCurso, int anoInicio, int anoFim, String aux) {
        aux = "Codigo        : " + codigo.toUpperCase() + "\n" +
              "Nome do Curso : " + nomeCurso.toUpperCase() + "\n" +
              "Ano de Inicio : " + anoInicio + "\n" +
              "Ano de Fim    : " + anoFim + "\n";

        return aux;
    }


    // CONSTRUTOR QUE RECEBE NADA
    public Turma() {
        this.codigo = null;
        this.nomeCurso = null;
        this.anoInicio = 0;
        this.anoFim = 0;
    }
    
    
    // CONSTRUTOR QUE RECEBE TUDO
    public Turma(String codigo, String nomeCurso, int anoInicio, int anoFim) {
        this.codigo = codigo;
        this.nomeCurso = nomeCurso;
        this.anoInicio = anoInicio;
        this.anoFim = anoFim;
    }
}
