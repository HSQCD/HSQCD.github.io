/* Base styles for all devices */
body, html {
    margin: 0;
    padding: 0;
    width: 100%;
    height: 100%;
    overflow: hidden;
    background-color: #000;
    color: #ffffff;
    font-family: Arial, sans-serif;
}

#particles-js {
    position: absolute;
    width: 100%;
    height: 100%;
    background-color: #000;
    background-size: cover;
    background-position: center;
}

.content {
    position: relative;
    z-index: 1;
    padding: 20px;
    max-width: 800px;
    margin: 50px auto;
    background-color: rgba(20, 24, 56, 0.775);
    border-radius: 10px;
}

p {
    line-height: 1.6;
    max-width: 600px;
    margin: 0 auto;
    text-align: justify;
}

.arrow-container {
    display: flex;
    justify-content: center;
    gap: 10px;
    margin: 20px auto;
}

.arrow-link {
    display: flex;
    align-items: center;
    text-decoration: none;
}

.arrow {
    width: 0;
    height: 0;
    border: 20px solid transparent;
    margin: 0 auto;
    transform: translateY(10px);
}

.arrowLeft {
    border-right: 20px solid #fff;
}

.arrowRight {
    border-left: 20px solid #fff;
}

.arrow-link div {
    margin: 0 2.5px;
}

/* Media queries for responsiveness */
@media (max-width: 768px) {
    .content {
        padding: 15px;
        margin: 20px;
        max-width: 95%;
    }

    .arrow {
        border-width: 15px;
    }

    .arrow-container {
        gap: 5px;
    }
}

@media (max-width: 480px) {
    .content {
        padding: 10px;
        margin: 10px;
        max-width: 100%;
    }

    .arrow {
        border-width: 10px;
    }

    .arrow-container {
        flex-direction: column;
        gap: 5px;
    }

    .arrow-link {
        display: block;
        margin-bottom: 10px;
    }
}
