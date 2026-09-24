class Solution {
public:
int longestOnes(vector<int>& nums, int k) {

    int n = nums.size();

    int flips = 0;       // Abhi tak kitne 0 ko flip kiya hai
    int i = 0;            // Window ka starting index
    int j = 0;            // Window ka ending/current index

    int maxlen = INT_MIN; // Abhi tak ki maximum window length
    int len = INT_MIN;    // Current window ki length


    // Jab tak j array ke andar hai
    while (j < n) {

        // Agar current element 1 hai,
        // to kisi flip ki zarurat nahi hai
        if (nums[j] == 1) {
            j++;
        }

        else {
            // nums[j] == 0

            // Agar hum abhi aur 0 ko flip kar sakte hain
            if (flips < k) {

                flips++;  // Current 0 ko flip kar diya
                j++;      // Window ko aage badhao
            }

            else {
                // flips == k
                // Matlab k flips already use ho chuke hain
                // aur current nums[j] bhi 0 hai,
                // isliye current window valid nahi ban sakti

                len = j - i;              // Current valid window ki length
                maxlen = max(maxlen, len); // Maximum length update


                // Left side se tab tak move karo
                // jab tak ek 0 na mil jaye
                while (nums[i] != 0)
                    i++;

                // Ab ye 0 window se remove ho gaya
                i++;

                // Ek flip free ho gaya
                flips--;

                // Yahan j++ nahi karenge,
                // kyunki current nums[j] wala 0
                // abhi window mein include nahi hua hai.
                // Next iteration mein ise flip karenge.
            }
        }
    }

    // Loop ke baad last window ki length check karo
    len = j - i;
    maxlen = max(maxlen, len);

    return maxlen;
}
};