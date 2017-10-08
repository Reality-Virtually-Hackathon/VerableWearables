//
//  InterfaceController.swift
//  WearableWerewolvesWatch WatchKit Extension
//
//  Created by Albert Schweitzer on 10/8/17.
//  Copyright © 2017 aschwtzr. All rights reserved.
//

import WatchKit
import Foundation


class InterfaceController: WKInterfaceController {
    @IBOutlet var appImage: WKInterfaceImage!
    var images = ["App1", "App2", "App3"]
    var imageCounter = 0
    
    override func awake(withContext context: Any?) {
        super.awake(withContext: context)
        
        // Configure interface objects here.
    }
    
    @IBAction func swipeImage(_ sender: Any) {
        if(imageCounter == images.count - 1) {
            imageCounter = 0
        } else{
            imageCounter+=1
        }
        appImage.setImageNamed(images[imageCounter])
        
    }
    override func willActivate() {
        // This method is called when watch view controller is about to be visible to user
        super.willActivate()
    }
    
    override func didDeactivate() {
        // This method is called when watch view controller is no longer visible
        super.didDeactivate()
    }

}
