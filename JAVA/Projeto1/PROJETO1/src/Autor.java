public class Autor {
    private String nome;

    // GET DO 'nome'
    public String getNome() {
        return nome;
    }
    // SET DO 'nome'
    public void setNome(String nome) {
        this.nome = nome;
    }
    
///////////////////////////////////////////////////////////////////////

    private String sobrenome;

    // GET DO 'sobrenome'
    public String getSobrenome() {
        return sobrenome;
    }
    // SET DO 'sobrenome'
    public void setSobrenome(String sobrenome) {
        this.sobrenome = sobrenome;
    }

/////////////////////////////////////////////////////////////////////// 

    public Autor(String nome, String sobrenome) {
        this.nome = nome;
        this.sobrenome = sobrenome;
    }

    @Override
    public String toString() {
        return "Autor [nome=" + nome + ", sobrenome=" + sobrenome + "]";
    }
    
}
