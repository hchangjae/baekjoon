import java.io.*;
class Main{
    public static void main(String[] args)throws Exception{
        int[] primes = new int[10000];
        int i;

        for(i = 0; i < 10000; i++){
            primes[i] = i+1;
        }

        int prime, multiple;
        primes[0] = -1;
        for(i = 0; i < 10000; i++){
            prime = primes[i];
            multiple = 2;

            if(prime  < 0)
                continue;
            
            while( prime * multiple <= 10000 ){
                primes[prime * multiple - 1] = -1;
                multiple += 1;
            }
        }

        // for(i = 0; i < 10000; i++){
        //     if(primes[i] > 0 )
        //         System.out.println(primes[i]);
        // }

        
        // FileReader fr = new FileReader("input.txt");
        InputStreamReader fr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(fr);

        int N,M;
        int sumOfPrimes;
        int minOfPrimes;
        N = Integer.parseInt(br.readLine());
        M = Integer.parseInt(br.readLine());
        
        sumOfPrimes = 0;
        minOfPrimes = -1;
        for(i = N; i <= M; i++){
            if(primes[i-1] > 0){
                sumOfPrimes += primes[i-1];
                if(minOfPrimes == -1){
                    minOfPrimes = primes[i-1];
                }
            }
        }
        if(sumOfPrimes == 0){
            System.out.println(-1);
        }
        else{
            System.out.println(sumOfPrimes);
            System.out.println(minOfPrimes);
        }
        br.close();
        fr.close();
    }
}