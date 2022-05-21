//Contact Table View
2 Ways- in storyboard and Programatically


S-1
Add tableView from object library to ViewController>apply constraints>create IBOutlet
@IBOutlet var tableView: UITableview!
or Ctrl+Drag from tableView to ViewController
Add prototype call>add identifier to cell.

S-2 
Above viewDidLoad
let names = [
"John Smith",
"Dan Smith",
"Jason Smith",
"Mary Smith"]

IN ViewController file declare in viewDidLoad
tableView.delegate = self
tableView.dataSource = self

after end of class implement their methods
===================================================
extension ViewController: UITableViewDelegate {
func tableView(_ tableView: UITableView, didSelectRowat indexPath: IndexPath) {
    print("you tapped me!")
)

extension ViewController: UITableViewDataSource {
    func tableview(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return 3 // or names.count()
    }

func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        let cell = tableview.dequeueReusableCell (withIdentifier: "cell", for: indexPath)
        cell.textLabel?.text="Hello World" // or  cell.textLabel?.text=names[indexPath.row]
        return cell
}
=====================================================




