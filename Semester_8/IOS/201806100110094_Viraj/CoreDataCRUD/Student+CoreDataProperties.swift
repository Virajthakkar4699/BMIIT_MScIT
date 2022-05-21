//
//  Student+CoreDataProperties.swift
//  CoreDataCRUD
//
//  Created by bmiit on 5/9/22.
//
//

import Foundation
import CoreData


extension Student {

    @nonobjc public class func fetchRequest() -> NSFetchRequest<Student> {
        return NSFetchRequest<Student>(entityName: "Student")
    }

    @NSManaged public var name: String?
    @NSManaged public var std: String?
    @NSManaged public var school: String?

}

extension Student : Identifiable {

}
