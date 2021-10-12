function solution(n) {

   // Add more primes...
   var p = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29];

   var sqrt_n = Math.sqrt(n), log_n = Math.log(n);
   var res = 1;
   for (var i = 0; p[i] <= sqrt_n; i++) {
        res*= Math.pow(p[i], Math.floor(log_n / Math.log(p[i])));
   }

   for (; p[i] <= n; i++) {
      res*= p[i];
   }
   return res;
}
