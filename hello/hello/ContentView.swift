//
//  ContentView.swift
//  hello
//
//  Created by pranshul gupta  on 11/05/23.
//

import SwiftUI

struct ContentView: View {
    @Binding var document: helloDocument

    var body: some View {
        TextEditor(text: $document.text)
    }
}

struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        ContentView(document: .constant(helloDocument()))
    }
}
