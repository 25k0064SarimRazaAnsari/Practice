// GET with query params
const params = new URLSearchParams({ q: "mehak", page: 1 });
fetch('/api/search?' + params.toString())
  .then(resp => resp.json())
  .then(data => console.log("GET response:", data))
  .catch(err => console.error(err));
