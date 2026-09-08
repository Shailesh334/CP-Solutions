/**
 * @param {number} n
 * @return {number}
 */
var countCommas = function(n) {
    
    if(n <= 999)return 0;
    else{
        return (n - 1000) + 1;
    }
};