table = document.getElementById("table");
table.innerHTML = "<tr><th>Date</th><th>Problem</th><th>Topic</th><th>Solution</th></tr>";

link = "https://github.com/BurningTiles/DailyCoding/blob/main/";

for (let i in data_table) {
	let data = data_table[i];
	let dir = link + data.dir + "/";
	let row = `<tr><td>${data.date}</td><td><a href="${dir}Problem.pdf">${data.problem}</a></td><td>${data.topic}</td><td>`;
	if (data.solution.length) {
		for (let sol in data.solution) {
			let ext = data.solution[sol];
			row += `<a class="border" href="${dir}Solution.${ext.toLowerCase()}">${ext}</a>`;
		}
	} else {
		row += "Pending";
	}
	row += "</td>";
	table.innerHTML += row;
}