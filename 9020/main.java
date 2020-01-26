import java.io.*;
class Main{
    public static void main(String[] args)throws Exception{
        int[] primes = new int[10000];
        int i;
        
        for(i=1; i<10000; i++){
            primes[i] = i+1;
        }
        
        int prime, multiple;
        primes[0] = -1;
        for(i=1; i<10000; i++){
            prime = primes[i-1];
            
            if(prime < 0 )
                continue;

            multiple = 2;
            while(prime * multiple <= 10000){
                primes[prime * multiple -1] = -1;
                multiple++;
            }
        }

        // FileReader fr = new FileReader("input.txt");
        InputStreamReader fr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(fr);
        
        int T,N;
        int indexOfPrimeA, indexOfPrimeB;
        int primeA, primeB;

        T = Integer.parseInt(br.readLine());

        for(i=0; i<T; i++){
            N = Integer.parseInt(br.readLine());
            
            indexOfPrimeA = N/2-1;
            do{
                primeA = primes[indexOfPrimeA];
                if(primeA < 0){
                    indexOfPrimeA--;
                    primeB = 0;
                    continue;
                }
                indexOfPrimeB = N - primeA -1;
                primeB = primes[indexOfPrimeB];
                
                indexOfPrimeA--;
            }while(primeA + primeB != N);
            System.out.println(primeA + " " + primeB);
        }
        

        br.close();
        fr.close();
    }
}