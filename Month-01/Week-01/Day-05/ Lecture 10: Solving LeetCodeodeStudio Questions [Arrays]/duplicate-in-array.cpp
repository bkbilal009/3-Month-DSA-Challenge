int ans = 0;

// XOR all array elements
for (int i = 0; i < arr.size(); i++) {
    ans = ans ^ arr[i];
}

// XOR numbers from 1 to n-1
for (int i = 1; i < arr.size(); i++) {
    ans = ans ^ i;
}

// The remaining value is the unique element
return ans;
