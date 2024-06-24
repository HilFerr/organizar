public class Main {
    public static void main(String[] args) {
        if (args.length > 0) {
            for (String i: args) {
                System.out.println(i);
            }
        }

        System.out.println("Apartamento:");
        System.out.println(" ");
        Casa Apartamento = new Casa("Apartamento", 1, 3, 2, 80, 80);
        Apartamento.mostraInfo();

        System.out.println(" ");

        System.out.println("Vivenda:");
        System.out.println(" ");
        Casa Vivenda = new Casa("Vivenda", 3, 5, 4, 3000, 1000);
        Vivenda.mostraInfo();
    }
}
