function toggleInfo() {
    const info = document.getElementById('extraInfo');
    const button = document.querySelector('button');

    if (info.style.display === 'none' || info.style.display === '') {
      info.style.display = 'block';
      button.textContent = 'Hide Info';
    } else {
      info.style.display = 'none';
      button.textContent = 'Show More Info';
    }
  }