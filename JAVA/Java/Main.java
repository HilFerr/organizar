public class Main {
    public static void main(String[] args) {
        if (args.length > 0) {
            System.out.println("RECEBI OS SEGUINTES ARGUMENTOS:");
            for (String i: args) {
                System.out.println(i);
            }
        }

        Alunos Hilario = new Alunos(14467, "Hilario", 911016511, "Sesame Street");
        Hilario.mostraInfo();

        Carro meuCarro = new Carro("Audi", "A4", "05-QN-81", 2015, 0);
        meuCarro.mostraInfo();
        meuCarro.buzinar();
    }
}
