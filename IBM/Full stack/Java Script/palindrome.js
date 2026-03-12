function isPalindrome(str) {
    let reversed = str.split("").reverse().join("");
    return str === reversed;
}

let word = "madam"

if (isPalindrome(word)) {
    console.log(word + " is a palindrome");
} else {
    console.log(word + " is not a palindrome");
}