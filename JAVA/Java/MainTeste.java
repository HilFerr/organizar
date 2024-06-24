// java -cp . MainTeste

public class MainTeste {

    static int calculaNumerosBiDimensionais() {
        int[][] myNumbers = {{1, 2, 3, 4, 5}, {6, 7}};
        int somaTotal = 0;

        for (int[] arrayNum : myNumbers) {
            for (int numero : arrayNum) {
                somaTotal += numero;
            }
        }
        return somaTotal;
    }

    public static int fatorial(int k) {
        if (k > 1) {
            return (k * fatorial(k - 1));
        } else {
            return k;
        }
    }

    static void mostraSoma(int numero) {
        System.out.println("O resultado é: " + numero);
    }

    static void mostraSoma(double numero) {
        System.out.println("O resultado é: " + numero);
    }

    public static void main(String[] args) {
        System.out.println(calculaNumerosBiDimensionais());
    }
}

