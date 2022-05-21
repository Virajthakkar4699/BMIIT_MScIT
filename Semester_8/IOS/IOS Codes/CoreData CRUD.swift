S-1
Create project in xcode , select CoreData while creating. 
Create entity and attributes in XCModeldata file, click on entity and then in inspector select codegen as "MANUAL/NONE"
Click on Editor and create NSManagedobject Subclass.

S-2
Navigation Controller
Editor>Embedin>NavigationController>Root will be created 
create new ViewController from object library.
design both the ViewController>create Cocoatouch class>Scree1 VC(file attached) and Screen 2 VC(file attached).
attach view controllers to the storyboard interfaces as class

S-3
Add Bar button item in screen1 VC in storyboard change to "ADD"
Ctrl+Drag from button to another VC to create a Segue(select show)

S-4
Create weak outlets and action from addform VC to AddStudentVC(ctrl+drag)from storyboard to VC file

S-5
Create table view in screen1 add tableview prototype cell.craete outlets in screen1 VC file.
add "Cell" as cell reusable identifier in prototype cell

S-6
Ctrl+Drag from tableView to ViewController corner to add UITableViewDataSource and UITableViewDelegate.

S-7
create extension in screen1 VC for UITableViewDataSource and UITableViewDelegate.
error will pop up and fix the the stubs // implement methods
create students/entity object in screen1 VC

S-8
create swift file name it as DBManager>import UIKit instead of foundation.
create class DBManager and create its instance named share.
from Appdelegate file copy persistance and saveContext func. to DBManager(file attached)
import CoreData in DBManager
declare context outside func lazy var context

S-9
in SceneDelegate file remove last line and rewrite context(file attached)

S-10
Create NSFetchRequest method in DBManager(file attach) and return student
in screen1 VC create viewWillAppear method and call fetch method and reloadData
in screen1 VC numberOfRowsInSection method> return students.count
in dequeueReusableCell method define cell(file attach)

S-11
now in AddStudentVC file in onClickAdd method 
write code to save data via DBManager.share.saveContext()

S-11
to delete , in screen1 VC after dequeueReusableCell method
at EditingStyle method>EditingStyle.delete(file attached)
write code to delete 
==========================================================================================================================
ViewController.swift
----------------------------
//  ViewController.swift
//  CoreDataCRUD
//  Created by bmiit on 5/9/22.
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
        }}}
=====================================================================================================================================
AddStudentVC.swift
-------------------------
//  AddStudentVC.swift
//  CoreDataCRUD
//  Created by bmiit on 5/9/22.
import UIKit
class AddStudentVC: UIViewController {
    @IBOutlet weak var txtname: UITextField!
    @IBOutlet weak var txtstd: UITextField!
    @IBOutlet weak var txtschool: UITextField!
    override func viewDidLoad() {
        super.viewDidLoad()
    }   
    @IBAction func onClickAdd(_ sender: Any) {
        if let name=txtname.text, let std=txtstd.text, let school=txtschool.text
        {
            let newstudent = Student(context: DBManager.share.context)
            newstudent.name=name
            newstudent.std=std
            newstudent.school=school
            DBManager.share.saveContext()
        }}}
==========================================================================================================================
AppDelegate.swift
-----------------------
//  AppDelegate.swift
//  CoreDataCRUD
//  Created by bmiit on 5/9/22.
import UIKit
import CoreData
@main
class AppDelegate: UIResponder, UIApplicationDelegate {
    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey: Any]?) -> Bool {
        return true
    }
    func application(_ application: UIApplication, configurationForConnecting connectingSceneSession: UISceneSession, options: UIScene.ConnectionOptions) -> UISceneConfiguration {
        return UISceneConfiguration(name: "Default Configuration", sessionRole: connectingSceneSession.role)
    }
    func application(_ application: UIApplication, didDiscardSceneSessions sceneSessions: Set<UISceneSession>) {}
}
===========================================================================================================================================
DBManager.swift
---------------------
//  DBManager.swift
//  CoreDataCRUD
//  Created by bmiit on 5/9/22.
import UIKit
import CoreData
class DBManager{
    static let share=DBManager()
    lazy var persistentContainer: NSPersistentContainer = {
        let container = NSPersistentContainer(name: "CoreDataCRUD")
        container.loadPersistentStores(completionHandler: { (storeDescription, error) in
            if let error = error as NSError? {   
                fatalError("Unresolved error \(error), \(error.userInfo)")
            } })
        return container
    }()
    // MARK: - Core Data Saving support
    lazy var context = persistentContainer.viewContext
    func saveContext () {
        if context.hasChanges {
            do {try context.save()
            } catch {        
                let nserror = error as NSError
                fatalError("Unresolved error \(nserror), \(nserror.userInfo)")
        }}}
    func fetchStudent()->[Student]
    {
        var student=[Student]()
        let fetchRequest = NSFetchRequest<NSFetchRequestResult>(entityName: Student.description())
        do{
            student = try context.fetch(fetchRequest) as! [Student]}
        catch{print("fetching error")}
        return student
    }
}
=======================================================================================================================================
SceneDelegate.swift
-------------------------
//  SceneDelegate.swift
//  CoreDataCRUD
//  Created by bmiit on 5/9/22.
import UIKit
class SceneDelegate: UIResponder, UIWindowSceneDelegate {
    var window: UIWindow?
    func scene(_ scene: UIScene, willConnectTo session: UISceneSession, options connectionOptions: UIScene.ConnectionOptions) {
        guard let _ = (scene as? UIWindowScene) else { return }
    }

    func sceneDidDisconnect(_ scene: UIScene) {
    }

    func sceneDidBecomeActive(_ scene: UIScene) {.
    }

    func sceneWillResignActive(_ scene: UIScene) {
    }

    func sceneWillEnterForeground(_ scene: UIScene) {
    }

    func sceneDidEnterBackground(_ scene: UIScene) {
        DBManager.share.saveContext()
    }
}
=========================================================================================================================================
