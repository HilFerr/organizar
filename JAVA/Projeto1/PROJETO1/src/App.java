import java.time.LocalDate;
import java.util.*;

public class App {
    /**
     * @param args
     * @throws Exception
     */
    public static void main(String[] args) throws Exception {

        Categoria acao = new Categoria("acao", "accao", null);
        System.out.println(acao);
        Categoria animacao = new Categoria("animacao", "animacao", acao);
        System.out.println(animacao);
        List<Artigo> livros = new ArrayList<Artigo>();
        Artigo livroX = new Artigo("ABC DEF", new Autor("Hilario", "Ferreira"), LocalDate.of(2024, 05, 07), animacao);

        try (Scanner txtEntrada = new Scanner(System.in)) {
            int op = 1;
            while (op != 0) {
                System.out.println("Quer inserir um livro? (0 - N / 1 - S) R:");
                op = txtEntrada.nextInt();
                txtEntrada.nextLine();

                if (op != 0) {
                    System.out.println("Nome do livro: ");
                    String nomeLivro = txtEntrada.nextLine();

                    System.out.println("Nome do autor: ");
                    String nomeAutor = txtEntrada.nextLine();

                    System.out.println("Sobrenome do autor: ");
                    String sobrenomeAutor = txtEntrada.nextLine();

                    System.out.println("Data de publicacao (ex: 2024-05-09): ");
                    String dataPublicacao = txtEntrada.nextLine();

                    livros.add(new Artigo(nomeLivro, new Autor(nomeAutor, sobrenomeAutor), LocalDate.parse(dataPublicacao), acao));
                }
            }
        }
        livros.add(livroX);
        livros.add(new Artigo("Novo Livro", new Autor("O", "Caralho"), LocalDate.of(2024, 05, 07), new Categoria()));
        
        for (Artigo artigo : livros) {
            System.out.println(artigo + "\n");
        }

        ArtigoWeb livroWeb1 = new ArtigoWeb("Robin em Collants",
                                    new Autor("Luis", "Santos"),
                                    LocalDate.of(2024, 05, 07),
                                    animacao);

        System.out.println(livroWeb1);
    }
}
