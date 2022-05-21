//
//  ViewController.swift
//  FirebaseCRUD
//
//  Created by bmiit on 4/12/22.
//

import UIKit
import FirebaseFirestore

class ViewController: UIViewController {
    
    @IBOutlet var txtname: UITextField!
    @IBOutlet var txtemail: UITextField!
    @IBOutlet var txtphone: UITextField!
    @IBOutlet var txtcomp: UITextField!
    @IBOutlet var txtweb: UITextField!
    @IBOutlet var txttechone: UITextField!
    @IBOutlet var txttech2: UITextField!
    @IBOutlet var txttech3: UITextField!
    
    let database = Firestore.firestore()
    
    override func viewDidLoad() {
        super.viewDidLoad()
        let docRef = database.document("Survey/example")
        docRef.getDocument{ snapshot, error in
            guard let data = snapshot?.data(), error==nil else{
                return
            }
            print(data)
        }
    }
    
    func abcd()->Void{
        let docData: [String: Any] = [
            "stringExample": "Hello world!",
            "booleanExample": true,
            "numberExample": 3.14159265,
        ]
        
        database.collection("data").document("one").setData(docData) { err in
            if let err = err {
                print("Error writing document: \(err)")
            } else {
                print("Document successfully written!")
            }
        }
    }
    
    func writeData(Text:String){
        
        let docRef = database.document("Survey/example")
        docRef.setData(["text":Text])
    }
    
    
    @IBAction func SAVE(_ sender: UIButton) {
        
        let name=txtname.text!
        let email=txtemail.text!
        let phone=txtphone.text!
        let comp=txtcomp.text!
        let web=txtweb.text!
        let techone=txtphone.text!
        let techtwo=txttech2.text!
        let techthree=txttech3.text!
        
        let docDataa: [String: Any] = [
            "name": name,
            "email": email,
            "phone": phone,
            "comp": comp,
            "web": web,
            "techone": techone,
            "techtwo": techtwo,
            "techthree": techthree
        ]
        
        database.collection("data").document().setData(docDataa) { err in
            if let err = err {
                print("Error writing document: \(err)")
            } else {
                print("Document successfully written!")
                
            }
        }
        
        //writeData(Text: email)
        //abcd()
        //print(txtname.email)
        
    }
    
    @IBAction func didTapNewNote(){
        guard let vc = storyboard?.instantiateViewController(withIdentifier: "new") as? File else {
            return
        }
        navigationController?.pushViewController(vc, animated: true)
    }
    }

