public class App {
    public static void main(String[] args) throws Exception {
        Estante myEstante = new Estante("E1", "1");
        Leitor myLeitor = new Leitor(14467, "Carlos Azevedo", "Moreira", "Carreira", "+351 911 016 511", "a14467@oficina.pt", "M");
        Livraria myLivraria = new Livraria("Hilario", "Carreira", "Santo Tirso", "+351 911 016 511", "a14467@oficina.pt");
        Livro myLivro = new Livro("Luis Santo, tambem conhecido como Deus", "Luis Santo, tambem conhecido como Deus", 1940);

        System.out.println("Iniciais do Leitor = " + myLeitor.getIniciais());
        System.out.println("Iniciais do Leitor = " + myLeitor.getNomeConta());
    }
}
