import java.util.StringTokenizer;
import java.util.stream.IntStream;
import java.util.Arrays;
import java.io.*;
class Main{
    public static boolean contains(final int[] array, final int key){
        return Arrays.stream(array).anyMatch(i -> i == key);
    }
    public static void main(String[] args)throws Exception{
        // FileReader fr = new FileReader("input.txt");
        InputStreamReader fr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(fr);

        int[] array = new int[10000];
        int i;
        
        // 0~999 -> 1~1000
        for(i=1; i <= 1000; i++){
            array[i-1] = i;
        }

        int num, multiplier;
        array[0] = -1;
        for(i=0; i < 1000; i++){
            num = array[i];
            multiplier = 2;

            if(num < 0 )
                continue;
                
            while(num * multiplier-1 < 1000 && num * multiplier-1 >= 0){
                array[num * multiplier-1] = -1;
                multiplier += 1;
            }
        }

        // for(i=0; i<1000; i++){
        //     if(array[i] != -1){
        //         System.out.println(array[i]);
        //     }
        // }


        int n = Integer.parseInt(br.readLine());
        StringTokenizer st = new StringTokenizer(br.readLine());
        boolean isContains;
        int count = 0;
        int input;
        for (i = 0; i < n; i++) {
            input = Integer.parseInt(st.nextToken());
            isContains = contains(array, input);
            if(isContains){
                count += 1;
            }
        }

        br.close();
        fr.close();
        System.out.println(count);
    }
}