public class Livraria {
    public String nome;
    public String getNome() {
        return nome;
    }
    public void setNome(String nome) {
        this.nome = nome;
    }

    
    public String morada;
    public String getMorada() {
        return morada;
    }
    public void setMorada(String morada) {
        this.morada = morada;
    }
    public String getMoradaCompelta() {
        String aux = "";

        aux += this.getNome();
        aux += "\n";
        aux += this.getMorada();
        aux += "\n";
        aux += this.getCidade();
        return aux;
    }


    public String cidade;
    public String getCidade() {
        return cidade;
    }
    public void setCidade(String cidade) {
        this.cidade = cidade;
    }


    public String telefone; // +351 252 024 005 (ESPAÇOS E +)
    public String getTelefone() {
        return telefone;
    }
    public void setTelefone(String telefone) {
        this.telefone = telefone;
    }


    public String email;
    public String getEmail() {
        return email;
    }
    public void setEmail(String email) {
        this.email = email;
    }

    
    public Livraria(String nome, String morada, String cidade, String telefone, String email) {
        this.nome = nome;
        this.morada = morada;
        this.cidade = cidade;
        this.telefone = telefone;
        this.email = email;
    }


    public Livraria() {
        this.nome = "";
        this.morada = "";
        this.cidade = "";
        this.telefone = "";
        this.email = "";
    }


    @Override
    public String toString() {
        return "Livraria [nome=" + nome + ", morada=" + morada + ", cidade=" + cidade + ", telefone=" + telefone
                + ", email=" + email + "]";
    }
}