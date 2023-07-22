//
//  helloApp.swift
//  hello
//
//  Created by pranshul gupta  on 11/05/23.
//

import SwiftUI

@main
struct helloApp: App {
    var body: some Scene {
        DocumentGroup(newDocument: helloDocument()) { file in
            ContentView(document: file.$document)
        }
    }
}
