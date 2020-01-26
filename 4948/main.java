import java.io.*;
class Main{
    public static void main(String[] args)throws Exception{
        int maxOfPrime = 246912;
        int[] primes = new int[maxOfPrime];
        int i;

        for(i = 0; i < maxOfPrime; i++){
            primes[i] = i+1;
        }

        int prime, multiple;
        primes[0] = -1;

        for(i = 0; i < maxOfPrime; i++){
            prime = primes[i];
        
            if(prime < 0)
                continue;

            multiple = 2;
            while( prime * multiple <= maxOfPrime ){
                primes[prime * multiple - 1] = -1;
                multiple += 1;
            }
        }

        // for(i = 0; i < maxOfPrime; i++){
        //     if(primes[i] > 0){
        //         System.out.println(primes[i]);
        //     }
        // }

        FileReader fr = new FileReader("input.txt");
        // InputStreamReader fr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(fr);
        
        int N;
        int count;
        while((N = Integer.parseInt(br.readLine()) ) != 0){
            count = 0;
            for(i=N+1; i <= N*2; i++){
                if(primes[i-1] > 0)
                    count++;
            }
            System.out.println(count);
        }

        br.close();
        fr.close();
    }
}