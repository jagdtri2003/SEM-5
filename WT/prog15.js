function validateName(name) {
    return /^[a-zA-Z\s]+$/.test(name);
}

function validateMobileNumber(number) {
    return /^\d{10}$/.test(number);
}

function validateEmail(email) {
    return /^[^\s@]+@united\.ac\.in$/.test(email);
}

function validatePassword(password) {
    // Password must have at least one alphabet, one digit, and one special character
    return /^(?=.*[A-Za-z])(?=.*\d)(?=.*[!@#$%&*]).{6,}$/.test(password);
}

// Usage example:
let name = "John Doe";
let mobileNumber = "1234567890";
let email = "john@united.ac.in";
let password = "Passw0rd!";

if (validateName(name)) {
    console.log("Name is valid");
} else {
    console.log("Name is invalid");
}

if (validateMobileNumber(mobileNumber)) {
    console.log("Mobile number is valid");
} else {
    console.log("Mobile number is invalid");
}

if (validateEmail(email)) {
    console.log("Email is valid");
} else {
    console.log("Email is invalid");
}

if (validatePassword(password)) {
    console.log("Password is valid");
} else {
    console.log("Password is invalid");
}
