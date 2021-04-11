table = document.getElementById("table");
table.innerHTML =
	"<tr><th>Date</th><th>Problem</th><th>Topic</th><th>Solution</th></tr>";

link = "https://github.com/BurningTiles/DailyCoding/blob/main/";

for (let i in data_table) {
	let data = data_table[i];
	let dir = link + data.dir + "/";
	let row =
		"<tr><td>" +
		data.date +
		"</td>" +
		'<td><a href="' +
		dir +
		'Problem.pdf">' +
		data.problem +
		"</a></td>" +
		"<td>" +
		data.topic +
		"</td><td>";
	if (data.solution.length) {
		for (let sol in data.solution) {
			let ext = data.solution[sol];
			row += '<a class="border" href="' + dir + "Solution." + ext.toLowerCase() + '">' + ext + "</a>";
		}
	} else {
		row += "Pending";
	}
	row += "</td>";

	table.innerHTML += row;
}
{
	/* <tr>
					<th>Date</th>
					<th>Problem</th>
					<th>Topic</th>
					<th>Solution</th>
				</tr>
				<tr>
					<td>3 Apr 2021</td>
					<td>
						<a
							href="https://github.com/BurningTiles/DailyCoding/blob/main/20210403/Problem.txt"
							>First repeating character</a>
					</td>
					<td>Array</td>
					<td>
						<a
							href="https://github.com/BurningTiles/DailyCoding/blob/main/20210403/Solution.cpp"
							>cpp,</a>
						<a
							href="https://github.com/BurningTiles/DailyCoding/blob/main/20210403/Solution.py"
							> py</a>
					</td>
				</tr> */
}
