public class Professor {
    // ATRIBUTO, GETTER E SETTERS DO 'numero'
    int numero = 0;

    public int getNumero() {
        return numero;
    }
    public void setNumero(int numero) {
        this.numero = numero;
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
    int anoNascimento = 0;

    public int getAnoNascimento() {
        return anoNascimento;
    }
    public void setAnoNascimento(int anoNascimento) {
        this.anoNascimento = anoNascimento;
    }


    // ATRIBUTO, GETTER E SETTERS DO 'area'
    String area = "";

    public String getArea() {
        return area;
    }
    public void setArea(String area) {
        this.area = area;
    }


    // CONSTRUTOR QUE RECEBE NADA
    public Professor() {
        this.numero = 0;
        this.nomeProprio = null;
        this.nomeApelido = null;
        this.anoNascimento = 0;
        this.area = null;
    }


    // CONSTRUTOR QUE RECEBE TUDO
    public Professor(int numero, String nomeProprio, String nomeApelido, int anoNascimento, String area) {
        this.numero = numero;
        this.nomeProprio = nomeProprio;
        this.nomeApelido = nomeApelido;
        this.anoNascimento = anoNascimento;
        this.area = area;
    }


    // METODO PARA DEVOLVER O NOME COMPLETO
    public String getNomeCompleto(String nomeProprio, String nomeApelido) {
        return nomeProprio + " " + nomeApelido;
    }
    @Override
    public String toString() {
        return "Professor [numero=" + numero + ", nomeProprio=" + nomeProprio + ", nomeApelido=" + nomeApelido
                + ", anoNascimento=" + anoNascimento + ", area=" + area + "]";
    }
}
