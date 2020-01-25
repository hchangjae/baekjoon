import java.io.*;
public class main{
    public static void main(String[] args)throws Exception{
        FileReader fr = new FileReader("input.txt");
        BufferedReader br = new BufferedReader(fr);


        br.close();
        fr.close();
    }
}