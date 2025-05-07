/* style.css */
/* Global Styles */
* {
    margin: 0;
    padding: 0;
    box-sizing: border-box;
    font-family: 'Arial', sans-serif;
}

body {
    background: linear-gradient(135deg, #1a1a1a, #4a4a4a);
    min-height: 100vh;
    color: #333;
}

a {
    color: #2ecc71;
    text-decoration: none;
    transition: opacity 0.3s ease;
}

a:hover {
    opacity: 0.8;
}

button {
    transition: all 0.3s ease;
    cursor: pointer;
}

/* Shared Form Styles */
.container {
    background: rgba(255, 255, 255, 0.95);
    padding: 2rem;
    border-radius: 10px;
    box-shadow: 0 0 20px rgba(0, 0, 0, 0.2);
    width: 90%;
    max-width: 400px;
    margin: 2rem auto;
}

.form-container {
    text-align: center;
}

.form-container h2 {
    margin-bottom: 1.5rem;
    color: #333;
}

.form-group {
    margin-bottom: 1rem;
    text-align: left;
}

.form-group label {
    display: block;
    margin-bottom: 0.5rem;
    color: #555;
}

.form-group input {
    width: 100%;
    padding: 0.8rem;
    border: 1px solid #ddd;
    border-radius: 5px;
    font-size: 1rem;
}

button[type="submit"] {
    width: 100%;
    padding: 1rem;
    background: #2ecc71;
    color: white;
    border: none;
    border-radius: 5px;
    font-size: 1rem;
    margin-top: 1rem;
}

button[type="submit"]:hover {
    background: #27ae60;
}

.message {
    margin-top: 1rem;
    text-align: center;
    padding: 0.5rem;
    border-radius: 5px;
}

.error {
    color: #e74c3c;
}

.success {
    color: #2ecc71;
}

/* Dashboard Specific Styles */
.dashboard-container {
    background: rgba(255, 255, 255, 0.95);
    width: 95%;
    max-width: 1200px;
    margin: 2rem auto;
    border-radius: 15px;
    box-shadow: 0 0 30px rgba(0, 0, 0, 0.1);
    overflow: hidden;
}

.dashboard-header {
    background: #2ecc71;
    color: white;
    padding: 1.5rem;
    display: flex;
    justify-content: space-between;
    align-items: center;
}

.dashboard-nav {
    background: #f8f9fa;
    padding: 1rem;
    display: flex;
    gap: 1.5rem;
    border-bottom: 2px solid #eee;
}

.nav-link {
    color: #555;
    padding: 0.5rem 1rem;
    border-radius: 5px;
}

.nav-link:hover {
    background: #2ecc71;
    color: white;
}

.main-content {
    display: grid;
    grid-template-columns: 250px 1fr;
    min-height: 70vh;
}

.sidebar {
    background: #f8f9fa;
    padding: 1.5rem;
    border-right: 2px solid #eee;
}

.recommendation-grid {
    display: grid;
    grid-template-columns: repeat(auto-fit, minmax(200px, 1fr));
    gap: 1.5rem;
    padding: 2rem;
}

.song-card {
    background: white;
    border-radius: 10px;
    overflow: hidden;
    box-shadow: 0 3px 10px rgba(0, 0, 0, 0.1);
    transition: transform 0.3s ease;
}

.song-card:hover {
    transform: translateY(-5px);
}

.song-artwork {
    width: 100%;
    height: 180px;
    object-fit: cover;
    background: #ddd;
}

.song-info {
    padding: 1rem;
}

.song-title {
    color: #333;
    margin-bottom: 0.5rem;
    font-weight: 600;
}

.song-artist {
    color: #666;
    font-size: 0.9rem;
}

.play-button {
    background: #2ecc71;
    color: white;
    border: none;
    padding: 0.5rem 1rem;
    border-radius: 20px;
    margin-top: 0.5rem;
}

.play-button:hover {
    background: #27ae60;
}

.music-player {
    position: fixed;
    bottom: 0;
    left: 0;
    right: 0;
    background: white;
    padding: 1rem;
    display: flex;
    align-items: center;
    gap: 2rem;
    box-shadow: 0 -5px 15px rgba(0, 0, 0, 0.1);
}

/* Responsive Design */
@media (max-width: 768px) {
    .container {
        width: 95%;
        padding: 1.5rem;
    }

    .main-content {
        grid-template-columns: 1fr;
    }
    
    .sidebar {
        display: none;
    }
    
    .recommendation-grid {
        grid-template-columns: repeat(auto-fit, minmax(150px, 1fr));
        padding: 1rem;
    }

    .music-player {
        flex-direction: column;
        gap: 1rem;
        padding: 1rem 0.5rem;
    }
}

@media (max-width: 480px) {
    .dashboard-nav {
        flex-direction: column;
        gap: 0.5rem;
    }
    
    .nav-link {
        text-align: center;
    }
}
/* Header Styles */
.dashboard-header {
    display: flex;
    justify-content: space-between;
    align-items: center;
    padding: 1rem 2rem;
    background: #2ecc71;
    color: white;
}

.header-controls {
    display: flex;
    align-items: center;
    gap: 1.5rem;
}

.logout-btn {
    background: #e74c3c;
    color: white;
    border: none;
    padding: 0.5rem 1rem;
    border-radius: 5px;
    cursor: pointer;
    transition: background 0.3s ease;
}

.logout-btn:hover {
    background: #c0392b;
}

.username {
    font-weight: 500;
}

/* Content Styles */
.content {
    padding: 2rem;
}

.nav-links {
    margin-top: 1rem;
    display: flex;
    gap: 2rem;
}

.nav-links a {
    color: #2ecc71;
    padding: 0.5rem 1rem;
    border-radius: 5px;
    border: 1px solid #2ecc71;
    transition: all 0.3s ease;
}

.nav-links a:hover {
    background: #2ecc71;
    color: white;
}

hr {
    margin: 1rem 2rem;
    border: 1px solid #eee;
}
/* Mood Section Styles */
.mood-section {
    margin-top: 2rem;
    padding: 1.5rem;
    background: rgba(255, 255, 255, 0.9);
    border-radius: 10px;
    box-shadow: 0 0 15px rgba(0, 0, 0, 0.1);
}

.mood-section h3 {
    text-align: center;
    color: #444;
    margin-bottom: 1.5rem;
}

.mood-grid {
    display: grid;
    grid-template-columns: repeat(auto-fit, minmax(150px, 1fr));
    gap: 1rem;
}

.mood-card {
    padding: 1.5rem;
    text-align: center;
    background: #f8f9fa;
    border-radius: 8px;
    cursor: pointer;
    transition: all 0.3s ease;
    border: 2px solid #2ecc71;
    color: #333;
    font-weight: 500;
}

.mood-card:hover {
    transform: translateY(-3px);
    background: #2ecc71;
    color: white;
    box-shadow: 0 5px 15px rgba(46, 204, 113, 0.3);
}

/* Responsive Design */
@media (max-width: 768px) {
    .container {
        width: 95%;
        padding: 1rem;
    }
    
    .mood-grid {
        grid-template-columns: 1fr 1fr;
    }
}

@media (max-width: 480px) {
    .mood-grid {
        grid-template-columns: 1fr;
    }
}
/* Mood-based Recommendations */
#moodHeading {
    color: #2ecc71;
    text-transform: capitalize;
}

.song-artwork {
    position: relative;
    display: flex;
    align-items: flex-end;
    justify-content: flex-start;
    padding: 1rem;
}

.genre-tag {
    position: absolute;
    top: 10px;
    left: 10px;
    background: rgba(0, 0, 0, 0.7);
    color: white;
    padding: 0.3rem 0.8rem;
    border-radius: 15px;
    font-size: 0.8rem;
}
