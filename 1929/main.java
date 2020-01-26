import java.util.StringTokenizer;
import java.io.*;
class Main{
    public static void main(String[] args)throws Exception{
        int[] primes = new int[1000000];
        int i;

        for(i = 0; i < 1000000; i++){
            primes[i] = i+1;
        }

        int prime, multiple;
        primes[0] = -1;
        for(i = 0; i < 1000000; i++){
            prime = primes[i];
            multiple = 2;

            if(prime  < 0)
                continue;
            
            while( prime * multiple <= 1000000 ){
                primes[prime * multiple - 1] = -1;
                multiple += 1;
            }
        }

        // for(i = 0; i < 1000000; i++){
        //     if(primes[i] > 0 )
        //         System.out.println(primes[i]);
        // }

        
        // FileReader fr = new FileReader("input.txt");
        InputStreamReader fr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(fr);

        int N,M;
        int sumOfPrimes;
        int minOfPrimes;
        StringTokenizer st = new StringTokenizer(br.readLine());
        N = Integer.parseInt(st.nextToken());
        M = Integer.parseInt(st.nextToken());
        
        sumOfPrimes = 0;
        minOfPrimes = -1;
        for(i = N; i <= M; i++){
            if(primes[i-1] > 0){
                System.out.println(primes[i-1]);
            }
        }

        br.close();
        fr.close();
    }
}