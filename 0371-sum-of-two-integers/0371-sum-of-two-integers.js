/**
 * @param {number} a
 * @param {number} b
 * @return {number}
 */
var getSum = function(a, b) {
    while(b!=0){
        let carry=a&b;//carry
        a=a^b;//without carry
        b=carry<<1;
    }
    return a;
};