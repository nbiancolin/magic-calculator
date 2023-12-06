// carousel.js

let currentSlide = 0;
const slides = document.querySelectorAll('.carousel-slide');
const numVisibleSlides = 1; // Set the number of slides visible at once

function showSlide(index) {
    slides.forEach((slide, i) => {
        slide.style.display = 'none';
    });

    const startIndex = index * numVisibleSlides;
    for (let i = startIndex; i < startIndex + numVisibleSlides && i < slides.length; i++) {
        slides[i].style.display = 'block';

        // Attach click event only to the specific image (e.g., image1)
        if (slides[i].id === 'image1') {
            slides[i].addEventListener('click', showPasswordForm);
        }
    }
}

function changeSlide(n) {
    currentSlide += n;

    const maxSlideIndex = Math.floor((slides.length - 1) / numVisibleSlides);
    if (currentSlide < 0) {
        currentSlide = maxSlideIndex;
    } else if (currentSlide > maxSlideIndex) {
        currentSlide = 0;
    }

    const translateValue = -currentSlide * 100 / numVisibleSlides;
    document.querySelector('.carousel-slides').style.transform = `translateX(${translateValue}%)`;

    showSlide(currentSlide * numVisibleSlides);
}

// Display the first set of slides initially
showSlide(currentSlide);


function showSlide(index) {
    // ... (unchanged code)

    const startIndex = index * numVisibleSlides;
    for (let i = startIndex; i < startIndex + numVisibleSlides && i < slides.length; i++) {
        slides[i].style.display = 'block';
        slides[i].addEventListener('click', showPasswordForm);
    }
}

function showPasswordForm() {
    document.getElementById('passwordForm').style.display = 'block';
}

function checkPassword() {
    var enteredPassword = document.getElementById('password').value;
    var correctPassword = 'biancol6'; 

    if (enteredPassword === correctPassword) {
        // Redirect to another webpage
        window.location.href = './secret.html'; // Replace with the URL you want to redirect to
    } else {
        alert('Incorrect password. Please try again.');
    }
}