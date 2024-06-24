public class App {
    public static void main(String[] args) throws Exception {
        Professor meuProfessor = new Professor(12345, "Luis", "Santos", 1999, "Programacao");
        
        Turma minhaTurma = new Turma("CX12345", "Programador de Informática", 2023, 2026);

        Aluno meuAluno = new Aluno("a12345", "Filipe", "Duarte", "1999", minhaTurma.nomeCurso);

        System.out.println(meuProfessor);
        System.out.println(" ");
        System.out.println(minhaTurma);
        System.out.println(" ");
        System.out.println(meuAluno);
        System.out.println(" ");
    }
}
