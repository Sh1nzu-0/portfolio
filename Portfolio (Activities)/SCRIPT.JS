function calculate() {
    const num1 = parseFloat(document.getElementById("num1").value);
    const num2 = parseFloat(document.getElementById("num2").value);
    const display = document.getElementById("sum");

    if (isNaN(num1) || isNaN(num2)) {
        display.innerHTML = "Please enter valid numbers.";
        return;
    }

    // Calculations
    const sum = num1 + num2;
    const diff = num1 - num2;
    const prod = num1 * num2;
    const quot = num2 !== 0 ? (num1 / num2).toFixed(2) : "Undefined (div by 0)";
    const rem = num2 !== 0 ? (num1 % num2).toFixed(2) : "N/A";

    // Displaying results
    display.innerHTML = `
        Sum: ${sum.toFixed(2)} <br>
        Difference: ${diff.toFixed(2)} <br>
        Product: ${prod.toFixed(2)} <br>
        Quotient: ${quot} <br>
        Remainder: ${rem}
    `;
}

function clearFields() {
    document.getElementById("sum").innerHTML = "";
    document.getElementById("num1").value = "";
    document.getElementById("num2").value = "";
}
