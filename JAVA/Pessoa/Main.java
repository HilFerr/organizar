public class Main {
    public static void main(String[] args) {
        //criação dos objetoso
        Pessoa filho = new Pessoa("Gustavo Goncalves", 2008, 6, 2);
        Pessoa pai = new Pessoa("Agostinho Goncalves", 1982, 6, 17);
        Pessoa mae = new Pessoa("Angela Pereira", 1986, 8, 3);

        //mostra descendencia
        System.out.println(filho);
        System.out.println(pai);
        System.out.println(mae);
    }
}