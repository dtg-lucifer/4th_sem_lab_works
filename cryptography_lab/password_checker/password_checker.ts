function passWordChecker(pass: string | null) {
  if (!pass) {
    console.log("Please give an input");
    return;
  }

  if (pass.length < 8) {
    console.log("Length of the password is short (less than 8)");
    return;
  }

  for (let c of pass) {
    if (c === " ") {
      console.log("Password should not contain spaces");
      return;
    }
  }
  if (!/[A-Z]/.test(pass)) {
    console.log("Password should contain at least one uppercase letter");
    return;
  }

  if (!/[a-z]/.test(pass)) {
    console.log("Password should contain at least one lowercase letter");
    return;
  }

  if (!/[0-9]/.test(pass)) {
    console.log("Password should contain at least one digit");
    return;
  }

  if (!/[!@#$%^&*]/.test(pass)) {
    console.log("Password should contain at least one special character");
    return;
  }

  console.log("The password is secure");
}

const pass = prompt("Enter the password to check: ");

passWordChecker(pass);
