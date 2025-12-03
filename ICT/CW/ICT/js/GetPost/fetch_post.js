const payload = { username: "mehak", password: "1234" };

fetch('/api/login', {
  method: 'POST',
  headers: {
    'Content-Type': 'application/json'
  },
  body: JSON.stringify(payload)
})
  .then(resp => resp.json())
  .then(data => {
    console.log("POST response:", data);
  })
  .catch(err => console.error(err));
