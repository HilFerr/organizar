public class Alunos {
    public int numAluno = 0;
    public String nomeAluno = "";
    private int tlfAluno = 0;
    private String moradaAluno = "";

///////////////////////////////////////////////////////////////////////////////

    public void setNum(int txt) {
        this.numAluno = txt;    
    }

    public void setNome(String txt) {
        this.nomeAluno = txt;    
    }

    /** set do telefone */
    public void setTelefone(int txt) {
        this.tlfAluno = txt;    
    }

    public void setMorada(String txt) {
        this.moradaAluno = txt;    
    }

///////////////////////////////////////////////////////////////////////////////

    public int getNum() {
        return this.numAluno;   
    }

    public String getNome() {
        return this.nomeAluno;    
    }

    /** metodo para devolver o telefone */
    public int getTelefone() {
        return this.tlfAluno;
    }

    public String getMorada() {
        return this.moradaAluno;
    }

///////////////////////////////////////////////////////////////////////////////

    public void mostraInfo() {
        System.out.println("Numero: "   + this.getNum());
        System.out.println("Nome: "     + this.getNome());
        System.out.println("Telefone: " + this.getTelefone());
        System.out.println("Morada: "   + this.getMorada());
    }

    public Alunos(int numAlunoX, String nomeAlunoX, int tlfAlunoX, String moradaAlunoX) {
        this.numAluno = numAlunoX;
        this.nomeAluno = nomeAlunoX;
        this.tlfAluno = tlfAlunoX;
        this.moradaAluno = moradaAlunoX;
    }

    public static void main(String[] args) {


    }


}
