AlertViewController and Sheets
S-1
Create Button in storyboard and create its action in ViewController
S-2
In ViewController file create function to call AlertViewController
==============================================
@IBAction func didTapButton() {
}
func showAlert() {
    let alert = UIAlertController(title: "Title", message: "Hello World", preferredStyle: .alert)
    alert.addAction(UIAlertAction(title: "Dismiss", style: .cancel, handler: { action in
        print("tapped Dismiss") //called when dismiss is pressed - action in 
        } ) )
present (alert, animated: true)
}
================================================
func showAlertactionsheet() {
    let actionSheet = UIAlertController(title: "Title", message: "Hello World", preferredStyle: .actionSheet)
    actionSheet.addAction(UIAlertAction(title: "Dismiss", style: .cancel, handler: { action in
        print("tapped Dismiss") //called when dismiss is pressed - action in 
        } ) )

        actionsheet.addAction(UIAlertAction(title:"One", style: .default, handler: { action in
            print("tapped Dismiss")
            }))
    actionsheet.addAction(UIAlertAction(title: "two", style: .default, handler: { action in
            print("tapped Dismiss")
            }))
    actionsheet.addAction(UIAlertAction(title: "Delete", style: .destructive, handler: { action in
            print("tapped Dismiss")
            }))

present (actionSheet, animated: true)
}