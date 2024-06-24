import java.time.LocalDate;

public class Artigo {
    private String titulo;

    // GET DO 'titulo'
    public String getTitulo() {
        return titulo;
    }
    // SET DO 'titulo'
    public void setTitulo(String titulo) {
        this.titulo = titulo;
    }

///////////////////////////////////////////////////////////////////////

    private Autor autor;

    // GET DO 'autor'
    public Autor getAutor() {
        return autor;
    }
    // SET DO 'autor'
    public void setAutor(Autor autor) {
        this.autor = autor;
    }

///////////////////////////////////////////////////////////////////////

    private LocalDate dataPublicacao;

    // GET DO 'dataPublicacao'
    public LocalDate getDataPublicacao() {
        return dataPublicacao;
    }
    // SET DO 'dataPublicacao'
    public void setDataPublicacao(LocalDate dataPublicacao) {
        this.dataPublicacao = dataPublicacao;
    }

///////////////////////////////////////////////////////////////////////

    private Categoria categoria;

    // GET DO 'categoria'
    public Categoria getCategoria() {
        return categoria;
    }
    // SET DO 'categoria'
    public void setCategoria(Categoria categoria) {
        this.categoria = categoria;
    }
    
///////////////////////////////////////////////////////////////////////

    public Artigo(String titulo, Autor autor, LocalDate dataPublicacao, Categoria categoria) {
        this.titulo = titulo;
        this.autor = autor;
        this.dataPublicacao = dataPublicacao;
        this.categoria = categoria;
    }

    public Artigo(String titulo, Autor autor) {
        this.titulo = titulo;
        this.autor = autor;
    }

    @Override
    public String toString() {
        return "Autor [titulo=" + titulo + ", autor=" + autor + ", dataPublicacao=" + dataPublicacao + ", categoria" + categoria + "]";
    }
    
}
