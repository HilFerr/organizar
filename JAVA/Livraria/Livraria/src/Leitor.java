public class Leitor {
    public int numero;
    public int getNumero() {
        return numero;
    }
    public void setNumero(int numero) {
        this.numero = numero;
    }


    public String nome;
    public String getNome() {
        return nome;
    }
    public void setNome(String nome) {
        this.nome = nome;
    }


    public String sobrenome;
    public String getSobrenome() {
        return sobrenome;
    }
    public void setSobrenome(String sobrenome) {
        this.sobrenome = sobrenome;
    }


    public String morada;
    public String getMorada() {
        return morada;
    }
    public void setMorada(String morada) {
        this.morada = morada;
    }


    public String telefone; // +351 252 024 005 (ESPAÇOS E +)
    public String getTelefone() {
        return telefone;
    }
    public String getTelefoneString() {
        String aux = String.valueOf(telefone);
        String res = "";
        res += aux.substring(0, 3);
        res += " ";
        res += aux.substring(3, 6);
        res += " ";
        res += aux.substring(6, 9);
        return res;
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


    public String genero; // M, F, SEAT IBIZA
    public String getGenero() {
        return genero;
    }
    public void setGenero(String genero) {
        this.genero = genero;
    }

    public String getIniciais() {
        String res = "";
        String[] aux = nome.split(" ");
        for (String ch : aux) {
            res += ch.substring(0, 1) + ". ";
        }
        return res;
    }

    public String getNomeConta() {
        String aux = String.valueOf(nome);    
        String res = "";

        res += aux.substring(0,1)+ ". " + sobrenome;

        return res;
    }

    public Leitor(int numero, String nome, String sobrenome, String morada, String telefone, String email, String genero) {
        this.numero = numero;
        this.nome = nome;
        this.sobrenome = sobrenome;
        this.morada = morada;
        this.telefone = telefone;
        this.email = email;
        this.genero = genero;
    }


    public Leitor() {
        this.numero = 0;
        this.nome = "";
        this.sobrenome = "";
        this.morada = "";
        this.telefone = "";
        this.email = "";
        this.genero = "";
    }

    @Override
    public String toString() {
        return "Leitor [numero=" + numero + ", nome=" + nome + ", morada=" + morada + ", telefone=" + telefone
                + ", email=" + email + ", genero=" + genero + "]";
    }
}