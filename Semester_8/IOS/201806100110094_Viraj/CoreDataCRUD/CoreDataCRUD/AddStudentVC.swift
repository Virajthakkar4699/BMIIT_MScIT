//
//  AddStudentVC.swift
//  CoreDataCRUD
//
//  Created by bmiit on 5/9/22.
//

import UIKit

class AddStudentVC: UIViewController {

    
    @IBOutlet weak var txtname: UITextField!
    
    @IBOutlet weak var txtstd: UITextField!
    
    @IBOutlet weak var txtschool: UITextField!
    
    override func viewDidLoad() {
        super.viewDidLoad()

        // Do any additional setup after loading the view.
    }
    

   
    @IBAction func onClickAdd(_ sender: Any) {
        
        if let name=txtname.text, let std=txtstd.text, let school=txtschool.text
        {
            let newstudent = Student(context: DBManager.share.context)
            newstudent.name=name
            newstudent.std=std
            newstudent.school=school
            DBManager.share.saveContext()
        }
    }
    
}
