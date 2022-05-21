//Dismissing the keyboard using touchGestureRecognizer
class ViewController: UIViewController {
    override func viewDidLoad(O {
        super.viewDidLoad()
        //when user touch on screen
        let tap:UITapGestureRecognizer = UITapGestureRecognizer(target: self,action: #selector(dissmisskeyboard))
        self.view.addGestureRecognizer(tap)
}
//dissmiss keyboard
        @objc func dissmisskeyboard(){
            self.view.endEditing(true)
    }
}