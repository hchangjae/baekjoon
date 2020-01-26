import java.io.*;
class Main{
    public static void main(String[] args)throws Exception{
        FileReader fr = new FileReader("input.txt");
        // InputStreamReader fr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(fr);


        br.close();
        fr.close();
    }
}