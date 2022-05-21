//
//  ViewController.swift
//  CoreDataCRUD
//
//  Created by bmiit on 5/9/22.
//

import UIKit

class ViewController: UIViewController {
    
    
    @IBOutlet weak var studentTable: UITableView!
    
    var students=[Student]()

    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
    }
    
    override func viewWillAppear(_ animated: Bool) {
        students=DBManager.share.fetchStudent()
        studentTable.reloadData()
    }


}

extension ViewController: UITableViewDelegate,UITableViewDataSource
{
    func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return students.count
    }
    
    func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        let cell = tableView.dequeueReusableCell(withIdentifier: "Cell", for: indexPath)
        let astudent=students[indexPath.row]
        cell.textLabel?.text=astudent.name
        cell.detailTextLabel?.text=astudent.school
        
        return cell
    }
    
    func tableView(_ tableView: UITableView, commit editingStyle: UITableViewCell.EditingStyle, forRowAt indexPath: IndexPath) {
        if editingStyle == UITableViewCell.EditingStyle.delete
        {
            do{
                try DBManager.share.context.delete(students[indexPath.row])
            }
            catch{
                print("error in deleting")
            }
            DBManager.share.saveContext()
            students.remove(at: indexPath.row)
            tableView.deleteRows(at: [indexPath], with: .automatic)
        }
    }
    
    
}

