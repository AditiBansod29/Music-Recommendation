// User data storage (temporary - for demonstration)
if (!localStorage.getItem('users')) {
    localStorage.setItem('users', JSON.stringify([]));
}

// Registration Form Handling
document.getElementById('registerForm')?.addEventListener('submit', function(e) {
    e.preventDefault();
    
    const username = document.getElementById('registerUsername').value;
    const email = document.getElementById('registerEmail').value;
    const password = document.getElementById('registerPassword').value;
    const confirmPassword = document.getElementById('registerConfirmPassword').value;
    
    if (password !== confirmPassword) {
        showMessage('registerMessage', 'Passwords do not match!');
        return;
    }
    
    const users = JSON.parse(localStorage.getItem('users'));
    if (users.find(user => user.email === email)) {
        showMessage('registerMessage', 'Email already registered!');
        return;
    }
    
    users.push({ username, email, password });
    localStorage.setItem('users', JSON.stringify(users));
    showMessage('registerMessage', 'Registration successful! Redirecting...', 'success');
    
    setTimeout(() => {
        window.location.href = 'index.html';
    }, 1500);
});

// Login Form Handling
document.getElementById('loginForm')?.addEventListener('submit', function(e) {
    e.preventDefault();
    
    const email = document.getElementById('loginEmail').value;
    const password = document.getElementById('loginPassword').value;
    
    const users = JSON.parse(localStorage.getItem('users'));
    const user = users.find(user => user.email === email);
    
    if (!user) {
        showMessage('loginMessage', 'User not found!');
        return;
    }
    
    if (user.password !== password) {
        showMessage('loginMessage', 'Incorrect password!');
        return;
    }
    
    // Store current user session
    localStorage.setItem('currentUser', JSON.stringify(user));
    window.location.href = 'dashboard.html';
});

// Message display function
function showMessage(elementId, message, type = 'error') {
    const messageElement = document.getElementById(elementId);
    messageElement.textContent = message;
    messageElement.style.color = type === 'success' ? '#2ecc71' : '#e74c3c';
    
    setTimeout(() => {
        messageElement.textContent = '';
    }, 3000);
}

// Logout function (add to dashboard page)
function logout() {
    localStorage.removeItem('currentUser');
    window.location.href = 'index.html';
}
